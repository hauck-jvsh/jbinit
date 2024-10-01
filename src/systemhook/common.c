#include <systemhook/common.h>
#include <xpc/xpc.h>
#include <systemhook/launchd.h>
#include <mach-o/dyld.h>
#include <sys/param.h>
#include <sys/mount.h>
#include <sandbox/private.h>
#include <paths.h>
#include <termios.h>
#include <sys/stat.h>
#include <xpc/private.h>
#include <dlfcn.h>
#include <systemhook/envbuf.h>
#include <paleinfo.h>

__API_AVAILABLE(macos(10.8), ios(6.0))
int posix_spawnattr_getprocesstype_np(const posix_spawnattr_t * __restrict, int * __restrict);

char *JB_SandboxExtensions = NULL;
SHOOK_EXPORT char *JB_RootPath = NULL;
SHOOK_EXPORT char *JB_PinfoFlags = NULL;
SHOOK_EXPORT uint64_t pflags = 0;

#if 0
#define JBD_MSG_SETUID_FIX 21
#define JBD_MSG_PROCESS_BINARY 22
#define JBD_MSG_DEBUG_ME 24
#define JBD_MSG_FORK_FIX 25
#define JBD_MSG_INTERCEPT_USERSPACE_PANIC 26
#endif

#ifdef ASAN
#define JETSAM_MULTIPLIER 10
#else
#define JETSAM_MULTIPLIER 3
#endif
#define XPC_TIMEOUT 0.1 * NSEC_PER_SEC

#define POSIX_SPAWNATTR_OFF_MEMLIMIT_ACTIVE 0x48
#define POSIX_SPAWNATTR_OFF_MEMLIMIT_INACTIVE 0x4C

/* everything is debugged on palera1n */
bool swh_is_debugged = true;

bool stringStartsWith(const char *str, const char* prefix)
{
	if (!str || !prefix) {
		return false;
	}

	size_t str_len = strlen(str);
	size_t prefix_len = strlen(prefix);

	if (str_len < prefix_len) {
		return false;
	}

	return !strncmp(str, prefix, prefix_len);
}

bool stringEndsWith(const char* str, const char* suffix)
{
	if (!str || !suffix) {
		return false;
	}

	size_t str_len = strlen(str);
	size_t suffix_len = strlen(suffix);

	if (str_len < suffix_len) {
		return false;
	}

	return !strcmp(str + str_len - suffix_len, suffix);
}

extern char **environ;
kern_return_t bootstrap_look_up(mach_port_t port, const char *service, mach_port_t *server_port);

// Derived from posix_spawnp in Apple libc
int resolvePath(const char *file, const char *searchPath, int (^attemptHandler)(char *path))
{
	const char *env_path;
	char *bp;
	char *cur;
	char *p;
	size_t lp;
	size_t ln;
	int err = 0;
	int eacces = 0;
	struct stat sb;
	char path_buf[PATH_MAX];

	env_path = searchPath;
	if (!env_path) {
		env_path = getenv("PATH");
		if (!env_path) {
			env_path = _PATH_DEFPATH;
		}
	}

	/* If it's an absolute or relative path name, it's easy. */
	if (index(file, '/')) {
		bp = (char *)file;
		cur = NULL;
		goto retry;
	}
	bp = path_buf;

	/* If it's an empty path name, fail in the usual POSIX way. */
	if (*file == '\0')
		return (ENOENT);

	if ((cur = alloca(strlen(env_path) + 1)) == NULL)
		return ENOMEM;
	strcpy(cur, env_path);
	while ((p = strsep(&cur, ":")) != NULL) {
		/*
		 * It's a SHELL path -- double, leading and trailing colons
		 * mean the current directory.
		 */
		if (*p == '\0') {
			p = ".";
			lp = 1;
		} else {
			lp = strlen(p);
		}
		ln = strlen(file);

		/*
		 * If the path is too long complain.  This is a possible
		 * security issue; given a way to make the path too long
		 * the user may spawn the wrong program.
		 */
		if (lp + ln + 2 > sizeof(path_buf)) {
			err = ENAMETOOLONG;
			goto done;
		}
		bcopy(p, path_buf, lp);
		path_buf[lp] = '/';
		bcopy(file, path_buf + lp + 1, ln);
		path_buf[lp + ln + 1] = '\0';

retry:		err = attemptHandler(bp);
		switch (err) {
		case E2BIG:
		case ENOMEM:
		case ETXTBSY:
			goto done;
		case ELOOP:
		case ENAMETOOLONG:
		case ENOENT:
		case ENOTDIR:
			break;
		case ENOEXEC:
			goto done;
		default:
			/*
			 * EACCES may be for an inaccessible directory or
			 * a non-executable file.  Call stat() to decide
			 * which.  This also handles ambiguities for EFAULT
			 * and EIO, and undocumented errors like ESTALE.
			 * We hope that the race for a stat() is unimportant.
			 */
			if (stat(bp, &sb) != 0)
				break;
			if (err == EACCES) {
				eacces = 1;
				continue;
			}
			goto done;
		}
	}
	if (eacces)
		err = EACCES;
	else
		err = ENOENT;
done:
	return (err);
}

void enumeratePathString(const char *pathsString, void (^enumBlock)(const char *pathString, bool *stop))
{
	char *pathsCopy = strdup(pathsString);
	char *pathString = strtok(pathsCopy, ":");
	while (pathString != NULL) {
		bool stop = false;
		enumBlock(pathString, &stop);
		if (stop) break;
		pathString = strtok(NULL, ":");
	}
	free(pathsCopy);
}

typedef enum 
{
	kBinaryConfigDontInject = 1 << 0,
	kBinaryConfigDontProcess = 1 << 1
} kBinaryConfig;

kBinaryConfig configForBinary(const char* path, char *const argv[restrict])
{
	// we can't use __builtin_available in systemhook because we are hooking it
	DyldBuildVersion ios16_build_version;
	ios16_build_version.version = CONSTRUCT_V(16, 0, 0);
	ios16_build_version.platform = PLATFORM_IOS;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunguarded-availability-new"

	if (!strcmp(path, "/usr/libexec/xpcproxy")) {
		if (argv && argv[0] && argv[1]) {
			if (!strcmp(argv[1], "com.apple.securityd"))
			{

				return 0;
			}
			if (!strcmp(argv[1], "com.apple.ReportCrash")) {
				// Skip ReportCrash too as it might need to execute while jailbreakd is in a crashed state
				return (kBinaryConfigDontInject | kBinaryConfigDontProcess);
			} else if (!strcmp(argv[1], "com.apple.ReportMemoryException")) {
				// Skip ReportMemoryException too as it might need to execute while jailbreakd is in a crashed state
				return (kBinaryConfigDontInject | kBinaryConfigDontProcess);
			} else if (!strcmp(argv[1], "com.apple.logd")   ||
							 !strcmp(argv[1], "com.apple.notifyd") ||
							 !strcmp(argv[1], "com.apple.mobile.usermanagerd")) {
				// These seem to be problematic on iOS 16+ (dyld gets stuck in a weird way)
				if (_availability_version_check && _availability_version_check_hook(1, &ios16_build_version)) {
					return (kBinaryConfigDontInject | kBinaryConfigDontProcess);
				}
			} else if (stringStartsWith(argv[1], "com.apple.WebKit.WebContent")) {
				// The most sandboxed process on the system, we can't support it on iOS 16+ for now
				if (_availability_version_check && _availability_version_check_hook(1, &ios16_build_version)) {
						return (kBinaryConfigDontInject | kBinaryConfigDontProcess);
				}
			}
		}
	}
#pragma clang diagnostic pop

	// Blacklist to ensure general system stability
	// I don't like this but for some processes it seems neccessary
	const char *processBlacklist[] = {
		"/System/Library/Frameworks/GSS.framework/Helpers/GSSCred",
		"/System/Library/PrivateFrameworks/IDSBlastDoorSupport.framework/XPCServices/IDSBlastDoorService.xpc/IDSBlastDoorService",
		"/System/Library/PrivateFrameworks/MessagesBlastDoorSupport.framework/XPCServices/MessagesBlastDoorService.xpc/MessagesBlastDoorService",
		"/System/Library/PrivateFrameworks/DataAccess.framework/Support/dataaccessd",
		"/usr/sbin/wifid"
	};
	size_t blacklistCount = sizeof(processBlacklist) / sizeof(processBlacklist[0]);
	for (size_t i = 0; i < blacklistCount; i++)
	{
		if (!strcmp(processBlacklist[i], path)) return (kBinaryConfigDontInject | kBinaryConfigDontProcess);
	}

	return 0;
}

// 1. Make sure the about to be spawned binary and all of it's dependencies are trust cached
// 2. Insert "DYLD_INSERT_LIBRARIES=/usr/lib/systemhook.dylib" into all binaries spawned
SHOOK_EXPORT int spawn_hook_common(pid_t *restrict pid, const char *restrict path,
					   const posix_spawn_file_actions_t *restrict file_actions,
					   const posix_spawnattr_t *restrict attrp,
					   char *const argv[restrict],
					   char *const envp[restrict],
					   void *orig)
{

	FILE *f = fopen("/cores/launch_log_spawn_hook_common.txt", "a");
	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common arquivo: %s\n", path);
	}

	int (*pspawn_orig)(pid_t *restrict, const char *restrict, const posix_spawn_file_actions_t *restrict, const posix_spawnattr_t *restrict, char *const[restrict], char *const[restrict]) = orig;
	if (!path) {
		return pspawn_orig(pid, path, file_actions, attrp, argv, envp);
	}

	const char *blacklistedPaths[] = {
		"/private/etc/rc.d/libhooker",
		"/private/etc/rc.d/substitute-launcher",
		"/usr/libexec/ellekit/loader",
		"/private/etc/rc.d/ellekit-loader",
		NULL,
		NULL,
		NULL,
		NULL,
	};
	blacklistedPaths[4] = JB_ROOT_PATH("/usr/libexec/ellekit/loader");
	blacklistedPaths[5] = JB_ROOT_PATH("/etc/rc.d/ellekit-loader");
	blacklistedPaths[6] = JB_ROOT_PATH("/etc/rc.d/libhooker");

	char exec_realPath[PATH_MAX];
	realpath(path, exec_realPath);
	for (uint32_t i = 0; blacklistedPaths[i] != NULL; i++) {
		char blacklisted_realPath[PATH_MAX];
		realpath(blacklistedPaths[i], blacklisted_realPath);
		if (!strcmp(blacklisted_realPath, exec_realPath)) {
			if (access(path, X_OK) == 0) {
				path = "/cores/binpack/usr/bin/true";
				argv = (char *const []) { "/cores/binpack/usr/bin/true", NULL };
			}
			break;
		}
	}

	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common real path: %s\n", exec_realPath);
	}

	kBinaryConfig binaryConfig = configForBinary(path, argv);

	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common binaryConfig: %x\n", binaryConfig);
	}

	const char *existingLibraryInserts = envbuf_getenv((const char **)envp, "DYLD_INSERT_LIBRARIES");
	__block bool systemHookAlreadyInserted = false;
	if (existingLibraryInserts) {
		enumeratePathString(existingLibraryInserts, ^(const char *existingLibraryInsert, bool __unused *stop) {
			if (!strcmp(existingLibraryInsert, HOOK_DYLIB_PATH)) {
				systemHookAlreadyInserted = true;
			}
		});
	}

	int JBEnvAlreadyInsertedCount = (int)systemHookAlreadyInserted;

    const char* existingLibrarySearchPaths = envbuf_getenv((const char **)envp, "DYLD_LIBRARY_PATH");
    __block bool librootDirectoryPathAlreadySearched = false;
    if (existingLibrarySearchPaths) {
        enumeratePathString(existingLibrarySearchPaths, ^(const char *existingSearchPath, bool __unused *stop) {
            if (!strcmp(existingSearchPath, LIBROOT_DYLIB_DIRECTORY_PATH)) {
                librootDirectoryPathAlreadySearched = true;
            }
        });
    }

    JBEnvAlreadyInsertedCount += (int)librootDirectoryPathAlreadySearched;
	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common incial JBEnvAlreadyInsertedCount: %d\n", JBEnvAlreadyInsertedCount);
	}

	if (envbuf_getenv((const char **)envp, "JB_SANDBOX_EXTENSIONS")) {
		JBEnvAlreadyInsertedCount++;
		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common incial JB_SANDBOX_EXTENSIONS\n");
		}
	}

	if (envbuf_getenv((const char **)envp, "JB_ROOT_PATH")) {
		JBEnvAlreadyInsertedCount++;
		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common incial JB_ROOT_PATH\n");
		}
	}

	if (envbuf_getenv((const char **)envp, "JB_PINFO_FLAGS")) {
		JBEnvAlreadyInsertedCount++;
		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common incial JB_PINFO_FLAGS\n");
		}
	}

	if (envbuf_getenv((const char **)envp, "JB_TWEAKLOADER_PATH")) {
		JBEnvAlreadyInsertedCount++;
		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common incial JB_TWEAKLOADER_PATH\n");
		}
	}

	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common final JBEnvAlreadyInsertedCount: %d\n", JBEnvAlreadyInsertedCount);
	}

	// Check if we can find at least one reason to not insert jailbreak related environment variables
	// In this case we also need to remove pre existing environment variables if they are already set
	bool shouldInsertJBEnv = true;
	bool hasSafeModeVariable = false;
	do {
		if (binaryConfig & kBinaryConfigDontInject) {
			shouldInsertJBEnv = false;
			break;
		}

		// Check if we can find a _SafeMode or _MSSafeMode variable
		// In this case we do not want to inject anything
		const char *safeModeValue = envbuf_getenv((const char **)envp, "_SafeMode");
		const char *msSafeModeValue = envbuf_getenv((const char **)envp, "_MSSafeMode");
		if (safeModeValue) {
			if (!strcmp(safeModeValue, "1")) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou safeModeValue\n");
				}
				shouldInsertJBEnv = false;
				hasSafeModeVariable = true;
				break;
			}
		}
		if (msSafeModeValue) {
			if (!strcmp(msSafeModeValue, "1")) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou msSafeModeValue\n");
				}
				shouldInsertJBEnv = false;
				hasSafeModeVariable = true;
				break;
			}
		}

		if (attrp) {
			if (f != NULL)
			{
				fprintf(f, "spawn_hook_common entrou attrp\n");
			}

			int proctype = 0;
			posix_spawnattr_getprocesstype_np(attrp, &proctype);
			if (proctype == POSIX_SPAWN_PROC_TYPE_DRIVER) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou POSIX_SPAWN_PROC_TYPE_DRIVER\n");
				}
				// Do not inject hook into DriverKit drivers
				shouldInsertJBEnv = false;
				break;
			}
		}

		if (access(HOOK_DYLIB_PATH, F_OK) != 0) {
			// If the hook dylib doesn't exist, don't try to inject it (would crash the process)
			shouldInsertJBEnv = false;
			break;
		}
	} while (0);

	if (f != NULL)
	{
		fprintf(f, "spawn_hook_common shouldInsertJBEnv:%d   hasSafeModeVariable:%d \n", shouldInsertJBEnv, hasSafeModeVariable);
	}

	// If systemhook is being injected and Jetsam limits are set, increase them by a factor of JETSAM_MULTIPLIER
	if (shouldInsertJBEnv) {
		if (attrp) {
			if (f != NULL)
			{
				fprintf(f, "spawn_hook_common entrou shouldInsertJBEnv e attrp\n");
			}
			_posix_spawnattr_t attrStruct = *(_posix_spawnattr_t *)attrp;
			if (attrStruct) {
				int memlimit_active = attrStruct->psa_memlimit_active;
				if (memlimit_active != -1) {
					attrStruct->psa_memlimit_active = memlimit_active * JETSAM_MULTIPLIER;
				}
				int memlimit_inactive = attrStruct->psa_memlimit_inactive;
				if (memlimit_inactive != -1) {
					attrStruct->psa_memlimit_inactive = memlimit_inactive * JETSAM_MULTIPLIER;
				}
			}
		}
	}

	if ((shouldInsertJBEnv && JBEnvAlreadyInsertedCount == JB_ENV_COUNT) || (!shouldInsertJBEnv && JBEnvAlreadyInsertedCount == 0 && !hasSafeModeVariable)) {
		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common retornou original\n");
		}

		// we're already good, just call orig
		return pspawn_orig(pid, path, file_actions, attrp, argv, envp);
	}
	else {
		// the state we want to be in is not the state we are in right now

		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common nao retornou original\n");
		}

		char **envc = envbuf_mutcopy((const char **)envp);

		if (shouldInsertJBEnv) {
			if (f != NULL)
			{
				fprintf(f, "spawn_hook_common entrou shouldInsertJBEnv\n");
			}
			if (!systemHookAlreadyInserted) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou !systemHookAlreadyInserted\n");
				}
				char newLibraryInsert[strlen(HOOK_DYLIB_PATH) + (existingLibraryInserts ? (strlen(existingLibraryInserts) + 1) : 0) + 1];
				strcpy(newLibraryInsert, HOOK_DYLIB_PATH);
				if (existingLibraryInserts) {
					strcat(newLibraryInsert, ":");
					strcat(newLibraryInsert, existingLibraryInserts);
				}
				envbuf_setenv(&envc, "DYLD_INSERT_LIBRARIES", newLibraryInsert);
			}

            if (!librootDirectoryPathAlreadySearched) {

				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou !librootDirectoryPathAlreadySearched\n");
				}
				char newLibrarySearchPaths[strlen(LIBROOT_DYLIB_DIRECTORY_PATH) + (existingLibrarySearchPaths ? (strlen(existingLibrarySearchPaths) + 1) : 0) + 1];
				strcpy(newLibrarySearchPaths, LIBROOT_DYLIB_DIRECTORY_PATH);
				if (existingLibrarySearchPaths)
				{
					strcat(newLibrarySearchPaths, ":");
					strcat(newLibrarySearchPaths, existingLibrarySearchPaths);
				}
				envbuf_setenv(&envc, "DYLD_LIBRARY_PATH", newLibrarySearchPaths);
			}

			envbuf_setenv(&envc, "JB_SANDBOX_EXTENSIONS", JB_SandboxExtensions);
			envbuf_setenv(&envc, "JB_ROOT_PATH", JB_RootPath);
			envbuf_setenv(&envc, "JB_PINFO_FLAGS", JB_PinfoFlags);
			envbuf_setenv(&envc, "JB_TWEAKLOADER_PATH", JB_TweakLoaderPath);
		}
		else {
			if (f != NULL)
			{
				fprintf(f, "spawn_hook_common entrou else shouldInsertJBEnv\n");
			}
			if (systemHookAlreadyInserted && existingLibraryInserts) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou systemHookAlreadyInserted && existingLibraryInserts\n");
				}
				if (!strcmp(existingLibraryInserts, HOOK_DYLIB_PATH)) {
					envbuf_unsetenv(&envc, "DYLD_INSERT_LIBRARIES");
				}
				else {
					if (f != NULL)
					{
						fprintf(f, "spawn_hook_common entrou else !strcmp(existingLibraryInserts, HOOK_DYLIB_PATH)\n");
					}
					char *newLibraryInsert = malloc(strlen(existingLibraryInserts)+1);
                    if (!newLibraryInsert) return ENOMEM;
					newLibraryInsert[0] = '\0';

					__block bool first = true;
					enumeratePathString(existingLibraryInserts, ^(const char *existingLibraryInsert, bool __unused *stop) {
						if (strcmp(existingLibraryInsert, HOOK_DYLIB_PATH) != 0) {
							if (first) {
								strcpy(newLibraryInsert, existingLibraryInsert);
								first = false;
							}
							else {
								strcat(newLibraryInsert, ":");
								strcat(newLibraryInsert, existingLibraryInsert);
							}
						}
					});
					envbuf_setenv(&envc, "DYLD_INSERT_LIBRARIES", newLibraryInsert);

					free(newLibraryInsert);
				}
			}
            if (librootDirectoryPathAlreadySearched && existingLibrarySearchPaths) {
				if (f != NULL)
				{
					fprintf(f, "spawn_hook_common entrou librootDirectoryPathAlreadySearched && existingLibrarySearchPaths\n");
				}
				if (!strcmp(existingLibrarySearchPaths, LIBROOT_DYLIB_DIRECTORY_PATH))
				{
					envbuf_unsetenv(&envc, "DYLD_LIBRARY_PATH");
				}
				else
				{
					if (f != NULL)
					{
						fprintf(f, "spawn_hook_common entrou else !strcmp(existingLibraryInserts, HOOK_DYLIB_PATH)\n");
					}
					char *newLibrarySearchPaths = malloc(strlen(existingLibrarySearchPaths) + 1);
					if (!newLibrarySearchPaths) return ENOMEM;
                    newLibrarySearchPaths[0] = '\0';

                    __block bool first = true;
                    enumeratePathString(existingLibraryInserts, ^(const char *existingSearchPath, bool __unused *stop) {
                        if (strcmp(existingSearchPath, LIBROOT_DYLIB_DIRECTORY_PATH) != 0) {
                            if (first) {
                                strcpy(newLibrarySearchPaths, existingSearchPath);
                                first = false;
                            }
                            else {
                                strcat(newLibrarySearchPaths, ":");
                                strcat(newLibrarySearchPaths, existingSearchPath);
                            }
                        }
                    });
                    envbuf_setenv(&envc, "DYLD_LIBRARY_PATH", newLibrarySearchPaths);
                    free(newLibrarySearchPaths);
				}
			}

			envbuf_unsetenv(&envc, "_SafeMode");
			envbuf_unsetenv(&envc, "_MSSafeMode");
			envbuf_unsetenv(&envc, "JB_SANDBOX_EXTENSIONS");
			envbuf_unsetenv(&envc, "JB_ROOT_PATH");
            envbuf_unsetenv(&envc, "JB_PINFO_FLAGS");
		}

		if (f != NULL)
		{
			fprintf(f, "spawn_hook_common Final da funcao\n");
			fclose(f);
		}

		int retval = pspawn_orig(pid, path, file_actions, attrp, argv, envc);
		envbuf_free(envc);
		return retval;
	}
}
