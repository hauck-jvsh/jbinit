#include <stdint.h>
#include <stdio.h>
#include <substrate.h>
#include <CoreFoundation/CoreFoundation.h>
#include <dirent.h>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <objc/runtime.h>
#include <os/log.h>

#define BASEADDR 0x100000000


void FUN_1000021ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000021ec called\n");
    fclose(f);
}

void FUN_10000231c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000231c called\n");
    fclose(f);
}

void FUN_100002454_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100002454 called\n");
    fclose(f);
}

void LoadSystemBag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LoadSystemBag called\n");
    fclose(f);
}

void LoadKeyBag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LoadKeyBag called\n");
    fclose(f);
}

void LoadUserBag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LoadUserBag called\n");
    fclose(f);
}

void FUN_1000029b8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000029b8 called\n");
    fclose(f);
}

void FUN_100002aa0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100002aa0 called\n");
    fclose(f);
}

void FUN_1000032e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000032e0 called\n");
    fclose(f);
}

void savingofKeybagFORUSER_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "savingofKeybagFORUSER called\n");
    fclose(f);
}

void ChangeSystemSecret_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "ChangeSystemSecret called\n");
    fclose(f);
}

void FUN_100003bc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003bc0 called\n");
    fclose(f);
}

void FUN_100003c84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003c84 called\n");
    fclose(f);
}

void ChangeUserKeybag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "ChangeUserKeybag called\n");
    fclose(f);
}

void FUN_100003e80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003e80 called\n");
    fclose(f);
}

void FUN_10000400c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000400c called\n");
    fclose(f);
}

void FUN_10000427c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000427c called\n");
    fclose(f);
}

void DecryptKBWithCrypto_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "DecryptKBWithCrypto called\n");
    fclose(f);
}

void GetParseKB_MK_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "GetParseKB_MK called\n");
    fclose(f);
}

void FUN_100004a60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004a60 called\n");
    fclose(f);
}

void FUN_100004b2c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004b2c called\n");
    fclose(f);
}

void FUN_100004b38_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004b38 called\n");
    fclose(f);
}

void listener_shouldAcceptNewConnection__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "listener_shouldAcceptNewConnection_ called\n");
    fclose(f);
}

void sharedService_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "sharedService called\n");
    fclose(f);
}

void FUN_100004c48_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004c48 called\n");
    fclose(f);
}

void remoteProcessHasBooleanEntitlement__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "remoteProcessHasBooleanEntitlement_ called\n");
    fclose(f);
}

void remoteServiceName_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "remoteServiceName called\n");
    fclose(f);
}

void retrievePasscodeFromFileHandle_ofLength_withbaseaddress__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "retrievePasscodeFromFileHandle_ofLength_withbaseaddress_ called\n");
    fclose(f);
}

void changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_ called\n");
    fclose(f);
}

void FUN_100005240_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005240 called\n");
    fclose(f);
}

void FUN_100005250_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005250 called\n");
    fclose(f);
}

void FUN_100005258_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005258 called\n");
    fclose(f);
}

void FUN_10000541c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000541c called\n");
    fclose(f);
}

void FUN_100005470_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005470 called\n");
    fclose(f);
}

void getPasscodeBlobWithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "getPasscodeBlobWithReply_ called\n");
    fclose(f);
}

void changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_ called\n");
    fclose(f);
}

void FUN_100005a04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005a04 called\n");
    fclose(f);
}

void FUN_100005b58_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005b58 called\n");
    fclose(f);
}

void FUN_100005ba4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005ba4 called\n");
    fclose(f);
}

void changeClassKeysGenerationWithSecret_secretSize_generationOption_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_ called\n");
    fclose(f);
}

void registerBackupBag_withSecret_secretSize_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "registerBackupBag_withSecret_secretSize_reply_ called\n");
    fclose(f);
}

void getBackupBlobreply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "getBackupBlobreply_ called\n");
    fclose(f);
}

void getBackupkeyForVolume_andCryptoID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "getBackupkeyForVolume_andCryptoID_withReply_ called\n");
    fclose(f);
}

void startBackupSessionForVolume_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "startBackupSessionForVolume_withReply_ called\n");
    fclose(f);
}

void stopBackupSessionForVolume_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "stopBackupSessionForVolume_withReply_ called\n");
    fclose(f);
}

void enableBackupForVolume_withSecret_secretSize_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "enableBackupForVolume_withSecret_secretSize_reply_ called\n");
    fclose(f);
}

void disableBackupForVolume_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "disableBackupForVolume_reply_ called\n");
    fclose(f);
}

void backupUUIDForVolume_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "backupUUIDForVolume_reply_ called\n");
    fclose(f);
}

void stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_ called\n");
    fclose(f);
}

void stashCommitwithUID_WithFlags_WithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "stashCommitwithUID_WithFlags_WithReply_ called\n");
    fclose(f);
}

void stashVerifywithUID_WithFlags_WithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "stashVerifywithUID_WithFlags_WithReply_ called\n");
    fclose(f);
}

void stashDestroywithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "stashDestroywithReply_ called\n");
    fclose(f);
}

void isKeyRollingInProgresswithreply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "isKeyRollingInProgresswithreply_ called\n");
    fclose(f);
}

void migrationWithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "migrationWithReply_ called\n");
    fclose(f);
}

void getLockSateInfoforUser_WithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "getLockSateInfoforUser_WithReply_ called\n");
    fclose(f);
}

void getDeviceLockState_needsExtended_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "getDeviceLockState_needsExtended_withReply_ called\n");
    fclose(f);
}

void passcodeUnlockStartWithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "passcodeUnlockStartWithReply_ called\n");
    fclose(f);
}

void passcodeUnlockSuccessWithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "passcodeUnlockSuccessWithReply_ called\n");
    fclose(f);
}

void passcodeUnlockFailedWithReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "passcodeUnlockFailedWithReply_ called\n");
    fclose(f);
}

void SeshatEnrollWithSecret_secretSize_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SeshatEnrollWithSecret_secretSize_withReply_ called\n");
    fclose(f);
}

void Event__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Event_ called\n");
    fclose(f);
}

void SeshatUnlockWithSecret_secretSize_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SeshatUnlockWithSecret_secretSize_withReply_ called\n");
    fclose(f);
}

void SeshatRecoverWithSecret_secretSize_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SeshatRecoverWithSecret_secretSize_withReply_ called\n");
    fclose(f);
}

void SeshatDebugWithDebugMask_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SeshatDebugWithDebugMask_withReply_ called\n");
    fclose(f);
}

void createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_ called\n");
    fclose(f);
}

void FUN_100007500_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007500 called\n");
    fclose(f);
}

void loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_ called\n");
    fclose(f);
}

void KBXPCLoadKeyBagForUserSession_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "KBXPCLoadKeyBagForUserSession called\n");
    fclose(f);
}

void FUN_100007a28_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007a28 called\n");
    fclose(f);
}

void FUN_100007a6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007a6c called\n");
    fclose(f);
}

void unloadKeybagForUserSession_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "unloadKeybagForUserSession_withReply_ called\n");
    fclose(f);
}

void FUN_100007be8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007be8 called\n");
    fclose(f);
}

void FUN_100007c8c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007c8c called\n");
    fclose(f);
}

void FUN_100007c9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007c9c called\n");
    fclose(f);
}

void deleteKeybagForUserSession_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "deleteKeybagForUserSession_withReply_ called\n");
    fclose(f);
}

void FUN_100007e0c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007e0c called\n");
    fclose(f);
}

void setVolumeToPersona_withPersonaString_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "setVolumeToPersona_withPersonaString_withReply_ called\n");
    fclose(f);
}

void FUN_10000804c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000804c called\n");
    fclose(f);
}

void FUN_1000082a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000082a0 called\n");
    fclose(f);
}

void FUN_1000082ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000082ec called\n");
    fclose(f);
}

void createSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "createSyncBagForUserSession_withSessionUID_withReply_ called\n");
    fclose(f);
}

void FUN_1000084a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000084a0 called\n");
    fclose(f);
}

void FUN_100008548_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008548 called\n");
    fclose(f);
}

void FUN_10000857c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000857c called\n");
    fclose(f);
}

void loadSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "loadSyncBagForUserSession_withSessionUID_withReply_ called\n");
    fclose(f);
}

void FUN_100008720_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008720 called\n");
    fclose(f);
}

void verifySyncBagForUserSession_withSessionUID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "verifySyncBagForUserSession_withSessionUID_withReply_ called\n");
    fclose(f);
}

void FUN_100008940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008940 called\n");
    fclose(f);
}

void unloadSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "unloadSyncBagForUserSession_withSessionUID_withReply_ called\n");
    fclose(f);
}

void FUN_100008b60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008b60 called\n");
    fclose(f);
}

void removeSyncBagForUserSession_withSessionUID_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "removeSyncBagForUserSession_withSessionUID_withReply_ called\n");
    fclose(f);
}

void FUN_100008dd0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008dd0 called\n");
    fclose(f);
}

void createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_ called\n");
    fclose(f);
}

void FUN_100009244_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009244 called\n");
    fclose(f);
}

void removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_ called\n");
    fclose(f);
}

void FUN_1000094a8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000094a8 called\n");
    fclose(f);
}

void FUN_10000954c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000954c called\n");
    fclose(f);
}

void FUN_100009588_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009588 called\n");
    fclose(f);
}

void FUN_1000095bc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000095bc called\n");
    fclose(f);
}

void sharedLockModelWithUID__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "sharedLockModelWithUID_ called\n");
    fclose(f);
}

void FUN_100009728_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009728 called\n");
    fclose(f);
}

void initWithUID__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "initWithUID_ called\n");
    fclose(f);
}

void initWithJournalPath_uid__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "initWithJournalPath_uid_ called\n");
    fclose(f);
}

void dealloc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "dealloc called\n");
    fclose(f);
}

void notePasscodeEntryBegan_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "notePasscodeEntryBegan called\n");
    fclose(f);
}

void FUN_1000098c4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098c4 called\n");
    fclose(f);
}

void FUN_1000098cc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098cc called\n");
    fclose(f);
}

void FUN_1000098dc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098dc called\n");
    fclose(f);
}

void notePasscodeEntryCancelled_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "notePasscodeEntryCancelled called\n");
    fclose(f);
}

void FUN_100009940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009940 called\n");
    fclose(f);
}

void notePasscodeUnlockSucceeded_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "notePasscodeUnlockSucceeded called\n");
    fclose(f);
}

void FUN_1000099a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000099a0 called\n");
    fclose(f);
}

void notePasscodeUnlockFailed_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "notePasscodeUnlockFailed called\n");
    fclose(f);
}

void FUN_100009a00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009a00 called\n");
    fclose(f);
}

void isPermanentlyBlocked_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "isPermanentlyBlocked called\n");
    fclose(f);
}

void FUN_100009a9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009a9c called\n");
    fclose(f);
}

void FUN_100009ab0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009ab0 called\n");
    fclose(f);
}

void FUN_100009aec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009aec called\n");
    fclose(f);
}

void isTemporarilyBlocked_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "isTemporarilyBlocked called\n");
    fclose(f);
}

void timeUntilUnblockedSinceReferenceDate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "timeUntilUnblockedSinceReferenceDate called\n");
    fclose(f);
}

void FUN_100009bec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009bec called\n");
    fclose(f);
}

void isWipePending_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "isWipePending called\n");
    fclose(f);
}

void FUN_100009c90_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009c90 called\n");
    fclose(f);
}

void failedPasscodeAttempts_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "failedPasscodeAttempts called\n");
    fclose(f);
}

void FUN_100009d30_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009d30 called\n");
    fclose(f);
}

void userDeleted_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "userDeleted called\n");
    fclose(f);
}

void _persistentStateQueue_beginSpeculativeFailureCharge_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_beginSpeculativeFailureCharge called\n");
    fclose(f);
}

void _persistentStateQueue_cancelSpeculativeFailureCharge_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_cancelSpeculativeFailureCharge called\n");
    fclose(f);
}

void _persistentStateQueue_rollbackSpeculativeFailureCharge_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_rollbackSpeculativeFailureCharge called\n");
    fclose(f);
}

void _persistentStateQueue_unlockSucceeded_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_unlockSucceeded called\n");
    fclose(f);
}

void _persistentStateQueue_unlockFailed_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_unlockFailed called\n");
    fclose(f);
}

void _persistentStateQueue_loadLockState_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_persistentStateQueue_loadLockState called\n");
    fclose(f);
}

void _loadLockState_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_loadLockState called\n");
    fclose(f);
}

void _lockStateValueForKey_ofType__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_lockStateValueForKey_ofType_ called\n");
    fclose(f);
}

void _setLockStateValue_forKey__instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_setLockStateValue_forKey_ called\n");
    fclose(f);
}

void FUN_10000a368_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a368 called\n");
    fclose(f);
}

void FUN_10000a4d0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a4d0 called\n");
    fclose(f);
}

void FUN_10000a4f0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a4f0 called\n");
    fclose(f);
}

void FUN_10000a510_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a510 called\n");
    fclose(f);
}

void FUN_10000a530_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a530 called\n");
    fclose(f);
}

void FUN_10000a590_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a590 called\n");
    fclose(f);
}

void FUN_10000a620_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a620 called\n");
    fclose(f);
}

void FUN_10000a67c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a67c called\n");
    fclose(f);
}

void FUN_10000a708_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a708 called\n");
    fclose(f);
}

void FUN_10000a954_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a954 called\n");
    fclose(f);
}

void FUN_10000a95c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a95c called\n");
    fclose(f);
}

void FUN_10000a9a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a9a4 called\n");
    fclose(f);
}

void FUN_10000ab68_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ab68 called\n");
    fclose(f);
}

void FUN_10000ace8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ace8 called\n");
    fclose(f);
}

void FUN_10000adac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000adac called\n");
    fclose(f);
}

void FUN_10000ae88_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ae88 called\n");
    fclose(f);
}

void FUN_10000af5c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000af5c called\n");
    fclose(f);
}

void FUN_10000afe8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000afe8 called\n");
    fclose(f);
}

void FUN_10000b088_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b088 called\n");
    fclose(f);
}

void FUN_10000b100_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b100 called\n");
    fclose(f);
}

void FUN_10000b200_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b200 called\n");
    fclose(f);
}

void FUN_10000b238_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b238 called\n");
    fclose(f);
}

void FUN_10000b278_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b278 called\n");
    fclose(f);
}

void FUN_10000b2c4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b2c4 called\n");
    fclose(f);
}

void memcopy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "memcopy called\n");
    fclose(f);
}

void FUN_10000b450_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b450 called\n");
    fclose(f);
}

void FUN_10000b4c8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b4c8 called\n");
    fclose(f);
}

void FUN_10000b61c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b61c called\n");
    fclose(f);
}

void FUN_10000b624_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b624 called\n");
    fclose(f);
}

void LerbPlist_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LerbPlist called\n");
    fclose(f);
}

void FUN_10000b884_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b884 called\n");
    fclose(f);
}

void FUN_10000b8d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b8d8 called\n");
    fclose(f);
}

void FUN_10000b91c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b91c called\n");
    fclose(f);
}

void FUN_10000b958_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b958 called\n");
    fclose(f);
}

void FUN_10000b98c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b98c called\n");
    fclose(f);
}

void FUN_10000bb64_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bb64 called\n");
    fclose(f);
}

void FUN_10000bc28_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bc28 called\n");
    fclose(f);
}

void FUN_10000bcb0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bcb0 called\n");
    fclose(f);
}

void FUN_10000bd70_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bd70 called\n");
    fclose(f);
}

void FUN_10000be4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000be4c called\n");
    fclose(f);
}

void FUN_10000beb4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000beb4 called\n");
    fclose(f);
}

void FUN_10000bfa4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfa4 called\n");
    fclose(f);
}

void FUN_10000bfb4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfb4 called\n");
    fclose(f);
}

void FUN_10000bfc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfc0 called\n");
    fclose(f);
}

void FUN_10000c040_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c040 called\n");
    fclose(f);
}

void FUN_10000c0a8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c0a8 called\n");
    fclose(f);
}

void FUN_10000c198_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c198 called\n");
    fclose(f);
}

void FUN_10000c218_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c218 called\n");
    fclose(f);
}

void FUN_10000c5d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c5d8 called\n");
    fclose(f);
}

void FUN_10000c63c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c63c called\n");
    fclose(f);
}

void FUN_10000c918_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c918 called\n");
    fclose(f);
}

void FUN_10000cacc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cacc called\n");
    fclose(f);
}

void FUN_10000cad8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cad8 called\n");
    fclose(f);
}

void FUN_10000cb6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb6c called\n");
    fclose(f);
}

void FUN_10000cb7c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb7c called\n");
    fclose(f);
}

void FUN_10000cb88_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb88 called\n");
    fclose(f);
}

void FUN_10000cbac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cbac called\n");
    fclose(f);
}

void FUN_10000cc60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cc60 called\n");
    fclose(f);
}

void FUN_10000cd14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cd14 called\n");
    fclose(f);
}

void FUN_10000ce08_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ce08 called\n");
    fclose(f);
}

void FUN_10000cf68_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cf68 called\n");
    fclose(f);
}

void FUN_10000d024_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d024 called\n");
    fclose(f);
}

void FUN_10000d094_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d094 called\n");
    fclose(f);
}

void FUN_10000d150_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d150 called\n");
    fclose(f);
}

void FUN_10000d1c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d1c0 called\n");
    fclose(f);
}

void FUN_10000d27c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d27c called\n");
    fclose(f);
}

void FUN_10000d2ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d2ec called\n");
    fclose(f);
}

void FUN_10000d364_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d364 called\n");
    fclose(f);
}

void FUN_10000d4a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d4a4 called\n");
    fclose(f);
}

void LoadKeyBagForUserSession_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LoadKeyBagForUserSession called\n");
    fclose(f);
}

void SetAPFSVolumeIDforKeybag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SetAPFSVolumeIDforKeybag called\n");
    fclose(f);
}

void FUN_10000db5c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000db5c called\n");
    fclose(f);
}

void FUN_10000ddf8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ddf8 called\n");
    fclose(f);
}

void FUN_10000de00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000de00 called\n");
    fclose(f);
}

void FUN_10000decc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000decc called\n");
    fclose(f);
}

void FUN_10000e140_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e140 called\n");
    fclose(f);
}

void FUN_10000e424_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e424 called\n");
    fclose(f);
}

void FUN_10000e6a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e6a0 called\n");
    fclose(f);
}

void FUN_10000e774_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e774 called\n");
    fclose(f);
}

void FUN_10000e844_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e844 called\n");
    fclose(f);
}

void FUN_10000ea00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ea00 called\n");
    fclose(f);
}

void thunk_FUN_10000b91c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "thunk_FUN_10000b91c called\n");
    fclose(f);
}

void LogFunc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "LogFunc called\n");
    fclose(f);
}

void FUN_10000ec2c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ec2c called\n");
    fclose(f);
}

void FUN_10000ed60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ed60 called\n");
    fclose(f);
}

void FUN_10000ef4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ef4c called\n");
    fclose(f);
}

void FUN_10000f07c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f07c called\n");
    fclose(f);
}

void FUN_10000f17c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f17c called\n");
    fclose(f);
}

void FUN_10000f220_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f220 called\n");
    fclose(f);
}

void FUN_10000f2b4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f2b4 called\n");
    fclose(f);
}

void FUN_10000f304_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f304 called\n");
    fclose(f);
}

void FUN_10000f3cc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f3cc called\n");
    fclose(f);
}

void FUN_10000f45c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f45c called\n");
    fclose(f);
}

void entry_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "entry called\n");
    fclose(f);
}

void FUN_10000fa38_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fa38 called\n");
    fclose(f);
}

void FUN_10000fc6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fc6c called\n");
    fclose(f);
}

void FUN_10000fccc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fccc called\n");
    fclose(f);
}

void FUN_10000fd0c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fd0c called\n");
    fclose(f);
}

void FUN_10000fd7c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fd7c called\n");
    fclose(f);
}

void FUN_10000fde4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fde4 called\n");
    fclose(f);
}

void FUN_10000fdf8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fdf8 called\n");
    fclose(f);
}

void FUN_10000fee0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fee0 called\n");
    fclose(f);
}

void FUN_10000ff04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ff04 called\n");
    fclose(f);
}

void FUN_10000ff18_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ff18 called\n");
    fclose(f);
}

void FUN_100010204_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010204 called\n");
    fclose(f);
}

void keybagd_getpasscodeblob_block_invoke_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "keybagd_getpasscodeblob_block_invoke called\n");
    fclose(f);
}

void FUN_10001033c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001033c called\n");
    fclose(f);
}

void FUN_1000103d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000103d8 called\n");
    fclose(f);
}

void FUN_100010484_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010484 called\n");
    fclose(f);
}

void FUN_1000105a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000105a0 called\n");
    fclose(f);
}

void FUN_100010650_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010650 called\n");
    fclose(f);
}

void FUN_100010780_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010780 called\n");
    fclose(f);
}

void FUN_10001084c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001084c called\n");
    fclose(f);
}

void FUN_1000109d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000109d8 called\n");
    fclose(f);
}

void FUN_100010ab0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010ab0 called\n");
    fclose(f);
}

void FUN_100010c04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010c04 called\n");
    fclose(f);
}

void FUN_100010ca8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010ca8 called\n");
    fclose(f);
}

void FUN_100010dd0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010dd0 called\n");
    fclose(f);
}

void keybagd_stashcreate_block_invoke_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "keybagd_stashcreate_block_invoke called\n");
    fclose(f);
}

void FUN_100010fe0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010fe0 called\n");
    fclose(f);
}

void FUN_10001101c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001101c called\n");
    fclose(f);
}

void FUN_10001104c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001104c called\n");
    fclose(f);
}

void FUN_1000110fc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000110fc called\n");
    fclose(f);
}

void FUN_100011180_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011180 called\n");
    fclose(f);
}

void FUN_100011214_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011214 called\n");
    fclose(f);
}

void FUN_10001126c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001126c called\n");
    fclose(f);
}

void FUN_10001137c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001137c called\n");
    fclose(f);
}

void FUN_10001141c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001141c called\n");
    fclose(f);
}

void FUN_100011468_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011468 called\n");
    fclose(f);
}

void FUN_1000114a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000114a4 called\n");
    fclose(f);
}

void FUN_100011544_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011544 called\n");
    fclose(f);
}

void FUN_10001176c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001176c called\n");
    fclose(f);
}

void FUN_100011824_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011824 called\n");
    fclose(f);
}

void FUN_1000118d0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000118d0 called\n");
    fclose(f);
}

void FUN_100011968_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011968 called\n");
    fclose(f);
}

void FUN_1000119a8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000119a8 called\n");
    fclose(f);
}

void FUN_100011a34_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011a34 called\n");
    fclose(f);
}

void FUN_100011a70_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011a70 called\n");
    fclose(f);
}

void FUN_100011c04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011c04 called\n");
    fclose(f);
}

void FUN_100011ca0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011ca0 called\n");
    fclose(f);
}

void FUN_100011da4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011da4 called\n");
    fclose(f);
}

void FUN_100011e30_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011e30 called\n");
    fclose(f);
}

void FUN_100011eb8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011eb8 called\n");
    fclose(f);
}

void FUN_100011fb4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011fb4 called\n");
    fclose(f);
}

void FUN_100011ff0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011ff0 called\n");
    fclose(f);
}

void FUN_100012018_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012018 called\n");
    fclose(f);
}

void FUN_10001210c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001210c called\n");
    fclose(f);
}

void FUN_10001224c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001224c called\n");
    fclose(f);
}

void FUN_100012318_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012318 called\n");
    fclose(f);
}

void FUN_100012370_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012370 called\n");
    fclose(f);
}

void FUN_1000123c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000123c0 called\n");
    fclose(f);
}

void FUN_100012450_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012450 called\n");
    fclose(f);
}

void FUN_100012468_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012468 called\n");
    fclose(f);
}

void FUN_100012564_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012564 called\n");
    fclose(f);
}

void FUN_100012580_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012580 called\n");
    fclose(f);
}

void FUN_1000125d0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000125d0 called\n");
    fclose(f);
}

void InterageSEP_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "InterageSEP called\n");
    fclose(f);
}

void FUN_100012758_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012758 called\n");
    fclose(f);
}

void FUN_1000127cc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000127cc called\n");
    fclose(f);
}

void FUN_10001285c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001285c called\n");
    fclose(f);
}

void FUN_100012980_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012980 called\n");
    fclose(f);
}

void FUN_100012a9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012a9c called\n");
    fclose(f);
}

void FUN_100012ad8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012ad8 called\n");
    fclose(f);
}

void FUN_100012aec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012aec called\n");
    fclose(f);
}

void FUN_100012c44_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012c44 called\n");
    fclose(f);
}

void FUN_100012d04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012d04 called\n");
    fclose(f);
}

void FUN_100012dc8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012dc8 called\n");
    fclose(f);
}

void SetBagHandleForUID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "SetBagHandleForUID called\n");
    fclose(f);
}

void FUN_100012e84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012e84 called\n");
    fclose(f);
}

void FUN_100012e98_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012e98 called\n");
    fclose(f);
}

void FUN_100012ea4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012ea4 called\n");
    fclose(f);
}

void FUN_100012fb8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012fb8 called\n");
    fclose(f);
}

void FUN_100013104_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013104 called\n");
    fclose(f);
}

void FUN_1000131b4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000131b4 called\n");
    fclose(f);
}

void FUN_1000132b0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000132b0 called\n");
    fclose(f);
}

void updateofGraceperiodFORUSER_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "updateofGraceperiodFORUSER called\n");
    fclose(f);
}

void FUN_100013624_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013624 called\n");
    fclose(f);
}

void FUN_100013728_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013728 called\n");
    fclose(f);
}

void FUN_100013820_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013820 called\n");
    fclose(f);
}

void FUN_100013868_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013868 called\n");
    fclose(f);
}

void FUN_1000139f8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000139f8 called\n");
    fclose(f);
}

void FUN_100013a88_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013a88 called\n");
    fclose(f);
}

void FUN_100013bfc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013bfc called\n");
    fclose(f);
}

void FUN_100013c08_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013c08 called\n");
    fclose(f);
}

void FUN_100013cf4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013cf4 called\n");
    fclose(f);
}

void FUN_100013d00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013d00 called\n");
    fclose(f);
}

void FUN_100013d8c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013d8c called\n");
    fclose(f);
}

void FUN_100013e14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013e14 called\n");
    fclose(f);
}

void FUN_100013e28_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013e28 called\n");
    fclose(f);
}

void FUN_100013fa0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013fa0 called\n");
    fclose(f);
}

void FUN_100013fcc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013fcc called\n");
    fclose(f);
}

void FUN_10001410c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001410c called\n");
    fclose(f);
}

void FUN_1000141b8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000141b8 called\n");
    fclose(f);
}

void FUN_1000142dc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000142dc called\n");
    fclose(f);
}

void FUN_1000142f4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000142f4 called\n");
    fclose(f);
}

void FUN_100014390_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014390 called\n");
    fclose(f);
}

void FUN_1000144f0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000144f0 called\n");
    fclose(f);
}

void FUN_100014578_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014578 called\n");
    fclose(f);
}

void FUN_1000145f0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000145f0 called\n");
    fclose(f);
}

void FUN_100014a0c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014a0c called\n");
    fclose(f);
}

void FUN_100014c44_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014c44 called\n");
    fclose(f);
}

void FUN_100014d08_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014d08 called\n");
    fclose(f);
}

void FUN_100014e00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014e00 called\n");
    fclose(f);
}

void FUN_100014ed0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014ed0 called\n");
    fclose(f);
}

void FUN_100014fac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014fac called\n");
    fclose(f);
}

void FUN_100015034_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015034 called\n");
    fclose(f);
}

void FUN_1000150ac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000150ac called\n");
    fclose(f);
}

void FUN_100015214_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015214 called\n");
    fclose(f);
}

void FUN_1000153b8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000153b8 called\n");
    fclose(f);
}

void FUN_1000154f8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000154f8 called\n");
    fclose(f);
}

void FUN_100015630_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015630 called\n");
    fclose(f);
}

void FUN_1000157fc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000157fc called\n");
    fclose(f);
}

void FUN_10001580c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001580c called\n");
    fclose(f);
}

void FUN_100015874_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015874 called\n");
    fclose(f);
}

void FUN_100015a84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015a84 called\n");
    fclose(f);
}

void FUN_100015b10_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015b10 called\n");
    fclose(f);
}

void FUN_100015be8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015be8 called\n");
    fclose(f);
}

void FUN_100015c4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015c4c called\n");
    fclose(f);
}

void FUN_100015cb0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015cb0 called\n");
    fclose(f);
}

void FUN_100015d14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015d14 called\n");
    fclose(f);
}

void _ADClientAddValueForScalarKey_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ADClientAddValueForScalarKey called\n");
    fclose(f);
}

void _ADClientSetValueForScalarKey_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ADClientSetValueForScalarKey called\n");
    fclose(f);
}

void _CCCryptorCreate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CCCryptorCreate called\n");
    fclose(f);
}

void _CCCryptorFinal_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CCCryptorFinal called\n");
    fclose(f);
}

void _CCCryptorGetOutputLength_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CCCryptorGetOutputLength called\n");
    fclose(f);
}

void _CCCryptorRelease_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CCCryptorRelease called\n");
    fclose(f);
}

void _CCCryptorUpdate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CCCryptorUpdate called\n");
    fclose(f);
}

void _CFAbsoluteTimeGetCurrent_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFAbsoluteTimeGetCurrent called\n");
    fclose(f);
}

void _CFArrayAppendValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayAppendValue called\n");
    fclose(f);
}

void _CFArrayCreateMutable_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayCreateMutable called\n");
    fclose(f);
}

void _CFArrayCreateMutableCopy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayCreateMutableCopy called\n");
    fclose(f);
}

void _CFArrayGetCount_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayGetCount called\n");
    fclose(f);
}

void _CFArrayGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayGetTypeID called\n");
    fclose(f);
}

void _CFArrayGetValueAtIndex_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayGetValueAtIndex called\n");
    fclose(f);
}

void _CFArrayRemoveValueAtIndex_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFArrayRemoveValueAtIndex called\n");
    fclose(f);
}

void _CFBooleanGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFBooleanGetTypeID called\n");
    fclose(f);
}

void _CFBooleanGetValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFBooleanGetValue called\n");
    fclose(f);
}

void _CFDataCreate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataCreate called\n");
    fclose(f);
}

void _CFDataCreateMutable_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataCreateMutable called\n");
    fclose(f);
}

void _CFDataCreateWithBytesNoCopy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataCreateWithBytesNoCopy called\n");
    fclose(f);
}

void _CFDataGetBytePtr_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataGetBytePtr called\n");
    fclose(f);
}

void _CFDataGetBytes_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataGetBytes called\n");
    fclose(f);
}

void _CFDataGetLength_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataGetLength called\n");
    fclose(f);
}

void _CFDataGetMutableBytePtr_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataGetMutableBytePtr called\n");
    fclose(f);
}

void _CFDataGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataGetTypeID called\n");
    fclose(f);
}

void _CFDataSetLength_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDataSetLength called\n");
    fclose(f);
}

void _CFDateCompare_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDateCompare called\n");
    fclose(f);
}

void _CFDateCreate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDateCreate called\n");
    fclose(f);
}

void _CFDateGetAbsoluteTime_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDateGetAbsoluteTime called\n");
    fclose(f);
}

void _CFDictionaryAddValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryAddValue called\n");
    fclose(f);
}

void _CFDictionaryContainsKey_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryContainsKey called\n");
    fclose(f);
}

void _CFDictionaryCreateMutable_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryCreateMutable called\n");
    fclose(f);
}

void _CFDictionaryCreateMutableCopy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryCreateMutableCopy called\n");
    fclose(f);
}

void _CFDictionaryGetCount_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryGetCount called\n");
    fclose(f);
}

void _CFDictionaryGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryGetTypeID called\n");
    fclose(f);
}

void _CFDictionaryGetValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryGetValue called\n");
    fclose(f);
}

void _CFDictionaryGetValueIfPresent_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryGetValueIfPresent called\n");
    fclose(f);
}

void _CFDictionaryRemoveValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryRemoveValue called\n");
    fclose(f);
}

void _CFDictionaryReplaceValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionaryReplaceValue called\n");
    fclose(f);
}

void _CFDictionarySetValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFDictionarySetValue called\n");
    fclose(f);
}

void _CFEqual_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFEqual called\n");
    fclose(f);
}

void _CFGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFGetTypeID called\n");
    fclose(f);
}

void _CFNumberCreate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFNumberCreate called\n");
    fclose(f);
}

void _CFNumberGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFNumberGetTypeID called\n");
    fclose(f);
}

void _CFNumberGetValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFNumberGetValue called\n");
    fclose(f);
}

void _CFPropertyListCreateWithStream_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFPropertyListCreateWithStream called\n");
    fclose(f);
}

void _CFPropertyListWrite_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFPropertyListWrite called\n");
    fclose(f);
}

void _CFReadStreamClose_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFReadStreamClose called\n");
    fclose(f);
}

void _CFReadStreamCreateWithBytesNoCopy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFReadStreamCreateWithBytesNoCopy called\n");
    fclose(f);
}

void _CFReadStreamOpen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFReadStreamOpen called\n");
    fclose(f);
}

void _CFRelease_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFRelease called\n");
    fclose(f);
}

void _CFRetain_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFRetain called\n");
    fclose(f);
}

void _CFRunLoopRun_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFRunLoopRun called\n");
    fclose(f);
}

void _CFShow_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFShow called\n");
    fclose(f);
}

void _CFStringCompare_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringCompare called\n");
    fclose(f);
}

void _CFStringCreateWithCString_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringCreateWithCString called\n");
    fclose(f);
}

void _CFStringCreateWithFormat_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringCreateWithFormat called\n");
    fclose(f);
}

void _CFStringCreateWithFormatAndArguments_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringCreateWithFormatAndArguments called\n");
    fclose(f);
}

void _CFStringGetCString_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringGetCString called\n");
    fclose(f);
}

void _CFStringGetCStringPtr_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringGetCStringPtr called\n");
    fclose(f);
}

void _CFStringGetTypeID_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFStringGetTypeID called\n");
    fclose(f);
}

void _CFWriteStreamClose_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFWriteStreamClose called\n");
    fclose(f);
}

void _CFWriteStreamCopyProperty_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFWriteStreamCopyProperty called\n");
    fclose(f);
}

void _CFWriteStreamCreateWithAllocatedBuffers_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFWriteStreamCreateWithAllocatedBuffers called\n");
    fclose(f);
}

void _CFWriteStreamOpen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_CFWriteStreamOpen called\n");
    fclose(f);
}

void _IOConnectCallMethod_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOConnectCallMethod called\n");
    fclose(f);
}

void _IOConnectSetNotificationPort_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOConnectSetNotificationPort called\n");
    fclose(f);
}

void _IOMasterPort_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOMasterPort called\n");
    fclose(f);
}

void _IOObjectRelease_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOObjectRelease called\n");
    fclose(f);
}

void _IORegistryEntryCreateCFProperty_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IORegistryEntryCreateCFProperty called\n");
    fclose(f);
}

void _IORegistryEntryFromPath_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IORegistryEntryFromPath called\n");
    fclose(f);
}

void _IORegistryEntrySetCFProperty_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IORegistryEntrySetCFProperty called\n");
    fclose(f);
}

void _IOServiceClose_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOServiceClose called\n");
    fclose(f);
}

void _IOServiceGetMatchingService_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOServiceGetMatchingService called\n");
    fclose(f);
}

void _IOServiceMatching_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOServiceMatching called\n");
    fclose(f);
}

void _IOServiceOpen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_IOServiceOpen called\n");
    fclose(f);
}

void _MOLogEnableDiskLogging_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_MOLogEnableDiskLogging called\n");
    fclose(f);
}

void _MOLogOpen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_MOLogOpen called\n");
    fclose(f);
}

void _MOLogWriteV_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_MOLogWriteV called\n");
    fclose(f);
}

void _SecRandomCopyBytes_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_SecRandomCopyBytes called\n");
    fclose(f);
}

void __Block_object_assign_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "__Block_object_assign called\n");
    fclose(f);
}

void __Block_object_dispose_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "__Block_object_dispose called\n");
    fclose(f);
}

void __Unwind_Resume_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "__Unwind_Resume called\n");
    fclose(f);
}

void ___error_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "___error called\n");
    fclose(f);
}

void ___stack_chk_fail_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "___stack_chk_fail called\n");
    fclose(f);
}

void ___strlcat_chk_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "___strlcat_chk called\n");
    fclose(f);
}

void __os_log_impl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "__os_log_impl called\n");
    fclose(f);
}

void _access_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_access called\n");
    fclose(f);
}

void _analytics_send_event_lazy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_analytics_send_event_lazy called\n");
    fclose(f);
}

void _arc4random_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_arc4random called\n");
    fclose(f);
}

void _asctime_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_asctime called\n");
    fclose(f);
}

void _bootstrap_check_in_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_bootstrap_check_in called\n");
    fclose(f);
}

void _bzero_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_bzero called\n");
    fclose(f);
}

void _calloc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_calloc called\n");
    fclose(f);
}

void _ccder_decode_constructed_tl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_decode_constructed_tl called\n");
    fclose(f);
}

void _ccder_decode_len_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_decode_len called\n");
    fclose(f);
}

void _ccder_decode_tag_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_decode_tag called\n");
    fclose(f);
}

void _ccder_decode_tl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_decode_tl called\n");
    fclose(f);
}

void _ccder_encode_body_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_encode_body called\n");
    fclose(f);
}

void _ccder_encode_constructed_tl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_encode_constructed_tl called\n");
    fclose(f);
}

void _ccder_encode_tl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_encode_tl called\n");
    fclose(f);
}

void _ccder_sizeof_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_ccder_sizeof called\n");
    fclose(f);
}

void _chmod_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_chmod called\n");
    fclose(f);
}

void _chown_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_chown called\n");
    fclose(f);
}

void _close_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_close called\n");
    fclose(f);
}

void _closedir_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_closedir called\n");
    fclose(f);
}

void _dirfd_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dirfd called\n");
    fclose(f);
}

void _dispatch_async_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_async called\n");
    fclose(f);
}

void _dispatch_get_global_queue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_get_global_queue called\n");
    fclose(f);
}

void _dispatch_once_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_once called\n");
    fclose(f);
}

void _dispatch_queue_attr_make_with_qos_class_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_queue_attr_make_with_qos_class called\n");
    fclose(f);
}

void _dispatch_queue_create_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_queue_create called\n");
    fclose(f);
}

void _dispatch_release_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_release called\n");
    fclose(f);
}

void _dispatch_resume_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_resume called\n");
    fclose(f);
}

void _dispatch_source_create_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_source_create called\n");
    fclose(f);
}

void _dispatch_source_set_event_handler_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_source_set_event_handler called\n");
    fclose(f);
}

void _dispatch_sync_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dispatch_sync called\n");
    fclose(f);
}

void _dlerror_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dlerror called\n");
    fclose(f);
}

void _dlopen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dlopen called\n");
    fclose(f);
}

void _dlsym_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_dlsym called\n");
    fclose(f);
}

void _exit_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_exit called\n");
    fclose(f);
}

void _fclose_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fclose called\n");
    fclose(f);
}

void _fcntl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fcntl called\n");
    fclose(f);
}

void _fopen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fopen called\n");
    fclose(f);
}

void _fprintf_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fprintf called\n");
    fclose(f);
}

void _free_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_free called\n");
    fclose(f);
}

void _fsctl_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fsctl called\n");
    fclose(f);
}

void _fstat_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fstat called\n");
    fclose(f);
}

void _fts_close_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fts_close called\n");
    fclose(f);
}

void _fts_open_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fts_open called\n");
    fclose(f);
}

void _fts_read_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fts_read called\n");
    fclose(f);
}

void _fts_set_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fts_set called\n");
    fclose(f);
}

void _fwrite_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_fwrite called\n");
    fclose(f);
}

void _getattrlist_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_getattrlist called\n");
    fclose(f);
}

void _getenv_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_getenv called\n");
    fclose(f);
}

void _getgrnam_r_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_getgrnam_r called\n");
    fclose(f);
}

void _getpwnam_r_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_getpwnam_r called\n");
    fclose(f);
}

void _host_get_multiuser_config_flags_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_host_get_multiuser_config_flags called\n");
    fclose(f);
}

void _localtime_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_localtime called\n");
    fclose(f);
}

void _mach_host_self_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_mach_host_self called\n");
    fclose(f);
}

void _mach_msg_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_mach_msg called\n");
    fclose(f);
}

void _malloc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_malloc called\n");
    fclose(f);
}

void _memcmp_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_memcmp called\n");
    fclose(f);
}

void _memcpy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_memcpy called\n");
    fclose(f);
}

void _memset_s_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_memset_s called\n");
    fclose(f);
}

void _mkdir_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_mkdir called\n");
    fclose(f);
}

void _mkpath_np_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_mkpath_np called\n");
    fclose(f);
}

void _objc_alloc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_alloc called\n");
    fclose(f);
}

void _objc_autoreleaseReturnValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_autoreleaseReturnValue called\n");
    fclose(f);
}

void _objc_claimAutoreleasedReturnValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_claimAutoreleasedReturnValue called\n");
    fclose(f);
}

void _objc_getClass_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_getClass called\n");
    fclose(f);
}

void _objc_msgSendSuper2_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_msgSendSuper2 called\n");
    fclose(f);
}

void _objc_opt_class_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_opt_class called\n");
    fclose(f);
}

void _objc_opt_isKindOfClass_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_opt_isKindOfClass called\n");
    fclose(f);
}

void _objc_opt_new_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_opt_new called\n");
    fclose(f);
}

void _objc_release_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release called\n");
    fclose(f);
}

void _objc_release_x1_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x1 called\n");
    fclose(f);
}

void _objc_release_x19_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x19 called\n");
    fclose(f);
}

void _objc_release_x20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x20 called\n");
    fclose(f);
}

void _objc_release_x21_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x21 called\n");
    fclose(f);
}

void _objc_release_x22_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x22 called\n");
    fclose(f);
}

void _objc_release_x23_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x23 called\n");
    fclose(f);
}

void _objc_release_x8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x8 called\n");
    fclose(f);
}

void _objc_release_x9_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_release_x9 called\n");
    fclose(f);
}

void _objc_retain_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain called\n");
    fclose(f);
}

void _objc_retainAutoreleaseReturnValue_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retainAutoreleaseReturnValue called\n");
    fclose(f);
}

void _objc_retain_x19_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x19 called\n");
    fclose(f);
}

void _objc_retain_x2_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x2 called\n");
    fclose(f);
}

void _objc_retain_x20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x20 called\n");
    fclose(f);
}

void _objc_retain_x21_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x21 called\n");
    fclose(f);
}

void _objc_retain_x22_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x22 called\n");
    fclose(f);
}

void _objc_retain_x23_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x23 called\n");
    fclose(f);
}

void _objc_retain_x3_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x3 called\n");
    fclose(f);
}

void _objc_retain_x4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x4 called\n");
    fclose(f);
}

void _objc_retain_x8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_retain_x8 called\n");
    fclose(f);
}

void _objc_sync_enter_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_sync_enter called\n");
    fclose(f);
}

void _objc_sync_exit_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_sync_exit called\n");
    fclose(f);
}

void _open_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_open called\n");
    fclose(f);
}

void _open_dprotected_np_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_open_dprotected_np called\n");
    fclose(f);
}

void _opendir_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_opendir called\n");
    fclose(f);
}

void _openlog_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_openlog called\n");
    fclose(f);
}

void _os_log_type_enabled_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_os_log_type_enabled called\n");
    fclose(f);
}

void _os_variant_uses_ephemeral_storage_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_os_variant_uses_ephemeral_storage called\n");
    fclose(f);
}

void _pwrite_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_pwrite called\n");
    fclose(f);
}

void _read_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_read called\n");
    fclose(f);
}

void _realpath_DARWIN_EXTSN_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_realpath_DARWIN_EXTSN called\n");
    fclose(f);
}

void _reboot_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_reboot called\n");
    fclose(f);
}

void _rename_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_rename called\n");
    fclose(f);
}

void _renamex_np_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_renamex_np called\n");
    fclose(f);
}

void _setattrlist_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_setattrlist called\n");
    fclose(f);
}

void _setiopolicy_np_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_setiopolicy_np called\n");
    fclose(f);
}

void _snprintf_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_snprintf called\n");
    fclose(f);
}

void _sqlite3_bind_blob_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_bind_blob called\n");
    fclose(f);
}

void _sqlite3_bind_int64_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_bind_int64 called\n");
    fclose(f);
}

void _sqlite3_close_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_close called\n");
    fclose(f);
}

void _sqlite3_column_blob_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_column_blob called\n");
    fclose(f);
}

void _sqlite3_column_bytes_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_column_bytes called\n");
    fclose(f);
}

void _sqlite3_column_int_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_column_int called\n");
    fclose(f);
}

void _sqlite3_column_text_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_column_text called\n");
    fclose(f);
}

void _sqlite3_errmsg_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_errmsg called\n");
    fclose(f);
}

void _sqlite3_exec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_exec called\n");
    fclose(f);
}

void _sqlite3_file_control_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_file_control called\n");
    fclose(f);
}

void _sqlite3_finalize_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_finalize called\n");
    fclose(f);
}

void _sqlite3_free_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_free called\n");
    fclose(f);
}

void _sqlite3_open_v2_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_open_v2 called\n");
    fclose(f);
}

void _sqlite3_prepare_v2_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_prepare_v2 called\n");
    fclose(f);
}

void _sqlite3_step_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sqlite3_step called\n");
    fclose(f);
}

void _stat_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_stat called\n");
    fclose(f);
}

void _statfs_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_statfs called\n");
    fclose(f);
}

void _strcmp_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strcmp called\n");
    fclose(f);
}

void _strdup_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strdup called\n");
    fclose(f);
}

void _strerror_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strerror called\n");
    fclose(f);
}

void _strlen_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strlen called\n");
    fclose(f);
}

void _strncasecmp_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strncasecmp called\n");
    fclose(f);
}

void _strnstr_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_strnstr called\n");
    fclose(f);
}

void _sync_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sync called\n");
    fclose(f);
}

void _sysctlbyname_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_sysctlbyname called\n");
    fclose(f);
}

void _syslog_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_syslog called\n");
    fclose(f);
}

void _time_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_time called\n");
    fclose(f);
}

void _unlink_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_unlink called\n");
    fclose(f);
}

void _uuid_copy_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_uuid_copy called\n");
    fclose(f);
}

void _uuid_parse_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_uuid_parse called\n");
    fclose(f);
}

void _uuid_unparse_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_uuid_unparse called\n");
    fclose(f);
}

void _vm_allocate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_vm_allocate called\n");
    fclose(f);
}

void _vm_deallocate_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_vm_deallocate called\n");
    fclose(f);
}

void _voucher_get_current_persona_proximate_info_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_voucher_get_current_persona_proximate_info called\n");
    fclose(f);
}

void _write_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_write called\n");
    fclose(f);
}

void _xpc_activity_copy_criteria_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_activity_copy_criteria called\n");
    fclose(f);
}

void _xpc_activity_get_state_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_activity_get_state called\n");
    fclose(f);
}

void _xpc_activity_register_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_activity_register called\n");
    fclose(f);
}

void _xpc_activity_set_criteria_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_activity_set_criteria called\n");
    fclose(f);
}

void _xpc_bool_create_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_bool_create called\n");
    fclose(f);
}

void _xpc_dictionary_create_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_dictionary_create called\n");
    fclose(f);
}

void _xpc_dictionary_get_string_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_dictionary_get_string called\n");
    fclose(f);
}

void _xpc_dictionary_set_bool_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_dictionary_set_bool called\n");
    fclose(f);
}

void _xpc_dictionary_set_int64_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_dictionary_set_int64 called\n");
    fclose(f);
}

void _xpc_dictionary_set_string_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_dictionary_set_string called\n");
    fclose(f);
}

void _xpc_release_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_release called\n");
    fclose(f);
}

void _xpc_set_event_stream_handler_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_set_event_stream_handler called\n");
    fclose(f);
}

void _xpc_transaction_begin_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_transaction_begin called\n");
    fclose(f);
}

void _xpc_transaction_end_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_transaction_end called\n");
    fclose(f);
}

void _xpc_uint64_create_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_xpc_uint64_create called\n");
    fclose(f);
}

void FUN_100017440_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017440 called\n");
    fclose(f);
}

void FUN_100017460_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017460 called\n");
    fclose(f);
}

void FUN_100017480_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017480 called\n");
    fclose(f);
}

void FUN_1000174a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174a0 called\n");
    fclose(f);
}

void FUN_1000174c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174c0 called\n");
    fclose(f);
}

void FUN_1000174e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174e0 called\n");
    fclose(f);
}

void FUN_100017500_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017500 called\n");
    fclose(f);
}

void FUN_100017520_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017520 called\n");
    fclose(f);
}

void FUN_100017540_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017540 called\n");
    fclose(f);
}

void FUN_100017560_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017560 called\n");
    fclose(f);
}

void FUN_100017580_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017580 called\n");
    fclose(f);
}

void FUN_1000175a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175a0 called\n");
    fclose(f);
}

void FUN_1000175c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175c0 called\n");
    fclose(f);
}

void FUN_1000175e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175e0 called\n");
    fclose(f);
}

void FUN_100017600_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017600 called\n");
    fclose(f);
}

void FUN_100017620_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017620 called\n");
    fclose(f);
}

void FUN_100017640_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017640 called\n");
    fclose(f);
}

void FUN_100017660_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017660 called\n");
    fclose(f);
}

void FUN_100017680_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017680 called\n");
    fclose(f);
}

void FUN_1000176a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176a0 called\n");
    fclose(f);
}

void FUN_1000176c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176c0 called\n");
    fclose(f);
}

void FUN_1000176e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176e0 called\n");
    fclose(f);
}

void FUN_100017700_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017700 called\n");
    fclose(f);
}

void FUN_100017720_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017720 called\n");
    fclose(f);
}

void FUN_100017740_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017740 called\n");
    fclose(f);
}

void FUN_100017760_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017760 called\n");
    fclose(f);
}

void FUN_100017780_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017780 called\n");
    fclose(f);
}

void FUN_1000177a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177a0 called\n");
    fclose(f);
}

void FUN_1000177c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177c0 called\n");
    fclose(f);
}

void FUN_1000177e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177e0 called\n");
    fclose(f);
}

void FUN_100017800_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017800 called\n");
    fclose(f);
}

void FUN_100017820_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017820 called\n");
    fclose(f);
}

void FUN_100017840_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017840 called\n");
    fclose(f);
}

void FUN_100017860_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017860 called\n");
    fclose(f);
}

void FUN_100017880_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017880 called\n");
    fclose(f);
}

void FUN_1000178a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178a0 called\n");
    fclose(f);
}

void FUN_1000178c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178c0 called\n");
    fclose(f);
}

void FUN_1000178e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178e0 called\n");
    fclose(f);
}

void FUN_100017900_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017900 called\n");
    fclose(f);
}

void FUN_100017920_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017920 called\n");
    fclose(f);
}

void FUN_100017940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017940 called\n");
    fclose(f);
}

void FUN_100017960_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017960 called\n");
    fclose(f);
}

void FUN_100017980_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017980 called\n");
    fclose(f);
}

void FUN_1000179a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179a0 called\n");
    fclose(f);
}

void FUN_1000179c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179c0 called\n");
    fclose(f);
}

void FUN_1000179e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179e0 called\n");
    fclose(f);
}

void FUN_100017a00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a00 called\n");
    fclose(f);
}

void FUN_100017a20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a20 called\n");
    fclose(f);
}

void FUN_100017a40_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a40 called\n");
    fclose(f);
}

void FUN_100017a60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a60 called\n");
    fclose(f);
}

void FUN_100017a80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a80 called\n");
    fclose(f);
}

void FUN_100017aa0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017aa0 called\n");
    fclose(f);
}

void FUN_100017ac0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ac0 called\n");
    fclose(f);
}

void FUN_100017ae0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ae0 called\n");
    fclose(f);
}

void FUN_100017b00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b00 called\n");
    fclose(f);
}

void FUN_100017b20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b20 called\n");
    fclose(f);
}

void FUN_100017b40_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b40 called\n");
    fclose(f);
}

void FUN_100017b60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b60 called\n");
    fclose(f);
}

void FUN_100017b80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b80 called\n");
    fclose(f);
}

void FUN_100017ba0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ba0 called\n");
    fclose(f);
}

void FUN_100017bc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017bc0 called\n");
    fclose(f);
}

void FUN_100017be0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017be0 called\n");
    fclose(f);
}

void FUN_100017c00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017c00 called\n");
    fclose(f);
}

void _objc_msgSend_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "_objc_msgSend called\n");
    fclose(f);
}

void keybagdInit(void)
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    // Get the image reference for keybagd
    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);

    // Calculate and hook into FUN_1000021ec
    void *addr_FUN_1000021ec = (void *)image + (0x1000021ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000021ec  %x \n", (uint64_t)addr_FUN_1000021ec);
    MSInstrumentFunction(addr_FUN_1000021ec, (void *)&FUN_1000021ec_instrument);

    // Calculate and hook into FUN_10000231c
    void *addr_FUN_10000231c = (void *)image + (0x10000231c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000231c  %x \n", (uint64_t)addr_FUN_10000231c);
    MSInstrumentFunction(addr_FUN_10000231c, (void *)&FUN_10000231c_instrument);

    // Calculate and hook into FUN_100002454
    void *addr_FUN_100002454 = (void *)image + (0x100002454 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100002454  %x \n", (uint64_t)addr_FUN_100002454);
    MSInstrumentFunction(addr_FUN_100002454, (void *)&FUN_100002454_instrument);

    // Calculate and hook into LoadSystemBag
    void *addr_LoadSystemBag = (void *)image + (0x1000025fc - BASEADDR);
    fprintf(f, "Pegou o addr LoadSystemBag  %x \n", (uint64_t)addr_LoadSystemBag);
    MSInstrumentFunction(addr_LoadSystemBag, (void *)&LoadSystemBag_instrument);

    // Calculate and hook into LoadKeyBag
    void *addr_LoadKeyBag = (void *)image + (0x1000026f4 - BASEADDR);
    fprintf(f, "Pegou o addr LoadKeyBag  %x \n", (uint64_t)addr_LoadKeyBag);
    MSInstrumentFunction(addr_LoadKeyBag, (void *)&LoadKeyBag_instrument);

    // Calculate and hook into LoadUserBag
    void *addr_LoadUserBag = (void *)image + (0x10000285c - BASEADDR);
    fprintf(f, "Pegou o addr LoadUserBag  %x \n", (uint64_t)addr_LoadUserBag);
    MSInstrumentFunction(addr_LoadUserBag, (void *)&LoadUserBag_instrument);

    // Calculate and hook into FUN_1000029b8
    void *addr_FUN_1000029b8 = (void *)image + (0x1000029b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000029b8  %x \n", (uint64_t)addr_FUN_1000029b8);
    MSInstrumentFunction(addr_FUN_1000029b8, (void *)&FUN_1000029b8_instrument);

    // Calculate and hook into FUN_100002aa0
    void *addr_FUN_100002aa0 = (void *)image + (0x100002aa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100002aa0  %x \n", (uint64_t)addr_FUN_100002aa0);
    MSInstrumentFunction(addr_FUN_100002aa0, (void *)&FUN_100002aa0_instrument);

    // Calculate and hook into FUN_1000032e0
    void *addr_FUN_1000032e0 = (void *)image + (0x1000032e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000032e0  %x \n", (uint64_t)addr_FUN_1000032e0);
    MSInstrumentFunction(addr_FUN_1000032e0, (void *)&FUN_1000032e0_instrument);

    // Calculate and hook into savingofKeybagFORUSER
    void *addr_savingofKeybagFORUSER = (void *)image + (0x1000034ac - BASEADDR);
    fprintf(f, "Pegou o addr savingofKeybagFORUSER  %x \n", (uint64_t)addr_savingofKeybagFORUSER);
    MSInstrumentFunction(addr_savingofKeybagFORUSER, (void *)&savingofKeybagFORUSER_instrument);

    // Calculate and hook into ChangeSystemSecret
    void *addr_ChangeSystemSecret = (void *)image + (0x100003844 - BASEADDR);
    fprintf(f, "Pegou o addr ChangeSystemSecret  %x \n", (uint64_t)addr_ChangeSystemSecret);
    MSInstrumentFunction(addr_ChangeSystemSecret, (void *)&ChangeSystemSecret_instrument);

    // Calculate and hook into FUN_100003bc0
    void *addr_FUN_100003bc0 = (void *)image + (0x100003bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003bc0  %x \n", (uint64_t)addr_FUN_100003bc0);
    MSInstrumentFunction(addr_FUN_100003bc0, (void *)&FUN_100003bc0_instrument);

    // Calculate and hook into FUN_100003c84
    void *addr_FUN_100003c84 = (void *)image + (0x100003c84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003c84  %x \n", (uint64_t)addr_FUN_100003c84);
    MSInstrumentFunction(addr_FUN_100003c84, (void *)&FUN_100003c84_instrument);

    // Calculate and hook into ChangeUserKeybag
    void *addr_ChangeUserKeybag = (void *)image + (0x100003d60 - BASEADDR);
    fprintf(f, "Pegou o addr ChangeUserKeybag  %x \n", (uint64_t)addr_ChangeUserKeybag);
    MSInstrumentFunction(addr_ChangeUserKeybag, (void *)&ChangeUserKeybag_instrument);

    // Calculate and hook into FUN_100003e80
    void *addr_FUN_100003e80 = (void *)image + (0x100003e80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003e80  %x \n", (uint64_t)addr_FUN_100003e80);
    MSInstrumentFunction(addr_FUN_100003e80, (void *)&FUN_100003e80_instrument);

    // Calculate and hook into FUN_10000400c
    void *addr_FUN_10000400c = (void *)image + (0x10000400c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000400c  %x \n", (uint64_t)addr_FUN_10000400c);
    MSInstrumentFunction(addr_FUN_10000400c, (void *)&FUN_10000400c_instrument);

    // Calculate and hook into FUN_10000427c
    void *addr_FUN_10000427c = (void *)image + (0x10000427c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000427c  %x \n", (uint64_t)addr_FUN_10000427c);
    MSInstrumentFunction(addr_FUN_10000427c, (void *)&FUN_10000427c_instrument);

    // Calculate and hook into DecryptKBWithCrypto
    void *addr_DecryptKBWithCrypto = (void *)image + (0x10000443c - BASEADDR);
    fprintf(f, "Pegou o addr DecryptKBWithCrypto  %x \n", (uint64_t)addr_DecryptKBWithCrypto);
    MSInstrumentFunction(addr_DecryptKBWithCrypto, (void *)&DecryptKBWithCrypto_instrument);

    // Calculate and hook into GetParseKB_MK
    void *addr_GetParseKB_MK = (void *)image + (0x100004758 - BASEADDR);
    fprintf(f, "Pegou o addr GetParseKB_MK  %x \n", (uint64_t)addr_GetParseKB_MK);
    MSInstrumentFunction(addr_GetParseKB_MK, (void *)&GetParseKB_MK_instrument);

    // Calculate and hook into FUN_100004a60
    void *addr_FUN_100004a60 = (void *)image + (0x100004a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004a60  %x \n", (uint64_t)addr_FUN_100004a60);
    MSInstrumentFunction(addr_FUN_100004a60, (void *)&FUN_100004a60_instrument);

    // Calculate and hook into FUN_100004b2c
    void *addr_FUN_100004b2c = (void *)image + (0x100004b2c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b2c  %x \n", (uint64_t)addr_FUN_100004b2c);
    MSInstrumentFunction(addr_FUN_100004b2c, (void *)&FUN_100004b2c_instrument);

    // Calculate and hook into FUN_100004b38
    void *addr_FUN_100004b38 = (void *)image + (0x100004b38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b38  %x \n", (uint64_t)addr_FUN_100004b38);
    MSInstrumentFunction(addr_FUN_100004b38, (void *)&FUN_100004b38_instrument);

    // Calculate and hook into listener_shouldAcceptNewConnection_
    void *addr_listener_shouldAcceptNewConnection_ = (void *)image + (0x100004b44 - BASEADDR);
    fprintf(f, "Pegou o addr listener_shouldAcceptNewConnection_  %x \n", (uint64_t)addr_listener_shouldAcceptNewConnection_);
    MSInstrumentFunction(addr_listener_shouldAcceptNewConnection_, (void *)&listener_shouldAcceptNewConnection__instrument);

    // Calculate and hook into sharedService
    void *addr_sharedService = (void *)image + (0x100004bd4 - BASEADDR);
    fprintf(f, "Pegou o addr sharedService  %x \n", (uint64_t)addr_sharedService);
    MSInstrumentFunction(addr_sharedService, (void *)&sharedService_instrument);

    // Calculate and hook into FUN_100004c48
    void *addr_FUN_100004c48 = (void *)image + (0x100004c48 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004c48  %x \n", (uint64_t)addr_FUN_100004c48);
    MSInstrumentFunction(addr_FUN_100004c48, (void *)&FUN_100004c48_instrument);

    // Calculate and hook into remoteProcessHasBooleanEntitlement_
    void *addr_remoteProcessHasBooleanEntitlement_ = (void *)image + (0x100004c70 - BASEADDR);
    fprintf(f, "Pegou o addr remoteProcessHasBooleanEntitlement_  %x \n", (uint64_t)addr_remoteProcessHasBooleanEntitlement_);
    MSInstrumentFunction(addr_remoteProcessHasBooleanEntitlement_, (void *)&remoteProcessHasBooleanEntitlement__instrument);

    // Calculate and hook into remoteServiceName
    void *addr_remoteServiceName = (void *)image + (0x100004d00 - BASEADDR);
    fprintf(f, "Pegou o addr remoteServiceName  %x \n", (uint64_t)addr_remoteServiceName);
    MSInstrumentFunction(addr_remoteServiceName, (void *)&remoteServiceName_instrument);

    // Calculate and hook into retrievePasscodeFromFileHandle_ofLength_withbaseaddress_
    void *addr_retrievePasscodeFromFileHandle_ofLength_withbaseaddress_ = (void *)image + (0x100004d40 - BASEADDR);
    fprintf(f, "Pegou o addr retrievePasscodeFromFileHandle_ofLength_withbaseaddress_  %x \n", (uint64_t)addr_retrievePasscodeFromFileHandle_ofLength_withbaseaddress_);
    MSInstrumentFunction(addr_retrievePasscodeFromFileHandle_ofLength_withbaseaddress_, (void *)&retrievePasscodeFromFileHandle_ofLength_withbaseaddress__instrument);

    // Calculate and hook into changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_
    void *addr_changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_ = (void *)image + (0x100004db8 - BASEADDR);
    fprintf(f, "Pegou o addr changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_  %x \n", (uint64_t)addr_changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_);
    MSInstrumentFunction(addr_changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply_, (void *)&changeSystemSecretfromOldSecret_oldSize_toNewSecret_newSize_opaqueData_reply__instrument);

    // Calculate and hook into FUN_100005240
    void *addr_FUN_100005240 = (void *)image + (0x100005240 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005240  %x \n", (uint64_t)addr_FUN_100005240);
    MSInstrumentFunction(addr_FUN_100005240, (void *)&FUN_100005240_instrument);

    // Calculate and hook into FUN_100005250
    void *addr_FUN_100005250 = (void *)image + (0x100005250 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005250  %x \n", (uint64_t)addr_FUN_100005250);
    MSInstrumentFunction(addr_FUN_100005250, (void *)&FUN_100005250_instrument);

    // Calculate and hook into FUN_100005258
    void *addr_FUN_100005258 = (void *)image + (0x100005258 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005258  %x \n", (uint64_t)addr_FUN_100005258);
    MSInstrumentFunction(addr_FUN_100005258, (void *)&FUN_100005258_instrument);

    // Calculate and hook into FUN_10000541c
    void *addr_FUN_10000541c = (void *)image + (0x10000541c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000541c  %x \n", (uint64_t)addr_FUN_10000541c);
    MSInstrumentFunction(addr_FUN_10000541c, (void *)&FUN_10000541c_instrument);

    // Calculate and hook into FUN_100005470
    void *addr_FUN_100005470 = (void *)image + (0x100005470 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005470  %x \n", (uint64_t)addr_FUN_100005470);
    MSInstrumentFunction(addr_FUN_100005470, (void *)&FUN_100005470_instrument);

    // Calculate and hook into getPasscodeBlobWithReply_
    void *addr_getPasscodeBlobWithReply_ = (void *)image + (0x1000054b4 - BASEADDR);
    fprintf(f, "Pegou o addr getPasscodeBlobWithReply_  %x \n", (uint64_t)addr_getPasscodeBlobWithReply_);
    MSInstrumentFunction(addr_getPasscodeBlobWithReply_, (void *)&getPasscodeBlobWithReply__instrument);

    // Calculate and hook into changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_
    void *addr_changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_ = (void *)image + (0x100005574 - BASEADDR);
    fprintf(f, "Pegou o addr changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_  %x \n", (uint64_t)addr_changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_);
    MSInstrumentFunction(addr_changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply_, (void *)&changeSystemSecretWithEscrow_fromOldSecret_oldSize_toNewSecret_newSize_opaqueData_keepstate_reply__instrument);

    // Calculate and hook into FUN_100005a04
    void *addr_FUN_100005a04 = (void *)image + (0x100005a04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005a04  %x \n", (uint64_t)addr_FUN_100005a04);
    MSInstrumentFunction(addr_FUN_100005a04, (void *)&FUN_100005a04_instrument);

    // Calculate and hook into FUN_100005b58
    void *addr_FUN_100005b58 = (void *)image + (0x100005b58 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005b58  %x \n", (uint64_t)addr_FUN_100005b58);
    MSInstrumentFunction(addr_FUN_100005b58, (void *)&FUN_100005b58_instrument);

    // Calculate and hook into FUN_100005ba4
    void *addr_FUN_100005ba4 = (void *)image + (0x100005ba4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005ba4  %x \n", (uint64_t)addr_FUN_100005ba4);
    MSInstrumentFunction(addr_FUN_100005ba4, (void *)&FUN_100005ba4_instrument);

    // Calculate and hook into changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_
    void *addr_changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_ = (void *)image + (0x100005be4 - BASEADDR);
    fprintf(f, "Pegou o addr changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_  %x \n", (uint64_t)addr_changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_);
    MSInstrumentFunction(addr_changeClassKeysGenerationWithSecret_secretSize_generationOption_reply_, (void *)&changeClassKeysGenerationWithSecret_secretSize_generationOption_reply__instrument);

    // Calculate and hook into registerBackupBag_withSecret_secretSize_reply_
    void *addr_registerBackupBag_withSecret_secretSize_reply_ = (void *)image + (0x100005e10 - BASEADDR);
    fprintf(f, "Pegou o addr registerBackupBag_withSecret_secretSize_reply_  %x \n", (uint64_t)addr_registerBackupBag_withSecret_secretSize_reply_);
    MSInstrumentFunction(addr_registerBackupBag_withSecret_secretSize_reply_, (void *)&registerBackupBag_withSecret_secretSize_reply__instrument);

    // Calculate and hook into getBackupBlobreply_
    void *addr_getBackupBlobreply_ = (void *)image + (0x100006048 - BASEADDR);
    fprintf(f, "Pegou o addr getBackupBlobreply_  %x \n", (uint64_t)addr_getBackupBlobreply_);
    MSInstrumentFunction(addr_getBackupBlobreply_, (void *)&getBackupBlobreply__instrument);

    // Calculate and hook into getBackupkeyForVolume_andCryptoID_withReply_
    void *addr_getBackupkeyForVolume_andCryptoID_withReply_ = (void *)image + (0x1000060fc - BASEADDR);
    fprintf(f, "Pegou o addr getBackupkeyForVolume_andCryptoID_withReply_  %x \n", (uint64_t)addr_getBackupkeyForVolume_andCryptoID_withReply_);
    MSInstrumentFunction(addr_getBackupkeyForVolume_andCryptoID_withReply_, (void *)&getBackupkeyForVolume_andCryptoID_withReply__instrument);

    // Calculate and hook into startBackupSessionForVolume_withReply_
    void *addr_startBackupSessionForVolume_withReply_ = (void *)image + (0x100006200 - BASEADDR);
    fprintf(f, "Pegou o addr startBackupSessionForVolume_withReply_  %x \n", (uint64_t)addr_startBackupSessionForVolume_withReply_);
    MSInstrumentFunction(addr_startBackupSessionForVolume_withReply_, (void *)&startBackupSessionForVolume_withReply__instrument);

    // Calculate and hook into stopBackupSessionForVolume_withReply_
    void *addr_stopBackupSessionForVolume_withReply_ = (void *)image + (0x1000062dc - BASEADDR);
    fprintf(f, "Pegou o addr stopBackupSessionForVolume_withReply_  %x \n", (uint64_t)addr_stopBackupSessionForVolume_withReply_);
    MSInstrumentFunction(addr_stopBackupSessionForVolume_withReply_, (void *)&stopBackupSessionForVolume_withReply__instrument);

    // Calculate and hook into enableBackupForVolume_withSecret_secretSize_reply_
    void *addr_enableBackupForVolume_withSecret_secretSize_reply_ = (void *)image + (0x1000063b8 - BASEADDR);
    fprintf(f, "Pegou o addr enableBackupForVolume_withSecret_secretSize_reply_  %x \n", (uint64_t)addr_enableBackupForVolume_withSecret_secretSize_reply_);
    MSInstrumentFunction(addr_enableBackupForVolume_withSecret_secretSize_reply_, (void *)&enableBackupForVolume_withSecret_secretSize_reply__instrument);

    // Calculate and hook into disableBackupForVolume_reply_
    void *addr_disableBackupForVolume_reply_ = (void *)image + (0x100006658 - BASEADDR);
    fprintf(f, "Pegou o addr disableBackupForVolume_reply_  %x \n", (uint64_t)addr_disableBackupForVolume_reply_);
    MSInstrumentFunction(addr_disableBackupForVolume_reply_, (void *)&disableBackupForVolume_reply__instrument);

    // Calculate and hook into backupUUIDForVolume_reply_
    void *addr_backupUUIDForVolume_reply_ = (void *)image + (0x100006730 - BASEADDR);
    fprintf(f, "Pegou o addr backupUUIDForVolume_reply_  %x \n", (uint64_t)addr_backupUUIDForVolume_reply_);
    MSInstrumentFunction(addr_backupUUIDForVolume_reply_, (void *)&backupUUIDForVolume_reply__instrument);

    // Calculate and hook into stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_
    void *addr_stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_ = (void *)image + (0x1000067ac - BASEADDR);
    fprintf(f, "Pegou o addr stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_  %x \n", (uint64_t)addr_stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_);
    MSInstrumentFunction(addr_stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply_, (void *)&stashCreatewithSecret_secrestSize_withMode_withUID_WithFlags_reply__instrument);

    // Calculate and hook into stashCommitwithUID_WithFlags_WithReply_
    void *addr_stashCommitwithUID_WithFlags_WithReply_ = (void *)image + (0x1000069e8 - BASEADDR);
    fprintf(f, "Pegou o addr stashCommitwithUID_WithFlags_WithReply_  %x \n", (uint64_t)addr_stashCommitwithUID_WithFlags_WithReply_);
    MSInstrumentFunction(addr_stashCommitwithUID_WithFlags_WithReply_, (void *)&stashCommitwithUID_WithFlags_WithReply__instrument);

    // Calculate and hook into stashVerifywithUID_WithFlags_WithReply_
    void *addr_stashVerifywithUID_WithFlags_WithReply_ = (void *)image + (0x100006ac8 - BASEADDR);
    fprintf(f, "Pegou o addr stashVerifywithUID_WithFlags_WithReply_  %x \n", (uint64_t)addr_stashVerifywithUID_WithFlags_WithReply_);
    MSInstrumentFunction(addr_stashVerifywithUID_WithFlags_WithReply_, (void *)&stashVerifywithUID_WithFlags_WithReply__instrument);

    // Calculate and hook into stashDestroywithReply_
    void *addr_stashDestroywithReply_ = (void *)image + (0x100006bbc - BASEADDR);
    fprintf(f, "Pegou o addr stashDestroywithReply_  %x \n", (uint64_t)addr_stashDestroywithReply_);
    MSInstrumentFunction(addr_stashDestroywithReply_, (void *)&stashDestroywithReply__instrument);

    // Calculate and hook into isKeyRollingInProgresswithreply_
    void *addr_isKeyRollingInProgresswithreply_ = (void *)image + (0x100006c84 - BASEADDR);
    fprintf(f, "Pegou o addr isKeyRollingInProgresswithreply_  %x \n", (uint64_t)addr_isKeyRollingInProgresswithreply_);
    MSInstrumentFunction(addr_isKeyRollingInProgresswithreply_, (void *)&isKeyRollingInProgresswithreply__instrument);

    // Calculate and hook into migrationWithReply_
    void *addr_migrationWithReply_ = (void *)image + (0x100006d1c - BASEADDR);
    fprintf(f, "Pegou o addr migrationWithReply_  %x \n", (uint64_t)addr_migrationWithReply_);
    MSInstrumentFunction(addr_migrationWithReply_, (void *)&migrationWithReply__instrument);

    // Calculate and hook into getLockSateInfoforUser_WithReply_
    void *addr_getLockSateInfoforUser_WithReply_ = (void *)image + (0x100006da4 - BASEADDR);
    fprintf(f, "Pegou o addr getLockSateInfoforUser_WithReply_  %x \n", (uint64_t)addr_getLockSateInfoforUser_WithReply_);
    MSInstrumentFunction(addr_getLockSateInfoforUser_WithReply_, (void *)&getLockSateInfoforUser_WithReply__instrument);

    // Calculate and hook into getDeviceLockState_needsExtended_withReply_
    void *addr_getDeviceLockState_needsExtended_withReply_ = (void *)image + (0x100006e30 - BASEADDR);
    fprintf(f, "Pegou o addr getDeviceLockState_needsExtended_withReply_  %x \n", (uint64_t)addr_getDeviceLockState_needsExtended_withReply_);
    MSInstrumentFunction(addr_getDeviceLockState_needsExtended_withReply_, (void *)&getDeviceLockState_needsExtended_withReply__instrument);

    // Calculate and hook into passcodeUnlockStartWithReply_
    void *addr_passcodeUnlockStartWithReply_ = (void *)image + (0x100006ecc - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockStartWithReply_  %x \n", (uint64_t)addr_passcodeUnlockStartWithReply_);
    MSInstrumentFunction(addr_passcodeUnlockStartWithReply_, (void *)&passcodeUnlockStartWithReply__instrument);

    // Calculate and hook into passcodeUnlockSuccessWithReply_
    void *addr_passcodeUnlockSuccessWithReply_ = (void *)image + (0x100006f08 - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockSuccessWithReply_  %x \n", (uint64_t)addr_passcodeUnlockSuccessWithReply_);
    MSInstrumentFunction(addr_passcodeUnlockSuccessWithReply_, (void *)&passcodeUnlockSuccessWithReply__instrument);

    // Calculate and hook into passcodeUnlockFailedWithReply_
    void *addr_passcodeUnlockFailedWithReply_ = (void *)image + (0x100006f44 - BASEADDR);
    fprintf(f, "Pegou o addr passcodeUnlockFailedWithReply_  %x \n", (uint64_t)addr_passcodeUnlockFailedWithReply_);
    MSInstrumentFunction(addr_passcodeUnlockFailedWithReply_, (void *)&passcodeUnlockFailedWithReply__instrument);

    // Calculate and hook into SeshatEnrollWithSecret_secretSize_withReply_
    void *addr_SeshatEnrollWithSecret_secretSize_withReply_ = (void *)image + (0x100006f80 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatEnrollWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr_SeshatEnrollWithSecret_secretSize_withReply_);
    MSInstrumentFunction(addr_SeshatEnrollWithSecret_secretSize_withReply_, (void *)&SeshatEnrollWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into Event_
    void *addr_Event_ = (void *)image + (0x100006ffc - BASEADDR);
    fprintf(f, "Pegou o addr Event_  %x \n", (uint64_t)addr_Event_);
    MSInstrumentFunction(addr_Event_, (void *)&Event__instrument);

    // Calculate and hook into SeshatUnlockWithSecret_secretSize_withReply_
    void *addr_SeshatUnlockWithSecret_secretSize_withReply_ = (void *)image + (0x100007004 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatUnlockWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr_SeshatUnlockWithSecret_secretSize_withReply_);
    MSInstrumentFunction(addr_SeshatUnlockWithSecret_secretSize_withReply_, (void *)&SeshatUnlockWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into SeshatRecoverWithSecret_secretSize_withReply_
    void *addr_SeshatRecoverWithSecret_secretSize_withReply_ = (void *)image + (0x100007084 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatRecoverWithSecret_secretSize_withReply_  %x \n", (uint64_t)addr_SeshatRecoverWithSecret_secretSize_withReply_);
    MSInstrumentFunction(addr_SeshatRecoverWithSecret_secretSize_withReply_, (void *)&SeshatRecoverWithSecret_secretSize_withReply__instrument);

    // Calculate and hook into SeshatDebugWithDebugMask_withReply_
    void *addr_SeshatDebugWithDebugMask_withReply_ = (void *)image + (0x100007104 - BASEADDR);
    fprintf(f, "Pegou o addr SeshatDebugWithDebugMask_withReply_  %x \n", (uint64_t)addr_SeshatDebugWithDebugMask_withReply_);
    MSInstrumentFunction(addr_SeshatDebugWithDebugMask_withReply_, (void *)&SeshatDebugWithDebugMask_withReply__instrument);

    // Calculate and hook into createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_
    void *addr_createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_ = (void *)image + (0x100007180 - BASEADDR);
    fprintf(f, "Pegou o addr createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_  %x \n", (uint64_t)addr_createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_);
    MSInstrumentFunction(addr_createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply_, (void *)&createKeybagForUserSession_withSessionUID_WithSecret_secretSize_withGracePeriod_withOpaqeStuff_withReply__instrument);

    // Calculate and hook into FUN_100007500
    void *addr_FUN_100007500 = (void *)image + (0x100007500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007500  %x \n", (uint64_t)addr_FUN_100007500);
    MSInstrumentFunction(addr_FUN_100007500, (void *)&FUN_100007500_instrument);

    // Calculate and hook into loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_
    void *addr_loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_ = (void *)image + (0x1000075dc - BASEADDR);
    fprintf(f, "Pegou o addr loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_  %x \n", (uint64_t)addr_loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_);
    MSInstrumentFunction(addr_loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply_, (void *)&loadKeybagForUserSession_withSessionID_withSecret_secretSize_shouldSetGracePeriod_withGracePeriod_isInEarlyStar_withReply__instrument);

    // Calculate and hook into KBXPCLoadKeyBagForUserSession
    void *addr_KBXPCLoadKeyBagForUserSession = (void *)image + (0x100007954 - BASEADDR);
    fprintf(f, "Pegou o addr KBXPCLoadKeyBagForUserSession  %x \n", (uint64_t)addr_KBXPCLoadKeyBagForUserSession);
    MSInstrumentFunction(addr_KBXPCLoadKeyBagForUserSession, (void *)&KBXPCLoadKeyBagForUserSession_instrument);

    // Calculate and hook into FUN_100007a28
    void *addr_FUN_100007a28 = (void *)image + (0x100007a28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a28  %x \n", (uint64_t)addr_FUN_100007a28);
    MSInstrumentFunction(addr_FUN_100007a28, (void *)&FUN_100007a28_instrument);

    // Calculate and hook into FUN_100007a6c
    void *addr_FUN_100007a6c = (void *)image + (0x100007a6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a6c  %x \n", (uint64_t)addr_FUN_100007a6c);
    MSInstrumentFunction(addr_FUN_100007a6c, (void *)&FUN_100007a6c_instrument);

    // Calculate and hook into unloadKeybagForUserSession_withReply_
    void *addr_unloadKeybagForUserSession_withReply_ = (void *)image + (0x100007aa4 - BASEADDR);
    fprintf(f, "Pegou o addr unloadKeybagForUserSession_withReply_  %x \n", (uint64_t)addr_unloadKeybagForUserSession_withReply_);
    MSInstrumentFunction(addr_unloadKeybagForUserSession_withReply_, (void *)&unloadKeybagForUserSession_withReply__instrument);

    // Calculate and hook into FUN_100007be8
    void *addr_FUN_100007be8 = (void *)image + (0x100007be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007be8  %x \n", (uint64_t)addr_FUN_100007be8);
    MSInstrumentFunction(addr_FUN_100007be8, (void *)&FUN_100007be8_instrument);

    // Calculate and hook into FUN_100007c8c
    void *addr_FUN_100007c8c = (void *)image + (0x100007c8c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c8c  %x \n", (uint64_t)addr_FUN_100007c8c);
    MSInstrumentFunction(addr_FUN_100007c8c, (void *)&FUN_100007c8c_instrument);

    // Calculate and hook into FUN_100007c9c
    void *addr_FUN_100007c9c = (void *)image + (0x100007c9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c9c  %x \n", (uint64_t)addr_FUN_100007c9c);
    MSInstrumentFunction(addr_FUN_100007c9c, (void *)&FUN_100007c9c_instrument);

    // Calculate and hook into deleteKeybagForUserSession_withReply_
    void *addr_deleteKeybagForUserSession_withReply_ = (void *)image + (0x100007ca8 - BASEADDR);
    fprintf(f, "Pegou o addr deleteKeybagForUserSession_withReply_  %x \n", (uint64_t)addr_deleteKeybagForUserSession_withReply_);
    MSInstrumentFunction(addr_deleteKeybagForUserSession_withReply_, (void *)&deleteKeybagForUserSession_withReply__instrument);

    // Calculate and hook into FUN_100007e0c
    void *addr_FUN_100007e0c = (void *)image + (0x100007e0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007e0c  %x \n", (uint64_t)addr_FUN_100007e0c);
    MSInstrumentFunction(addr_FUN_100007e0c, (void *)&FUN_100007e0c_instrument);

    // Calculate and hook into setVolumeToPersona_withPersonaString_withReply_
    void *addr_setVolumeToPersona_withPersonaString_withReply_ = (void *)image + (0x100007ebc - BASEADDR);
    fprintf(f, "Pegou o addr setVolumeToPersona_withPersonaString_withReply_  %x \n", (uint64_t)addr_setVolumeToPersona_withPersonaString_withReply_);
    MSInstrumentFunction(addr_setVolumeToPersona_withPersonaString_withReply_, (void *)&setVolumeToPersona_withPersonaString_withReply__instrument);

    // Calculate and hook into FUN_10000804c
    void *addr_FUN_10000804c = (void *)image + (0x10000804c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000804c  %x \n", (uint64_t)addr_FUN_10000804c);
    MSInstrumentFunction(addr_FUN_10000804c, (void *)&FUN_10000804c_instrument);

    // Calculate and hook into FUN_1000082a0
    void *addr_FUN_1000082a0 = (void *)image + (0x1000082a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082a0  %x \n", (uint64_t)addr_FUN_1000082a0);
    MSInstrumentFunction(addr_FUN_1000082a0, (void *)&FUN_1000082a0_instrument);

    // Calculate and hook into FUN_1000082ec
    void *addr_FUN_1000082ec = (void *)image + (0x1000082ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082ec  %x \n", (uint64_t)addr_FUN_1000082ec);
    MSInstrumentFunction(addr_FUN_1000082ec, (void *)&FUN_1000082ec_instrument);

    // Calculate and hook into createSyncBagForUserSession_withSessionUID_withReply_
    void *addr_createSyncBagForUserSession_withSessionUID_withReply_ = (void *)image + (0x100008328 - BASEADDR);
    fprintf(f, "Pegou o addr createSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr_createSyncBagForUserSession_withSessionUID_withReply_);
    MSInstrumentFunction(addr_createSyncBagForUserSession_withSessionUID_withReply_, (void *)&createSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_1000084a0
    void *addr_FUN_1000084a0 = (void *)image + (0x1000084a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000084a0  %x \n", (uint64_t)addr_FUN_1000084a0);
    MSInstrumentFunction(addr_FUN_1000084a0, (void *)&FUN_1000084a0_instrument);

    // Calculate and hook into FUN_100008548
    void *addr_FUN_100008548 = (void *)image + (0x100008548 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008548  %x \n", (uint64_t)addr_FUN_100008548);
    MSInstrumentFunction(addr_FUN_100008548, (void *)&FUN_100008548_instrument);

    // Calculate and hook into FUN_10000857c
    void *addr_FUN_10000857c = (void *)image + (0x10000857c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000857c  %x \n", (uint64_t)addr_FUN_10000857c);
    MSInstrumentFunction(addr_FUN_10000857c, (void *)&FUN_10000857c_instrument);

    // Calculate and hook into loadSyncBagForUserSession_withSessionUID_withReply_
    void *addr_loadSyncBagForUserSession_withSessionUID_withReply_ = (void *)image + (0x1000085a8 - BASEADDR);
    fprintf(f, "Pegou o addr loadSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr_loadSyncBagForUserSession_withSessionUID_withReply_);
    MSInstrumentFunction(addr_loadSyncBagForUserSession_withSessionUID_withReply_, (void *)&loadSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008720
    void *addr_FUN_100008720 = (void *)image + (0x100008720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008720  %x \n", (uint64_t)addr_FUN_100008720);
    MSInstrumentFunction(addr_FUN_100008720, (void *)&FUN_100008720_instrument);

    // Calculate and hook into verifySyncBagForUserSession_withSessionUID_withReply_
    void *addr_verifySyncBagForUserSession_withSessionUID_withReply_ = (void *)image + (0x1000087c8 - BASEADDR);
    fprintf(f, "Pegou o addr verifySyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr_verifySyncBagForUserSession_withSessionUID_withReply_);
    MSInstrumentFunction(addr_verifySyncBagForUserSession_withSessionUID_withReply_, (void *)&verifySyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008940
    void *addr_FUN_100008940 = (void *)image + (0x100008940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008940  %x \n", (uint64_t)addr_FUN_100008940);
    MSInstrumentFunction(addr_FUN_100008940, (void *)&FUN_100008940_instrument);

    // Calculate and hook into unloadSyncBagForUserSession_withSessionUID_withReply_
    void *addr_unloadSyncBagForUserSession_withSessionUID_withReply_ = (void *)image + (0x1000089e8 - BASEADDR);
    fprintf(f, "Pegou o addr unloadSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr_unloadSyncBagForUserSession_withSessionUID_withReply_);
    MSInstrumentFunction(addr_unloadSyncBagForUserSession_withSessionUID_withReply_, (void *)&unloadSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008b60
    void *addr_FUN_100008b60 = (void *)image + (0x100008b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008b60  %x \n", (uint64_t)addr_FUN_100008b60);
    MSInstrumentFunction(addr_FUN_100008b60, (void *)&FUN_100008b60_instrument);

    // Calculate and hook into removeSyncBagForUserSession_withSessionUID_withReply_
    void *addr_removeSyncBagForUserSession_withSessionUID_withReply_ = (void *)image + (0x100008c58 - BASEADDR);
    fprintf(f, "Pegou o addr removeSyncBagForUserSession_withSessionUID_withReply_  %x \n", (uint64_t)addr_removeSyncBagForUserSession_withSessionUID_withReply_);
    MSInstrumentFunction(addr_removeSyncBagForUserSession_withSessionUID_withReply_, (void *)&removeSyncBagForUserSession_withSessionUID_withReply__instrument);

    // Calculate and hook into FUN_100008dd0
    void *addr_FUN_100008dd0 = (void *)image + (0x100008dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008dd0  %x \n", (uint64_t)addr_FUN_100008dd0);
    MSInstrumentFunction(addr_FUN_100008dd0, (void *)&FUN_100008dd0_instrument);

    // Calculate and hook into createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_
    void *addr_createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_ = (void *)image + (0x100008ed8 - BASEADDR);
    fprintf(f, "Pegou o addr createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_  %x \n", (uint64_t)addr_createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_);
    MSInstrumentFunction(addr_createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply_, (void *)&createPersonaKeyForUserSession_forPath_withUID_WithSecret_secretSize_withReply__instrument);

    // Calculate and hook into FUN_100009244
    void *addr_FUN_100009244 = (void *)image + (0x100009244 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009244  %x \n", (uint64_t)addr_FUN_100009244);
    MSInstrumentFunction(addr_FUN_100009244, (void *)&FUN_100009244_instrument);

    // Calculate and hook into removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_
    void *addr_removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_ = (void *)image + (0x100009308 - BASEADDR);
    fprintf(f, "Pegou o addr removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_  %x \n", (uint64_t)addr_removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_);
    MSInstrumentFunction(addr_removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply_, (void *)&removePersonaKeyForUserSession_withUID_withVolumeUUIDString_withReply__instrument);

    // Calculate and hook into FUN_1000094a8
    void *addr_FUN_1000094a8 = (void *)image + (0x1000094a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000094a8  %x \n", (uint64_t)addr_FUN_1000094a8);
    MSInstrumentFunction(addr_FUN_1000094a8, (void *)&FUN_1000094a8_instrument);

    // Calculate and hook into FUN_10000954c
    void *addr_FUN_10000954c = (void *)image + (0x10000954c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000954c  %x \n", (uint64_t)addr_FUN_10000954c);
    MSInstrumentFunction(addr_FUN_10000954c, (void *)&FUN_10000954c_instrument);

    // Calculate and hook into FUN_100009588
    void *addr_FUN_100009588 = (void *)image + (0x100009588 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009588  %x \n", (uint64_t)addr_FUN_100009588);
    MSInstrumentFunction(addr_FUN_100009588, (void *)&FUN_100009588_instrument);

    // Calculate and hook into FUN_1000095bc
    void *addr_FUN_1000095bc = (void *)image + (0x1000095bc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000095bc  %x \n", (uint64_t)addr_FUN_1000095bc);
    MSInstrumentFunction(addr_FUN_1000095bc, (void *)&FUN_1000095bc_instrument);

    // Calculate and hook into sharedLockModelWithUID_
    void *addr_sharedLockModelWithUID_ = (void *)image + (0x100009628 - BASEADDR);
    fprintf(f, "Pegou o addr sharedLockModelWithUID_  %x \n", (uint64_t)addr_sharedLockModelWithUID_);
    MSInstrumentFunction(addr_sharedLockModelWithUID_, (void *)&sharedLockModelWithUID__instrument);

    // Calculate and hook into FUN_100009728
    void *addr_FUN_100009728 = (void *)image + (0x100009728 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009728  %x \n", (uint64_t)addr_FUN_100009728);
    MSInstrumentFunction(addr_FUN_100009728, (void *)&FUN_100009728_instrument);

    // Calculate and hook into initWithUID_
    void *addr_initWithUID_ = (void *)image + (0x100009750 - BASEADDR);
    fprintf(f, "Pegou o addr initWithUID_  %x \n", (uint64_t)addr_initWithUID_);
    MSInstrumentFunction(addr_initWithUID_, (void *)&initWithUID__instrument);

    // Calculate and hook into initWithJournalPath_uid_
    void *addr_initWithJournalPath_uid_ = (void *)image + (0x100009760 - BASEADDR);
    fprintf(f, "Pegou o addr initWithJournalPath_uid_  %x \n", (uint64_t)addr_initWithJournalPath_uid_);
    MSInstrumentFunction(addr_initWithJournalPath_uid_, (void *)&initWithJournalPath_uid__instrument);

    // Calculate and hook into dealloc
    void *addr_dealloc = (void *)image + (0x100009800 - BASEADDR);
    fprintf(f, "Pegou o addr dealloc  %x \n", (uint64_t)addr_dealloc);
    MSInstrumentFunction(addr_dealloc, (void *)&dealloc_instrument);

    // Calculate and hook into notePasscodeEntryBegan
    void *addr_notePasscodeEntryBegan = (void *)image + (0x10000986c - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeEntryBegan  %x \n", (uint64_t)addr_notePasscodeEntryBegan);
    MSInstrumentFunction(addr_notePasscodeEntryBegan, (void *)&notePasscodeEntryBegan_instrument);

    // Calculate and hook into FUN_1000098c4
    void *addr_FUN_1000098c4 = (void *)image + (0x1000098c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098c4  %x \n", (uint64_t)addr_FUN_1000098c4);
    MSInstrumentFunction(addr_FUN_1000098c4, (void *)&FUN_1000098c4_instrument);

    // Calculate and hook into FUN_1000098cc
    void *addr_FUN_1000098cc = (void *)image + (0x1000098cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098cc  %x \n", (uint64_t)addr_FUN_1000098cc);
    MSInstrumentFunction(addr_FUN_1000098cc, (void *)&FUN_1000098cc_instrument);

    // Calculate and hook into FUN_1000098dc
    void *addr_FUN_1000098dc = (void *)image + (0x1000098dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098dc  %x \n", (uint64_t)addr_FUN_1000098dc);
    MSInstrumentFunction(addr_FUN_1000098dc, (void *)&FUN_1000098dc_instrument);

    // Calculate and hook into notePasscodeEntryCancelled
    void *addr_notePasscodeEntryCancelled = (void *)image + (0x1000098e8 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeEntryCancelled  %x \n", (uint64_t)addr_notePasscodeEntryCancelled);
    MSInstrumentFunction(addr_notePasscodeEntryCancelled, (void *)&notePasscodeEntryCancelled_instrument);

    // Calculate and hook into FUN_100009940
    void *addr_FUN_100009940 = (void *)image + (0x100009940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009940  %x \n", (uint64_t)addr_FUN_100009940);
    MSInstrumentFunction(addr_FUN_100009940, (void *)&FUN_100009940_instrument);

    // Calculate and hook into notePasscodeUnlockSucceeded
    void *addr_notePasscodeUnlockSucceeded = (void *)image + (0x100009948 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeUnlockSucceeded  %x \n", (uint64_t)addr_notePasscodeUnlockSucceeded);
    MSInstrumentFunction(addr_notePasscodeUnlockSucceeded, (void *)&notePasscodeUnlockSucceeded_instrument);

    // Calculate and hook into FUN_1000099a0
    void *addr_FUN_1000099a0 = (void *)image + (0x1000099a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000099a0  %x \n", (uint64_t)addr_FUN_1000099a0);
    MSInstrumentFunction(addr_FUN_1000099a0, (void *)&FUN_1000099a0_instrument);

    // Calculate and hook into notePasscodeUnlockFailed
    void *addr_notePasscodeUnlockFailed = (void *)image + (0x1000099a8 - BASEADDR);
    fprintf(f, "Pegou o addr notePasscodeUnlockFailed  %x \n", (uint64_t)addr_notePasscodeUnlockFailed);
    MSInstrumentFunction(addr_notePasscodeUnlockFailed, (void *)&notePasscodeUnlockFailed_instrument);

    // Calculate and hook into FUN_100009a00
    void *addr_FUN_100009a00 = (void *)image + (0x100009a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a00  %x \n", (uint64_t)addr_FUN_100009a00);
    MSInstrumentFunction(addr_FUN_100009a00, (void *)&FUN_100009a00_instrument);

    // Calculate and hook into isPermanentlyBlocked
    void *addr_isPermanentlyBlocked = (void *)image + (0x100009a08 - BASEADDR);
    fprintf(f, "Pegou o addr isPermanentlyBlocked  %x \n", (uint64_t)addr_isPermanentlyBlocked);
    MSInstrumentFunction(addr_isPermanentlyBlocked, (void *)&isPermanentlyBlocked_instrument);

    // Calculate and hook into FUN_100009a9c
    void *addr_FUN_100009a9c = (void *)image + (0x100009a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a9c  %x \n", (uint64_t)addr_FUN_100009a9c);
    MSInstrumentFunction(addr_FUN_100009a9c, (void *)&FUN_100009a9c_instrument);

    // Calculate and hook into FUN_100009ab0
    void *addr_FUN_100009ab0 = (void *)image + (0x100009ab0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009ab0  %x \n", (uint64_t)addr_FUN_100009ab0);
    MSInstrumentFunction(addr_FUN_100009ab0, (void *)&FUN_100009ab0_instrument);

    // Calculate and hook into FUN_100009aec
    void *addr_FUN_100009aec = (void *)image + (0x100009aec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009aec  %x \n", (uint64_t)addr_FUN_100009aec);
    MSInstrumentFunction(addr_FUN_100009aec, (void *)&FUN_100009aec_instrument);

    // Calculate and hook into isTemporarilyBlocked
    void *addr_isTemporarilyBlocked = (void *)image + (0x100009b1c - BASEADDR);
    fprintf(f, "Pegou o addr isTemporarilyBlocked  %x \n", (uint64_t)addr_isTemporarilyBlocked);
    MSInstrumentFunction(addr_isTemporarilyBlocked, (void *)&isTemporarilyBlocked_instrument);

    // Calculate and hook into timeUntilUnblockedSinceReferenceDate
    void *addr_timeUntilUnblockedSinceReferenceDate = (void *)image + (0x100009b60 - BASEADDR);
    fprintf(f, "Pegou o addr timeUntilUnblockedSinceReferenceDate  %x \n", (uint64_t)addr_timeUntilUnblockedSinceReferenceDate);
    MSInstrumentFunction(addr_timeUntilUnblockedSinceReferenceDate, (void *)&timeUntilUnblockedSinceReferenceDate_instrument);

    // Calculate and hook into FUN_100009bec
    void *addr_FUN_100009bec = (void *)image + (0x100009bec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009bec  %x \n", (uint64_t)addr_FUN_100009bec);
    MSInstrumentFunction(addr_FUN_100009bec, (void *)&FUN_100009bec_instrument);

    // Calculate and hook into isWipePending
    void *addr_isWipePending = (void *)image + (0x100009c00 - BASEADDR);
    fprintf(f, "Pegou o addr isWipePending  %x \n", (uint64_t)addr_isWipePending);
    MSInstrumentFunction(addr_isWipePending, (void *)&isWipePending_instrument);

    // Calculate and hook into FUN_100009c90
    void *addr_FUN_100009c90 = (void *)image + (0x100009c90 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009c90  %x \n", (uint64_t)addr_FUN_100009c90);
    MSInstrumentFunction(addr_FUN_100009c90, (void *)&FUN_100009c90_instrument);

    // Calculate and hook into failedPasscodeAttempts
    void *addr_failedPasscodeAttempts = (void *)image + (0x100009ca4 - BASEADDR);
    fprintf(f, "Pegou o addr failedPasscodeAttempts  %x \n", (uint64_t)addr_failedPasscodeAttempts);
    MSInstrumentFunction(addr_failedPasscodeAttempts, (void *)&failedPasscodeAttempts_instrument);

    // Calculate and hook into FUN_100009d30
    void *addr_FUN_100009d30 = (void *)image + (0x100009d30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009d30  %x \n", (uint64_t)addr_FUN_100009d30);
    MSInstrumentFunction(addr_FUN_100009d30, (void *)&FUN_100009d30_instrument);

    // Calculate and hook into userDeleted
    void *addr_userDeleted = (void *)image + (0x100009d44 - BASEADDR);
    fprintf(f, "Pegou o addr userDeleted  %x \n", (uint64_t)addr_userDeleted);
    MSInstrumentFunction(addr_userDeleted, (void *)&userDeleted_instrument);

    // Calculate and hook into _persistentStateQueue_beginSpeculativeFailureCharge
    void *addr__persistentStateQueue_beginSpeculativeFailureCharge = (void *)image + (0x100009d48 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_beginSpeculativeFailureCharge  %x \n", (uint64_t)addr__persistentStateQueue_beginSpeculativeFailureCharge);
    MSInstrumentFunction(addr__persistentStateQueue_beginSpeculativeFailureCharge, (void *)&_persistentStateQueue_beginSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_cancelSpeculativeFailureCharge
    void *addr__persistentStateQueue_cancelSpeculativeFailureCharge = (void *)image + (0x100009fd8 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_cancelSpeculativeFailureCharge  %x \n", (uint64_t)addr__persistentStateQueue_cancelSpeculativeFailureCharge);
    MSInstrumentFunction(addr__persistentStateQueue_cancelSpeculativeFailureCharge, (void *)&_persistentStateQueue_cancelSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_rollbackSpeculativeFailureCharge
    void *addr__persistentStateQueue_rollbackSpeculativeFailureCharge = (void *)image + (0x10000a004 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_rollbackSpeculativeFailureCharge  %x \n", (uint64_t)addr__persistentStateQueue_rollbackSpeculativeFailureCharge);
    MSInstrumentFunction(addr__persistentStateQueue_rollbackSpeculativeFailureCharge, (void *)&_persistentStateQueue_rollbackSpeculativeFailureCharge_instrument);

    // Calculate and hook into _persistentStateQueue_unlockSucceeded
    void *addr__persistentStateQueue_unlockSucceeded = (void *)image + (0x10000a0d0 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_unlockSucceeded  %x \n", (uint64_t)addr__persistentStateQueue_unlockSucceeded);
    MSInstrumentFunction(addr__persistentStateQueue_unlockSucceeded, (void *)&_persistentStateQueue_unlockSucceeded_instrument);

    // Calculate and hook into _persistentStateQueue_unlockFailed
    void *addr__persistentStateQueue_unlockFailed = (void *)image + (0x10000a144 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_unlockFailed  %x \n", (uint64_t)addr__persistentStateQueue_unlockFailed);
    MSInstrumentFunction(addr__persistentStateQueue_unlockFailed, (void *)&_persistentStateQueue_unlockFailed_instrument);

    // Calculate and hook into _persistentStateQueue_loadLockState
    void *addr__persistentStateQueue_loadLockState = (void *)image + (0x10000a168 - BASEADDR);
    fprintf(f, "Pegou o addr _persistentStateQueue_loadLockState  %x \n", (uint64_t)addr__persistentStateQueue_loadLockState);
    MSInstrumentFunction(addr__persistentStateQueue_loadLockState, (void *)&_persistentStateQueue_loadLockState_instrument);

    // Calculate and hook into _loadLockState
    void *addr__loadLockState = (void *)image + (0x10000a230 - BASEADDR);
    fprintf(f, "Pegou o addr _loadLockState  %x \n", (uint64_t)addr__loadLockState);
    MSInstrumentFunction(addr__loadLockState, (void *)&_loadLockState_instrument);

    // Calculate and hook into _lockStateValueForKey_ofType_
    void *addr__lockStateValueForKey_ofType_ = (void *)image + (0x10000a280 - BASEADDR);
    fprintf(f, "Pegou o addr _lockStateValueForKey_ofType_  %x \n", (uint64_t)addr__lockStateValueForKey_ofType_);
    MSInstrumentFunction(addr__lockStateValueForKey_ofType_, (void *)&_lockStateValueForKey_ofType__instrument);

    // Calculate and hook into _setLockStateValue_forKey_
    void *addr__setLockStateValue_forKey_ = (void *)image + (0x10000a2e4 - BASEADDR);
    fprintf(f, "Pegou o addr _setLockStateValue_forKey_  %x \n", (uint64_t)addr__setLockStateValue_forKey_);
    MSInstrumentFunction(addr__setLockStateValue_forKey_, (void *)&_setLockStateValue_forKey__instrument);

    // Calculate and hook into FUN_10000a368
    void *addr_FUN_10000a368 = (void *)image + (0x10000a368 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a368  %x \n", (uint64_t)addr_FUN_10000a368);
    MSInstrumentFunction(addr_FUN_10000a368, (void *)&FUN_10000a368_instrument);

    // Calculate and hook into FUN_10000a4d0
    void *addr_FUN_10000a4d0 = (void *)image + (0x10000a4d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4d0  %x \n", (uint64_t)addr_FUN_10000a4d0);
    MSInstrumentFunction(addr_FUN_10000a4d0, (void *)&FUN_10000a4d0_instrument);

    // Calculate and hook into FUN_10000a4f0
    void *addr_FUN_10000a4f0 = (void *)image + (0x10000a4f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4f0  %x \n", (uint64_t)addr_FUN_10000a4f0);
    MSInstrumentFunction(addr_FUN_10000a4f0, (void *)&FUN_10000a4f0_instrument);

    // Calculate and hook into FUN_10000a510
    void *addr_FUN_10000a510 = (void *)image + (0x10000a510 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a510  %x \n", (uint64_t)addr_FUN_10000a510);
    MSInstrumentFunction(addr_FUN_10000a510, (void *)&FUN_10000a510_instrument);

    // Calculate and hook into FUN_10000a530
    void *addr_FUN_10000a530 = (void *)image + (0x10000a530 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a530  %x \n", (uint64_t)addr_FUN_10000a530);
    MSInstrumentFunction(addr_FUN_10000a530, (void *)&FUN_10000a530_instrument);

    // Calculate and hook into FUN_10000a590
    void *addr_FUN_10000a590 = (void *)image + (0x10000a590 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a590  %x \n", (uint64_t)addr_FUN_10000a590);
    MSInstrumentFunction(addr_FUN_10000a590, (void *)&FUN_10000a590_instrument);

    // Calculate and hook into FUN_10000a620
    void *addr_FUN_10000a620 = (void *)image + (0x10000a620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a620  %x \n", (uint64_t)addr_FUN_10000a620);
    MSInstrumentFunction(addr_FUN_10000a620, (void *)&FUN_10000a620_instrument);

    // Calculate and hook into FUN_10000a67c
    void *addr_FUN_10000a67c = (void *)image + (0x10000a67c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a67c  %x \n", (uint64_t)addr_FUN_10000a67c);
    MSInstrumentFunction(addr_FUN_10000a67c, (void *)&FUN_10000a67c_instrument);

    // Calculate and hook into FUN_10000a708
    void *addr_FUN_10000a708 = (void *)image + (0x10000a708 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a708  %x \n", (uint64_t)addr_FUN_10000a708);
    MSInstrumentFunction(addr_FUN_10000a708, (void *)&FUN_10000a708_instrument);

    // Calculate and hook into FUN_10000a954
    void *addr_FUN_10000a954 = (void *)image + (0x10000a954 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a954  %x \n", (uint64_t)addr_FUN_10000a954);
    MSInstrumentFunction(addr_FUN_10000a954, (void *)&FUN_10000a954_instrument);

    // Calculate and hook into FUN_10000a95c
    void *addr_FUN_10000a95c = (void *)image + (0x10000a95c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a95c  %x \n", (uint64_t)addr_FUN_10000a95c);
    MSInstrumentFunction(addr_FUN_10000a95c, (void *)&FUN_10000a95c_instrument);

    // Calculate and hook into FUN_10000a9a4
    void *addr_FUN_10000a9a4 = (void *)image + (0x10000a9a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a9a4  %x \n", (uint64_t)addr_FUN_10000a9a4);
    MSInstrumentFunction(addr_FUN_10000a9a4, (void *)&FUN_10000a9a4_instrument);

    // Calculate and hook into FUN_10000ab68
    void *addr_FUN_10000ab68 = (void *)image + (0x10000ab68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ab68  %x \n", (uint64_t)addr_FUN_10000ab68);
    MSInstrumentFunction(addr_FUN_10000ab68, (void *)&FUN_10000ab68_instrument);

    // Calculate and hook into FUN_10000ace8
    void *addr_FUN_10000ace8 = (void *)image + (0x10000ace8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ace8  %x \n", (uint64_t)addr_FUN_10000ace8);
    MSInstrumentFunction(addr_FUN_10000ace8, (void *)&FUN_10000ace8_instrument);

    // Calculate and hook into FUN_10000adac
    void *addr_FUN_10000adac = (void *)image + (0x10000adac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000adac  %x \n", (uint64_t)addr_FUN_10000adac);
    MSInstrumentFunction(addr_FUN_10000adac, (void *)&FUN_10000adac_instrument);

    // Calculate and hook into FUN_10000ae88
    void *addr_FUN_10000ae88 = (void *)image + (0x10000ae88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ae88  %x \n", (uint64_t)addr_FUN_10000ae88);
    MSInstrumentFunction(addr_FUN_10000ae88, (void *)&FUN_10000ae88_instrument);

    // Calculate and hook into FUN_10000af5c
    void *addr_FUN_10000af5c = (void *)image + (0x10000af5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000af5c  %x \n", (uint64_t)addr_FUN_10000af5c);
    MSInstrumentFunction(addr_FUN_10000af5c, (void *)&FUN_10000af5c_instrument);

    // Calculate and hook into FUN_10000afe8
    void *addr_FUN_10000afe8 = (void *)image + (0x10000afe8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000afe8  %x \n", (uint64_t)addr_FUN_10000afe8);
    MSInstrumentFunction(addr_FUN_10000afe8, (void *)&FUN_10000afe8_instrument);

    // Calculate and hook into FUN_10000b088
    void *addr_FUN_10000b088 = (void *)image + (0x10000b088 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b088  %x \n", (uint64_t)addr_FUN_10000b088);
    MSInstrumentFunction(addr_FUN_10000b088, (void *)&FUN_10000b088_instrument);

    // Calculate and hook into FUN_10000b100
    void *addr_FUN_10000b100 = (void *)image + (0x10000b100 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b100  %x \n", (uint64_t)addr_FUN_10000b100);
    MSInstrumentFunction(addr_FUN_10000b100, (void *)&FUN_10000b100_instrument);

    // Calculate and hook into FUN_10000b200
    void *addr_FUN_10000b200 = (void *)image + (0x10000b200 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b200  %x \n", (uint64_t)addr_FUN_10000b200);
    MSInstrumentFunction(addr_FUN_10000b200, (void *)&FUN_10000b200_instrument);

    // Calculate and hook into FUN_10000b238
    void *addr_FUN_10000b238 = (void *)image + (0x10000b238 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b238  %x \n", (uint64_t)addr_FUN_10000b238);
    MSInstrumentFunction(addr_FUN_10000b238, (void *)&FUN_10000b238_instrument);

    // Calculate and hook into FUN_10000b278
    void *addr_FUN_10000b278 = (void *)image + (0x10000b278 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b278  %x \n", (uint64_t)addr_FUN_10000b278);
    MSInstrumentFunction(addr_FUN_10000b278, (void *)&FUN_10000b278_instrument);

    // Calculate and hook into FUN_10000b2c4
    void *addr_FUN_10000b2c4 = (void *)image + (0x10000b2c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b2c4  %x \n", (uint64_t)addr_FUN_10000b2c4);
    MSInstrumentFunction(addr_FUN_10000b2c4, (void *)&FUN_10000b2c4_instrument);

    // Calculate and hook into memcopy
    void *addr_memcopy = (void *)image + (0x10000b368 - BASEADDR);
    fprintf(f, "Pegou o addr memcopy  %x \n", (uint64_t)addr_memcopy);
    MSInstrumentFunction(addr_memcopy, (void *)&memcopy_instrument);

    // Calculate and hook into FUN_10000b450
    void *addr_FUN_10000b450 = (void *)image + (0x10000b450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b450  %x \n", (uint64_t)addr_FUN_10000b450);
    MSInstrumentFunction(addr_FUN_10000b450, (void *)&FUN_10000b450_instrument);

    // Calculate and hook into FUN_10000b4c8
    void *addr_FUN_10000b4c8 = (void *)image + (0x10000b4c8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b4c8  %x \n", (uint64_t)addr_FUN_10000b4c8);
    MSInstrumentFunction(addr_FUN_10000b4c8, (void *)&FUN_10000b4c8_instrument);

    // Calculate and hook into FUN_10000b61c
    void *addr_FUN_10000b61c = (void *)image + (0x10000b61c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b61c  %x \n", (uint64_t)addr_FUN_10000b61c);
    MSInstrumentFunction(addr_FUN_10000b61c, (void *)&FUN_10000b61c_instrument);

    // Calculate and hook into FUN_10000b624
    void *addr_FUN_10000b624 = (void *)image + (0x10000b624 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b624  %x \n", (uint64_t)addr_FUN_10000b624);
    MSInstrumentFunction(addr_FUN_10000b624, (void *)&FUN_10000b624_instrument);

    // Calculate and hook into LerbPlist
    void *addr_LerbPlist = (void *)image + (0x10000b744 - BASEADDR);
    fprintf(f, "Pegou o addr LerbPlist  %x \n", (uint64_t)addr_LerbPlist);
    MSInstrumentFunction(addr_LerbPlist, (void *)&LerbPlist_instrument);

    // Calculate and hook into FUN_10000b884
    void *addr_FUN_10000b884 = (void *)image + (0x10000b884 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b884  %x \n", (uint64_t)addr_FUN_10000b884);
    MSInstrumentFunction(addr_FUN_10000b884, (void *)&FUN_10000b884_instrument);

    // Calculate and hook into FUN_10000b8d8
    void *addr_FUN_10000b8d8 = (void *)image + (0x10000b8d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b8d8  %x \n", (uint64_t)addr_FUN_10000b8d8);
    MSInstrumentFunction(addr_FUN_10000b8d8, (void *)&FUN_10000b8d8_instrument);

    // Calculate and hook into FUN_10000b91c
    void *addr_FUN_10000b91c = (void *)image + (0x10000b91c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b91c  %x \n", (uint64_t)addr_FUN_10000b91c);
    MSInstrumentFunction(addr_FUN_10000b91c, (void *)&FUN_10000b91c_instrument);

    // Calculate and hook into FUN_10000b958
    void *addr_FUN_10000b958 = (void *)image + (0x10000b958 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b958  %x \n", (uint64_t)addr_FUN_10000b958);
    MSInstrumentFunction(addr_FUN_10000b958, (void *)&FUN_10000b958_instrument);

    // Calculate and hook into FUN_10000b98c
    void *addr_FUN_10000b98c = (void *)image + (0x10000b98c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b98c  %x \n", (uint64_t)addr_FUN_10000b98c);
    MSInstrumentFunction(addr_FUN_10000b98c, (void *)&FUN_10000b98c_instrument);

    // Calculate and hook into FUN_10000bb64
    void *addr_FUN_10000bb64 = (void *)image + (0x10000bb64 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bb64  %x \n", (uint64_t)addr_FUN_10000bb64);
    MSInstrumentFunction(addr_FUN_10000bb64, (void *)&FUN_10000bb64_instrument);

    // Calculate and hook into FUN_10000bc28
    void *addr_FUN_10000bc28 = (void *)image + (0x10000bc28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bc28  %x \n", (uint64_t)addr_FUN_10000bc28);
    MSInstrumentFunction(addr_FUN_10000bc28, (void *)&FUN_10000bc28_instrument);

    // Calculate and hook into FUN_10000bcb0
    void *addr_FUN_10000bcb0 = (void *)image + (0x10000bcb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bcb0  %x \n", (uint64_t)addr_FUN_10000bcb0);
    MSInstrumentFunction(addr_FUN_10000bcb0, (void *)&FUN_10000bcb0_instrument);

    // Calculate and hook into FUN_10000bd70
    void *addr_FUN_10000bd70 = (void *)image + (0x10000bd70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bd70  %x \n", (uint64_t)addr_FUN_10000bd70);
    MSInstrumentFunction(addr_FUN_10000bd70, (void *)&FUN_10000bd70_instrument);

    // Calculate and hook into FUN_10000be4c
    void *addr_FUN_10000be4c = (void *)image + (0x10000be4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000be4c  %x \n", (uint64_t)addr_FUN_10000be4c);
    MSInstrumentFunction(addr_FUN_10000be4c, (void *)&FUN_10000be4c_instrument);

    // Calculate and hook into FUN_10000beb4
    void *addr_FUN_10000beb4 = (void *)image + (0x10000beb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000beb4  %x \n", (uint64_t)addr_FUN_10000beb4);
    MSInstrumentFunction(addr_FUN_10000beb4, (void *)&FUN_10000beb4_instrument);

    // Calculate and hook into FUN_10000bfa4
    void *addr_FUN_10000bfa4 = (void *)image + (0x10000bfa4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfa4  %x \n", (uint64_t)addr_FUN_10000bfa4);
    MSInstrumentFunction(addr_FUN_10000bfa4, (void *)&FUN_10000bfa4_instrument);

    // Calculate and hook into FUN_10000bfb4
    void *addr_FUN_10000bfb4 = (void *)image + (0x10000bfb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfb4  %x \n", (uint64_t)addr_FUN_10000bfb4);
    MSInstrumentFunction(addr_FUN_10000bfb4, (void *)&FUN_10000bfb4_instrument);

    // Calculate and hook into FUN_10000bfc0
    void *addr_FUN_10000bfc0 = (void *)image + (0x10000bfc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfc0  %x \n", (uint64_t)addr_FUN_10000bfc0);
    MSInstrumentFunction(addr_FUN_10000bfc0, (void *)&FUN_10000bfc0_instrument);

    // Calculate and hook into FUN_10000c040
    void *addr_FUN_10000c040 = (void *)image + (0x10000c040 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c040  %x \n", (uint64_t)addr_FUN_10000c040);
    MSInstrumentFunction(addr_FUN_10000c040, (void *)&FUN_10000c040_instrument);

    // Calculate and hook into FUN_10000c0a8
    void *addr_FUN_10000c0a8 = (void *)image + (0x10000c0a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c0a8  %x \n", (uint64_t)addr_FUN_10000c0a8);
    MSInstrumentFunction(addr_FUN_10000c0a8, (void *)&FUN_10000c0a8_instrument);

    // Calculate and hook into FUN_10000c198
    void *addr_FUN_10000c198 = (void *)image + (0x10000c198 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c198  %x \n", (uint64_t)addr_FUN_10000c198);
    MSInstrumentFunction(addr_FUN_10000c198, (void *)&FUN_10000c198_instrument);

    // Calculate and hook into FUN_10000c218
    void *addr_FUN_10000c218 = (void *)image + (0x10000c218 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c218  %x \n", (uint64_t)addr_FUN_10000c218);
    MSInstrumentFunction(addr_FUN_10000c218, (void *)&FUN_10000c218_instrument);

    // Calculate and hook into FUN_10000c5d8
    void *addr_FUN_10000c5d8 = (void *)image + (0x10000c5d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c5d8  %x \n", (uint64_t)addr_FUN_10000c5d8);
    MSInstrumentFunction(addr_FUN_10000c5d8, (void *)&FUN_10000c5d8_instrument);

    // Calculate and hook into FUN_10000c63c
    void *addr_FUN_10000c63c = (void *)image + (0x10000c63c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c63c  %x \n", (uint64_t)addr_FUN_10000c63c);
    MSInstrumentFunction(addr_FUN_10000c63c, (void *)&FUN_10000c63c_instrument);

    // Calculate and hook into FUN_10000c918
    void *addr_FUN_10000c918 = (void *)image + (0x10000c918 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c918  %x \n", (uint64_t)addr_FUN_10000c918);
    MSInstrumentFunction(addr_FUN_10000c918, (void *)&FUN_10000c918_instrument);

    // Calculate and hook into FUN_10000cacc
    void *addr_FUN_10000cacc = (void *)image + (0x10000cacc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cacc  %x \n", (uint64_t)addr_FUN_10000cacc);
    MSInstrumentFunction(addr_FUN_10000cacc, (void *)&FUN_10000cacc_instrument);

    // Calculate and hook into FUN_10000cad8
    void *addr_FUN_10000cad8 = (void *)image + (0x10000cad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cad8  %x \n", (uint64_t)addr_FUN_10000cad8);
    MSInstrumentFunction(addr_FUN_10000cad8, (void *)&FUN_10000cad8_instrument);

    // Calculate and hook into FUN_10000cb6c
    void *addr_FUN_10000cb6c = (void *)image + (0x10000cb6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb6c  %x \n", (uint64_t)addr_FUN_10000cb6c);
    MSInstrumentFunction(addr_FUN_10000cb6c, (void *)&FUN_10000cb6c_instrument);

    // Calculate and hook into FUN_10000cb7c
    void *addr_FUN_10000cb7c = (void *)image + (0x10000cb7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb7c  %x \n", (uint64_t)addr_FUN_10000cb7c);
    MSInstrumentFunction(addr_FUN_10000cb7c, (void *)&FUN_10000cb7c_instrument);

    // Calculate and hook into FUN_10000cb88
    void *addr_FUN_10000cb88 = (void *)image + (0x10000cb88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb88  %x \n", (uint64_t)addr_FUN_10000cb88);
    MSInstrumentFunction(addr_FUN_10000cb88, (void *)&FUN_10000cb88_instrument);

    // Calculate and hook into FUN_10000cbac
    void *addr_FUN_10000cbac = (void *)image + (0x10000cbac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cbac  %x \n", (uint64_t)addr_FUN_10000cbac);
    MSInstrumentFunction(addr_FUN_10000cbac, (void *)&FUN_10000cbac_instrument);

    // Calculate and hook into FUN_10000cc60
    void *addr_FUN_10000cc60 = (void *)image + (0x10000cc60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cc60  %x \n", (uint64_t)addr_FUN_10000cc60);
    MSInstrumentFunction(addr_FUN_10000cc60, (void *)&FUN_10000cc60_instrument);

    // Calculate and hook into FUN_10000cd14
    void *addr_FUN_10000cd14 = (void *)image + (0x10000cd14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cd14  %x \n", (uint64_t)addr_FUN_10000cd14);
    MSInstrumentFunction(addr_FUN_10000cd14, (void *)&FUN_10000cd14_instrument);

    // Calculate and hook into FUN_10000ce08
    void *addr_FUN_10000ce08 = (void *)image + (0x10000ce08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ce08  %x \n", (uint64_t)addr_FUN_10000ce08);
    MSInstrumentFunction(addr_FUN_10000ce08, (void *)&FUN_10000ce08_instrument);

    // Calculate and hook into FUN_10000cf68
    void *addr_FUN_10000cf68 = (void *)image + (0x10000cf68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cf68  %x \n", (uint64_t)addr_FUN_10000cf68);
    MSInstrumentFunction(addr_FUN_10000cf68, (void *)&FUN_10000cf68_instrument);

    // Calculate and hook into FUN_10000d024
    void *addr_FUN_10000d024 = (void *)image + (0x10000d024 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d024  %x \n", (uint64_t)addr_FUN_10000d024);
    MSInstrumentFunction(addr_FUN_10000d024, (void *)&FUN_10000d024_instrument);

    // Calculate and hook into FUN_10000d094
    void *addr_FUN_10000d094 = (void *)image + (0x10000d094 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d094  %x \n", (uint64_t)addr_FUN_10000d094);
    MSInstrumentFunction(addr_FUN_10000d094, (void *)&FUN_10000d094_instrument);

    // Calculate and hook into FUN_10000d150
    void *addr_FUN_10000d150 = (void *)image + (0x10000d150 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d150  %x \n", (uint64_t)addr_FUN_10000d150);
    MSInstrumentFunction(addr_FUN_10000d150, (void *)&FUN_10000d150_instrument);

    // Calculate and hook into FUN_10000d1c0
    void *addr_FUN_10000d1c0 = (void *)image + (0x10000d1c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d1c0  %x \n", (uint64_t)addr_FUN_10000d1c0);
    MSInstrumentFunction(addr_FUN_10000d1c0, (void *)&FUN_10000d1c0_instrument);

    // Calculate and hook into FUN_10000d27c
    void *addr_FUN_10000d27c = (void *)image + (0x10000d27c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d27c  %x \n", (uint64_t)addr_FUN_10000d27c);
    MSInstrumentFunction(addr_FUN_10000d27c, (void *)&FUN_10000d27c_instrument);

    // Calculate and hook into FUN_10000d2ec
    void *addr_FUN_10000d2ec = (void *)image + (0x10000d2ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d2ec  %x \n", (uint64_t)addr_FUN_10000d2ec);
    MSInstrumentFunction(addr_FUN_10000d2ec, (void *)&FUN_10000d2ec_instrument);

    // Calculate and hook into FUN_10000d364
    void *addr_FUN_10000d364 = (void *)image + (0x10000d364 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d364  %x \n", (uint64_t)addr_FUN_10000d364);
    MSInstrumentFunction(addr_FUN_10000d364, (void *)&FUN_10000d364_instrument);

    // Calculate and hook into FUN_10000d4a4
    void *addr_FUN_10000d4a4 = (void *)image + (0x10000d4a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d4a4  %x \n", (uint64_t)addr_FUN_10000d4a4);
    MSInstrumentFunction(addr_FUN_10000d4a4, (void *)&FUN_10000d4a4_instrument);

    // Calculate and hook into LoadKeyBagForUserSession
    void *addr_LoadKeyBagForUserSession = (void *)image + (0x10000d530 - BASEADDR);
    fprintf(f, "Pegou o addr LoadKeyBagForUserSession  %x \n", (uint64_t)addr_LoadKeyBagForUserSession);
    MSInstrumentFunction(addr_LoadKeyBagForUserSession, (void *)&LoadKeyBagForUserSession_instrument);

    // Calculate and hook into SetAPFSVolumeIDforKeybag
    void *addr_SetAPFSVolumeIDforKeybag = (void *)image + (0x10000d8b8 - BASEADDR);
    fprintf(f, "Pegou o addr SetAPFSVolumeIDforKeybag  %x \n", (uint64_t)addr_SetAPFSVolumeIDforKeybag);
    MSInstrumentFunction(addr_SetAPFSVolumeIDforKeybag, (void *)&SetAPFSVolumeIDforKeybag_instrument);

    // Calculate and hook into FUN_10000db5c
    void *addr_FUN_10000db5c = (void *)image + (0x10000db5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000db5c  %x \n", (uint64_t)addr_FUN_10000db5c);
    MSInstrumentFunction(addr_FUN_10000db5c, (void *)&FUN_10000db5c_instrument);

    // Calculate and hook into FUN_10000ddf8
    void *addr_FUN_10000ddf8 = (void *)image + (0x10000ddf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ddf8  %x \n", (uint64_t)addr_FUN_10000ddf8);
    MSInstrumentFunction(addr_FUN_10000ddf8, (void *)&FUN_10000ddf8_instrument);

    // Calculate and hook into FUN_10000de00
    void *addr_FUN_10000de00 = (void *)image + (0x10000de00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000de00  %x \n", (uint64_t)addr_FUN_10000de00);
    MSInstrumentFunction(addr_FUN_10000de00, (void *)&FUN_10000de00_instrument);

    // Calculate and hook into FUN_10000decc
    void *addr_FUN_10000decc = (void *)image + (0x10000decc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000decc  %x \n", (uint64_t)addr_FUN_10000decc);
    MSInstrumentFunction(addr_FUN_10000decc, (void *)&FUN_10000decc_instrument);

    // Calculate and hook into FUN_10000e140
    void *addr_FUN_10000e140 = (void *)image + (0x10000e140 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e140  %x \n", (uint64_t)addr_FUN_10000e140);
    MSInstrumentFunction(addr_FUN_10000e140, (void *)&FUN_10000e140_instrument);

    // Calculate and hook into FUN_10000e424
    void *addr_FUN_10000e424 = (void *)image + (0x10000e424 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e424  %x \n", (uint64_t)addr_FUN_10000e424);
    MSInstrumentFunction(addr_FUN_10000e424, (void *)&FUN_10000e424_instrument);

    // Calculate and hook into FUN_10000e6a0
    void *addr_FUN_10000e6a0 = (void *)image + (0x10000e6a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e6a0  %x \n", (uint64_t)addr_FUN_10000e6a0);
    MSInstrumentFunction(addr_FUN_10000e6a0, (void *)&FUN_10000e6a0_instrument);

    // Calculate and hook into FUN_10000e774
    void *addr_FUN_10000e774 = (void *)image + (0x10000e774 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e774  %x \n", (uint64_t)addr_FUN_10000e774);
    MSInstrumentFunction(addr_FUN_10000e774, (void *)&FUN_10000e774_instrument);

    // Calculate and hook into FUN_10000e844
    void *addr_FUN_10000e844 = (void *)image + (0x10000e844 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e844  %x \n", (uint64_t)addr_FUN_10000e844);
    MSInstrumentFunction(addr_FUN_10000e844, (void *)&FUN_10000e844_instrument);

    // Calculate and hook into FUN_10000ea00
    void *addr_FUN_10000ea00 = (void *)image + (0x10000ea00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ea00  %x \n", (uint64_t)addr_FUN_10000ea00);
    MSInstrumentFunction(addr_FUN_10000ea00, (void *)&FUN_10000ea00_instrument);

    // Calculate and hook into thunk_FUN_10000b91c
    void *addr_thunk_FUN_10000b91c = (void *)image + (0x10000ebf0 - BASEADDR);
    fprintf(f, "Pegou o addr thunk_FUN_10000b91c  %x \n", (uint64_t)addr_thunk_FUN_10000b91c);
    MSInstrumentFunction(addr_thunk_FUN_10000b91c, (void *)&thunk_FUN_10000b91c_instrument);

    // Calculate and hook into LogFunc
    void *addr_LogFunc = (void *)image + (0x10000ebf4 - BASEADDR);
    fprintf(f, "Pegou o addr LogFunc  %x \n", (uint64_t)addr_LogFunc);
    MSInstrumentFunction(addr_LogFunc, (void *)&LogFunc_instrument);

    // Calculate and hook into FUN_10000ec2c
    void *addr_FUN_10000ec2c = (void *)image + (0x10000ec2c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ec2c  %x \n", (uint64_t)addr_FUN_10000ec2c);
    MSInstrumentFunction(addr_FUN_10000ec2c, (void *)&FUN_10000ec2c_instrument);

    // Calculate and hook into FUN_10000ed60
    void *addr_FUN_10000ed60 = (void *)image + (0x10000ed60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ed60  %x \n", (uint64_t)addr_FUN_10000ed60);
    MSInstrumentFunction(addr_FUN_10000ed60, (void *)&FUN_10000ed60_instrument);

    // Calculate and hook into FUN_10000ef4c
    void *addr_FUN_10000ef4c = (void *)image + (0x10000ef4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ef4c  %x \n", (uint64_t)addr_FUN_10000ef4c);
    MSInstrumentFunction(addr_FUN_10000ef4c, (void *)&FUN_10000ef4c_instrument);

    // Calculate and hook into FUN_10000f07c
    void *addr_FUN_10000f07c = (void *)image + (0x10000f07c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f07c  %x \n", (uint64_t)addr_FUN_10000f07c);
    MSInstrumentFunction(addr_FUN_10000f07c, (void *)&FUN_10000f07c_instrument);

    // Calculate and hook into FUN_10000f17c
    void *addr_FUN_10000f17c = (void *)image + (0x10000f17c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f17c  %x \n", (uint64_t)addr_FUN_10000f17c);
    MSInstrumentFunction(addr_FUN_10000f17c, (void *)&FUN_10000f17c_instrument);

    // Calculate and hook into FUN_10000f220
    void *addr_FUN_10000f220 = (void *)image + (0x10000f220 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f220  %x \n", (uint64_t)addr_FUN_10000f220);
    MSInstrumentFunction(addr_FUN_10000f220, (void *)&FUN_10000f220_instrument);

    // Calculate and hook into FUN_10000f2b4
    void *addr_FUN_10000f2b4 = (void *)image + (0x10000f2b4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f2b4  %x \n", (uint64_t)addr_FUN_10000f2b4);
    MSInstrumentFunction(addr_FUN_10000f2b4, (void *)&FUN_10000f2b4_instrument);

    // Calculate and hook into FUN_10000f304
    void *addr_FUN_10000f304 = (void *)image + (0x10000f304 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f304  %x \n", (uint64_t)addr_FUN_10000f304);
    MSInstrumentFunction(addr_FUN_10000f304, (void *)&FUN_10000f304_instrument);

    // Calculate and hook into FUN_10000f3cc
    void *addr_FUN_10000f3cc = (void *)image + (0x10000f3cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f3cc  %x \n", (uint64_t)addr_FUN_10000f3cc);
    MSInstrumentFunction(addr_FUN_10000f3cc, (void *)&FUN_10000f3cc_instrument);

    // Calculate and hook into FUN_10000f45c
    void *addr_FUN_10000f45c = (void *)image + (0x10000f45c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f45c  %x \n", (uint64_t)addr_FUN_10000f45c);
    MSInstrumentFunction(addr_FUN_10000f45c, (void *)&FUN_10000f45c_instrument);

    // Calculate and hook into entry
    void *addr_entry = (void *)image + (0x10000f5b4 - BASEADDR);
    fprintf(f, "Pegou o addr entry  %x \n", (uint64_t)addr_entry);
    MSInstrumentFunction(addr_entry, (void *)&entry_instrument);

    // Calculate and hook into FUN_10000fa38
    void *addr_FUN_10000fa38 = (void *)image + (0x10000fa38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fa38  %x \n", (uint64_t)addr_FUN_10000fa38);
    MSInstrumentFunction(addr_FUN_10000fa38, (void *)&FUN_10000fa38_instrument);

    // Calculate and hook into FUN_10000fc6c
    void *addr_FUN_10000fc6c = (void *)image + (0x10000fc6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fc6c  %x \n", (uint64_t)addr_FUN_10000fc6c);
    MSInstrumentFunction(addr_FUN_10000fc6c, (void *)&FUN_10000fc6c_instrument);

    // Calculate and hook into FUN_10000fccc
    void *addr_FUN_10000fccc = (void *)image + (0x10000fccc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fccc  %x \n", (uint64_t)addr_FUN_10000fccc);
    MSInstrumentFunction(addr_FUN_10000fccc, (void *)&FUN_10000fccc_instrument);

    // Calculate and hook into FUN_10000fd0c
    void *addr_FUN_10000fd0c = (void *)image + (0x10000fd0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd0c  %x \n", (uint64_t)addr_FUN_10000fd0c);
    MSInstrumentFunction(addr_FUN_10000fd0c, (void *)&FUN_10000fd0c_instrument);

    // Calculate and hook into FUN_10000fd7c
    void *addr_FUN_10000fd7c = (void *)image + (0x10000fd7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd7c  %x \n", (uint64_t)addr_FUN_10000fd7c);
    MSInstrumentFunction(addr_FUN_10000fd7c, (void *)&FUN_10000fd7c_instrument);

    // Calculate and hook into FUN_10000fde4
    void *addr_FUN_10000fde4 = (void *)image + (0x10000fde4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fde4  %x \n", (uint64_t)addr_FUN_10000fde4);
    MSInstrumentFunction(addr_FUN_10000fde4, (void *)&FUN_10000fde4_instrument);

    // Calculate and hook into FUN_10000fdf8
    void *addr_FUN_10000fdf8 = (void *)image + (0x10000fdf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fdf8  %x \n", (uint64_t)addr_FUN_10000fdf8);
    MSInstrumentFunction(addr_FUN_10000fdf8, (void *)&FUN_10000fdf8_instrument);

    // Calculate and hook into FUN_10000fee0
    void *addr_FUN_10000fee0 = (void *)image + (0x10000fee0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fee0  %x \n", (uint64_t)addr_FUN_10000fee0);
    MSInstrumentFunction(addr_FUN_10000fee0, (void *)&FUN_10000fee0_instrument);

    // Calculate and hook into FUN_10000ff04
    void *addr_FUN_10000ff04 = (void *)image + (0x10000ff04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ff04  %x \n", (uint64_t)addr_FUN_10000ff04);
    MSInstrumentFunction(addr_FUN_10000ff04, (void *)&FUN_10000ff04_instrument);

    // Calculate and hook into FUN_10000ff18
    void *addr_FUN_10000ff18 = (void *)image + (0x10000ff18 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ff18  %x \n", (uint64_t)addr_FUN_10000ff18);
    MSInstrumentFunction(addr_FUN_10000ff18, (void *)&FUN_10000ff18_instrument);

    // Calculate and hook into FUN_100010204
    void *addr_FUN_100010204 = (void *)image + (0x100010204 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010204  %x \n", (uint64_t)addr_FUN_100010204);
    MSInstrumentFunction(addr_FUN_100010204, (void *)&FUN_100010204_instrument);

    // Calculate and hook into keybagd_getpasscodeblob_block_invoke
    void *addr_keybagd_getpasscodeblob_block_invoke = (void *)image + (0x10001029c - BASEADDR);
    fprintf(f, "Pegou o addr keybagd_getpasscodeblob_block_invoke  %x \n", (uint64_t)addr_keybagd_getpasscodeblob_block_invoke);
    MSInstrumentFunction(addr_keybagd_getpasscodeblob_block_invoke, (void *)&keybagd_getpasscodeblob_block_invoke_instrument);

    // Calculate and hook into FUN_10001033c
    void *addr_FUN_10001033c = (void *)image + (0x10001033c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001033c  %x \n", (uint64_t)addr_FUN_10001033c);
    MSInstrumentFunction(addr_FUN_10001033c, (void *)&FUN_10001033c_instrument);

    // Calculate and hook into FUN_1000103d8
    void *addr_FUN_1000103d8 = (void *)image + (0x1000103d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000103d8  %x \n", (uint64_t)addr_FUN_1000103d8);
    MSInstrumentFunction(addr_FUN_1000103d8, (void *)&FUN_1000103d8_instrument);

    // Calculate and hook into FUN_100010484
    void *addr_FUN_100010484 = (void *)image + (0x100010484 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010484  %x \n", (uint64_t)addr_FUN_100010484);
    MSInstrumentFunction(addr_FUN_100010484, (void *)&FUN_100010484_instrument);

    // Calculate and hook into FUN_1000105a0
    void *addr_FUN_1000105a0 = (void *)image + (0x1000105a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000105a0  %x \n", (uint64_t)addr_FUN_1000105a0);
    MSInstrumentFunction(addr_FUN_1000105a0, (void *)&FUN_1000105a0_instrument);

    // Calculate and hook into FUN_100010650
    void *addr_FUN_100010650 = (void *)image + (0x100010650 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010650  %x \n", (uint64_t)addr_FUN_100010650);
    MSInstrumentFunction(addr_FUN_100010650, (void *)&FUN_100010650_instrument);

    // Calculate and hook into FUN_100010780
    void *addr_FUN_100010780 = (void *)image + (0x100010780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010780  %x \n", (uint64_t)addr_FUN_100010780);
    MSInstrumentFunction(addr_FUN_100010780, (void *)&FUN_100010780_instrument);

    // Calculate and hook into FUN_10001084c
    void *addr_FUN_10001084c = (void *)image + (0x10001084c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001084c  %x \n", (uint64_t)addr_FUN_10001084c);
    MSInstrumentFunction(addr_FUN_10001084c, (void *)&FUN_10001084c_instrument);

    // Calculate and hook into FUN_1000109d8
    void *addr_FUN_1000109d8 = (void *)image + (0x1000109d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000109d8  %x \n", (uint64_t)addr_FUN_1000109d8);
    MSInstrumentFunction(addr_FUN_1000109d8, (void *)&FUN_1000109d8_instrument);

    // Calculate and hook into FUN_100010ab0
    void *addr_FUN_100010ab0 = (void *)image + (0x100010ab0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010ab0  %x \n", (uint64_t)addr_FUN_100010ab0);
    MSInstrumentFunction(addr_FUN_100010ab0, (void *)&FUN_100010ab0_instrument);

    // Calculate and hook into FUN_100010c04
    void *addr_FUN_100010c04 = (void *)image + (0x100010c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010c04  %x \n", (uint64_t)addr_FUN_100010c04);
    MSInstrumentFunction(addr_FUN_100010c04, (void *)&FUN_100010c04_instrument);

    // Calculate and hook into FUN_100010ca8
    void *addr_FUN_100010ca8 = (void *)image + (0x100010ca8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010ca8  %x \n", (uint64_t)addr_FUN_100010ca8);
    MSInstrumentFunction(addr_FUN_100010ca8, (void *)&FUN_100010ca8_instrument);

    // Calculate and hook into FUN_100010dd0
    void *addr_FUN_100010dd0 = (void *)image + (0x100010dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010dd0  %x \n", (uint64_t)addr_FUN_100010dd0);
    MSInstrumentFunction(addr_FUN_100010dd0, (void *)&FUN_100010dd0_instrument);

    // Calculate and hook into keybagd_stashcreate_block_invoke
    void *addr_keybagd_stashcreate_block_invoke = (void *)image + (0x100010f0c - BASEADDR);
    fprintf(f, "Pegou o addr keybagd_stashcreate_block_invoke  %x \n", (uint64_t)addr_keybagd_stashcreate_block_invoke);
    MSInstrumentFunction(addr_keybagd_stashcreate_block_invoke, (void *)&keybagd_stashcreate_block_invoke_instrument);

    // Calculate and hook into FUN_100010fe0
    void *addr_FUN_100010fe0 = (void *)image + (0x100010fe0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010fe0  %x \n", (uint64_t)addr_FUN_100010fe0);
    MSInstrumentFunction(addr_FUN_100010fe0, (void *)&FUN_100010fe0_instrument);

    // Calculate and hook into FUN_10001101c
    void *addr_FUN_10001101c = (void *)image + (0x10001101c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001101c  %x \n", (uint64_t)addr_FUN_10001101c);
    MSInstrumentFunction(addr_FUN_10001101c, (void *)&FUN_10001101c_instrument);

    // Calculate and hook into FUN_10001104c
    void *addr_FUN_10001104c = (void *)image + (0x10001104c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001104c  %x \n", (uint64_t)addr_FUN_10001104c);
    MSInstrumentFunction(addr_FUN_10001104c, (void *)&FUN_10001104c_instrument);

    // Calculate and hook into FUN_1000110fc
    void *addr_FUN_1000110fc = (void *)image + (0x1000110fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000110fc  %x \n", (uint64_t)addr_FUN_1000110fc);
    MSInstrumentFunction(addr_FUN_1000110fc, (void *)&FUN_1000110fc_instrument);

    // Calculate and hook into FUN_100011180
    void *addr_FUN_100011180 = (void *)image + (0x100011180 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011180  %x \n", (uint64_t)addr_FUN_100011180);
    MSInstrumentFunction(addr_FUN_100011180, (void *)&FUN_100011180_instrument);

    // Calculate and hook into FUN_100011214
    void *addr_FUN_100011214 = (void *)image + (0x100011214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011214  %x \n", (uint64_t)addr_FUN_100011214);
    MSInstrumentFunction(addr_FUN_100011214, (void *)&FUN_100011214_instrument);

    // Calculate and hook into FUN_10001126c
    void *addr_FUN_10001126c = (void *)image + (0x10001126c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001126c  %x \n", (uint64_t)addr_FUN_10001126c);
    MSInstrumentFunction(addr_FUN_10001126c, (void *)&FUN_10001126c_instrument);

    // Calculate and hook into FUN_10001137c
    void *addr_FUN_10001137c = (void *)image + (0x10001137c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001137c  %x \n", (uint64_t)addr_FUN_10001137c);
    MSInstrumentFunction(addr_FUN_10001137c, (void *)&FUN_10001137c_instrument);

    // Calculate and hook into FUN_10001141c
    void *addr_FUN_10001141c = (void *)image + (0x10001141c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001141c  %x \n", (uint64_t)addr_FUN_10001141c);
    MSInstrumentFunction(addr_FUN_10001141c, (void *)&FUN_10001141c_instrument);

    // Calculate and hook into FUN_100011468
    void *addr_FUN_100011468 = (void *)image + (0x100011468 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011468  %x \n", (uint64_t)addr_FUN_100011468);
    MSInstrumentFunction(addr_FUN_100011468, (void *)&FUN_100011468_instrument);

    // Calculate and hook into FUN_1000114a4
    void *addr_FUN_1000114a4 = (void *)image + (0x1000114a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000114a4  %x \n", (uint64_t)addr_FUN_1000114a4);
    MSInstrumentFunction(addr_FUN_1000114a4, (void *)&FUN_1000114a4_instrument);

    // Calculate and hook into FUN_100011544
    void *addr_FUN_100011544 = (void *)image + (0x100011544 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011544  %x \n", (uint64_t)addr_FUN_100011544);
    MSInstrumentFunction(addr_FUN_100011544, (void *)&FUN_100011544_instrument);

    // Calculate and hook into FUN_10001176c
    void *addr_FUN_10001176c = (void *)image + (0x10001176c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001176c  %x \n", (uint64_t)addr_FUN_10001176c);
    MSInstrumentFunction(addr_FUN_10001176c, (void *)&FUN_10001176c_instrument);

    // Calculate and hook into FUN_100011824
    void *addr_FUN_100011824 = (void *)image + (0x100011824 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011824  %x \n", (uint64_t)addr_FUN_100011824);
    MSInstrumentFunction(addr_FUN_100011824, (void *)&FUN_100011824_instrument);

    // Calculate and hook into FUN_1000118d0
    void *addr_FUN_1000118d0 = (void *)image + (0x1000118d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000118d0  %x \n", (uint64_t)addr_FUN_1000118d0);
    MSInstrumentFunction(addr_FUN_1000118d0, (void *)&FUN_1000118d0_instrument);

    // Calculate and hook into FUN_100011968
    void *addr_FUN_100011968 = (void *)image + (0x100011968 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011968  %x \n", (uint64_t)addr_FUN_100011968);
    MSInstrumentFunction(addr_FUN_100011968, (void *)&FUN_100011968_instrument);

    // Calculate and hook into FUN_1000119a8
    void *addr_FUN_1000119a8 = (void *)image + (0x1000119a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000119a8  %x \n", (uint64_t)addr_FUN_1000119a8);
    MSInstrumentFunction(addr_FUN_1000119a8, (void *)&FUN_1000119a8_instrument);

    // Calculate and hook into FUN_100011a34
    void *addr_FUN_100011a34 = (void *)image + (0x100011a34 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a34  %x \n", (uint64_t)addr_FUN_100011a34);
    MSInstrumentFunction(addr_FUN_100011a34, (void *)&FUN_100011a34_instrument);

    // Calculate and hook into FUN_100011a70
    void *addr_FUN_100011a70 = (void *)image + (0x100011a70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a70  %x \n", (uint64_t)addr_FUN_100011a70);
    MSInstrumentFunction(addr_FUN_100011a70, (void *)&FUN_100011a70_instrument);

    // Calculate and hook into FUN_100011c04
    void *addr_FUN_100011c04 = (void *)image + (0x100011c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011c04  %x \n", (uint64_t)addr_FUN_100011c04);
    MSInstrumentFunction(addr_FUN_100011c04, (void *)&FUN_100011c04_instrument);

    // Calculate and hook into FUN_100011ca0
    void *addr_FUN_100011ca0 = (void *)image + (0x100011ca0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011ca0  %x \n", (uint64_t)addr_FUN_100011ca0);
    MSInstrumentFunction(addr_FUN_100011ca0, (void *)&FUN_100011ca0_instrument);

    // Calculate and hook into FUN_100011da4
    void *addr_FUN_100011da4 = (void *)image + (0x100011da4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011da4  %x \n", (uint64_t)addr_FUN_100011da4);
    MSInstrumentFunction(addr_FUN_100011da4, (void *)&FUN_100011da4_instrument);

    // Calculate and hook into FUN_100011e30
    void *addr_FUN_100011e30 = (void *)image + (0x100011e30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011e30  %x \n", (uint64_t)addr_FUN_100011e30);
    MSInstrumentFunction(addr_FUN_100011e30, (void *)&FUN_100011e30_instrument);

    // Calculate and hook into FUN_100011eb8
    void *addr_FUN_100011eb8 = (void *)image + (0x100011eb8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011eb8  %x \n", (uint64_t)addr_FUN_100011eb8);
    MSInstrumentFunction(addr_FUN_100011eb8, (void *)&FUN_100011eb8_instrument);

    // Calculate and hook into FUN_100011fb4
    void *addr_FUN_100011fb4 = (void *)image + (0x100011fb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011fb4  %x \n", (uint64_t)addr_FUN_100011fb4);
    MSInstrumentFunction(addr_FUN_100011fb4, (void *)&FUN_100011fb4_instrument);

    // Calculate and hook into FUN_100011ff0
    void *addr_FUN_100011ff0 = (void *)image + (0x100011ff0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011ff0  %x \n", (uint64_t)addr_FUN_100011ff0);
    MSInstrumentFunction(addr_FUN_100011ff0, (void *)&FUN_100011ff0_instrument);

    // Calculate and hook into FUN_100012018
    void *addr_FUN_100012018 = (void *)image + (0x100012018 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012018  %x \n", (uint64_t)addr_FUN_100012018);
    MSInstrumentFunction(addr_FUN_100012018, (void *)&FUN_100012018_instrument);

    // Calculate and hook into FUN_10001210c
    void *addr_FUN_10001210c = (void *)image + (0x10001210c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001210c  %x \n", (uint64_t)addr_FUN_10001210c);
    MSInstrumentFunction(addr_FUN_10001210c, (void *)&FUN_10001210c_instrument);

    // Calculate and hook into FUN_10001224c
    void *addr_FUN_10001224c = (void *)image + (0x10001224c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001224c  %x \n", (uint64_t)addr_FUN_10001224c);
    MSInstrumentFunction(addr_FUN_10001224c, (void *)&FUN_10001224c_instrument);

    // Calculate and hook into FUN_100012318
    void *addr_FUN_100012318 = (void *)image + (0x100012318 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012318  %x \n", (uint64_t)addr_FUN_100012318);
    MSInstrumentFunction(addr_FUN_100012318, (void *)&FUN_100012318_instrument);

    // Calculate and hook into FUN_100012370
    void *addr_FUN_100012370 = (void *)image + (0x100012370 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012370  %x \n", (uint64_t)addr_FUN_100012370);
    MSInstrumentFunction(addr_FUN_100012370, (void *)&FUN_100012370_instrument);

    // Calculate and hook into FUN_1000123c0
    void *addr_FUN_1000123c0 = (void *)image + (0x1000123c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000123c0  %x \n", (uint64_t)addr_FUN_1000123c0);
    MSInstrumentFunction(addr_FUN_1000123c0, (void *)&FUN_1000123c0_instrument);

    // Calculate and hook into FUN_100012450
    void *addr_FUN_100012450 = (void *)image + (0x100012450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012450  %x \n", (uint64_t)addr_FUN_100012450);
    MSInstrumentFunction(addr_FUN_100012450, (void *)&FUN_100012450_instrument);

    // Calculate and hook into FUN_100012468
    void *addr_FUN_100012468 = (void *)image + (0x100012468 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012468  %x \n", (uint64_t)addr_FUN_100012468);
    MSInstrumentFunction(addr_FUN_100012468, (void *)&FUN_100012468_instrument);

    // Calculate and hook into FUN_100012564
    void *addr_FUN_100012564 = (void *)image + (0x100012564 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012564  %x \n", (uint64_t)addr_FUN_100012564);
    MSInstrumentFunction(addr_FUN_100012564, (void *)&FUN_100012564_instrument);

    // Calculate and hook into FUN_100012580
    void *addr_FUN_100012580 = (void *)image + (0x100012580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012580  %x \n", (uint64_t)addr_FUN_100012580);
    MSInstrumentFunction(addr_FUN_100012580, (void *)&FUN_100012580_instrument);

    // Calculate and hook into FUN_1000125d0
    void *addr_FUN_1000125d0 = (void *)image + (0x1000125d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000125d0  %x \n", (uint64_t)addr_FUN_1000125d0);
    MSInstrumentFunction(addr_FUN_1000125d0, (void *)&FUN_1000125d0_instrument);

    // Calculate and hook into InterageSEP
    void *addr_InterageSEP = (void *)image + (0x100012698 - BASEADDR);
    fprintf(f, "Pegou o addr InterageSEP  %x \n", (uint64_t)addr_InterageSEP);
    MSInstrumentFunction(addr_InterageSEP, (void *)&InterageSEP_instrument);

    // Calculate and hook into FUN_100012758
    void *addr_FUN_100012758 = (void *)image + (0x100012758 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012758  %x \n", (uint64_t)addr_FUN_100012758);
    MSInstrumentFunction(addr_FUN_100012758, (void *)&FUN_100012758_instrument);

    // Calculate and hook into FUN_1000127cc
    void *addr_FUN_1000127cc = (void *)image + (0x1000127cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000127cc  %x \n", (uint64_t)addr_FUN_1000127cc);
    MSInstrumentFunction(addr_FUN_1000127cc, (void *)&FUN_1000127cc_instrument);

    // Calculate and hook into FUN_10001285c
    void *addr_FUN_10001285c = (void *)image + (0x10001285c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001285c  %x \n", (uint64_t)addr_FUN_10001285c);
    MSInstrumentFunction(addr_FUN_10001285c, (void *)&FUN_10001285c_instrument);

    // Calculate and hook into FUN_100012980
    void *addr_FUN_100012980 = (void *)image + (0x100012980 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012980  %x \n", (uint64_t)addr_FUN_100012980);
    MSInstrumentFunction(addr_FUN_100012980, (void *)&FUN_100012980_instrument);

    // Calculate and hook into FUN_100012a9c
    void *addr_FUN_100012a9c = (void *)image + (0x100012a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012a9c  %x \n", (uint64_t)addr_FUN_100012a9c);
    MSInstrumentFunction(addr_FUN_100012a9c, (void *)&FUN_100012a9c_instrument);

    // Calculate and hook into FUN_100012ad8
    void *addr_FUN_100012ad8 = (void *)image + (0x100012ad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012ad8  %x \n", (uint64_t)addr_FUN_100012ad8);
    MSInstrumentFunction(addr_FUN_100012ad8, (void *)&FUN_100012ad8_instrument);

    // Calculate and hook into FUN_100012aec
    void *addr_FUN_100012aec = (void *)image + (0x100012aec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012aec  %x \n", (uint64_t)addr_FUN_100012aec);
    MSInstrumentFunction(addr_FUN_100012aec, (void *)&FUN_100012aec_instrument);

    // Calculate and hook into FUN_100012c44
    void *addr_FUN_100012c44 = (void *)image + (0x100012c44 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012c44  %x \n", (uint64_t)addr_FUN_100012c44);
    MSInstrumentFunction(addr_FUN_100012c44, (void *)&FUN_100012c44_instrument);

    // Calculate and hook into FUN_100012d04
    void *addr_FUN_100012d04 = (void *)image + (0x100012d04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012d04  %x \n", (uint64_t)addr_FUN_100012d04);
    MSInstrumentFunction(addr_FUN_100012d04, (void *)&FUN_100012d04_instrument);

    // Calculate and hook into FUN_100012dc8
    void *addr_FUN_100012dc8 = (void *)image + (0x100012dc8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012dc8  %x \n", (uint64_t)addr_FUN_100012dc8);
    MSInstrumentFunction(addr_FUN_100012dc8, (void *)&FUN_100012dc8_instrument);

    // Calculate and hook into SetBagHandleForUID
    void *addr_SetBagHandleForUID = (void *)image + (0x100012e78 - BASEADDR);
    fprintf(f, "Pegou o addr SetBagHandleForUID  %x \n", (uint64_t)addr_SetBagHandleForUID);
    MSInstrumentFunction(addr_SetBagHandleForUID, (void *)&SetBagHandleForUID_instrument);

    // Calculate and hook into FUN_100012e84
    void *addr_FUN_100012e84 = (void *)image + (0x100012e84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e84  %x \n", (uint64_t)addr_FUN_100012e84);
    MSInstrumentFunction(addr_FUN_100012e84, (void *)&FUN_100012e84_instrument);

    // Calculate and hook into FUN_100012e98
    void *addr_FUN_100012e98 = (void *)image + (0x100012e98 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e98  %x \n", (uint64_t)addr_FUN_100012e98);
    MSInstrumentFunction(addr_FUN_100012e98, (void *)&FUN_100012e98_instrument);

    // Calculate and hook into FUN_100012ea4
    void *addr_FUN_100012ea4 = (void *)image + (0x100012ea4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012ea4  %x \n", (uint64_t)addr_FUN_100012ea4);
    MSInstrumentFunction(addr_FUN_100012ea4, (void *)&FUN_100012ea4_instrument);

    // Calculate and hook into FUN_100012fb8
    void *addr_FUN_100012fb8 = (void *)image + (0x100012fb8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012fb8  %x \n", (uint64_t)addr_FUN_100012fb8);
    MSInstrumentFunction(addr_FUN_100012fb8, (void *)&FUN_100012fb8_instrument);

    // Calculate and hook into FUN_100013104
    void *addr_FUN_100013104 = (void *)image + (0x100013104 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013104  %x \n", (uint64_t)addr_FUN_100013104);
    MSInstrumentFunction(addr_FUN_100013104, (void *)&FUN_100013104_instrument);

    // Calculate and hook into FUN_1000131b4
    void *addr_FUN_1000131b4 = (void *)image + (0x1000131b4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000131b4  %x \n", (uint64_t)addr_FUN_1000131b4);
    MSInstrumentFunction(addr_FUN_1000131b4, (void *)&FUN_1000131b4_instrument);

    // Calculate and hook into FUN_1000132b0
    void *addr_FUN_1000132b0 = (void *)image + (0x1000132b0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000132b0  %x \n", (uint64_t)addr_FUN_1000132b0);
    MSInstrumentFunction(addr_FUN_1000132b0, (void *)&FUN_1000132b0_instrument);

    // Calculate and hook into updateofGraceperiodFORUSER
    void *addr_updateofGraceperiodFORUSER = (void *)image + (0x100013398 - BASEADDR);
    fprintf(f, "Pegou o addr updateofGraceperiodFORUSER  %x \n", (uint64_t)addr_updateofGraceperiodFORUSER);
    MSInstrumentFunction(addr_updateofGraceperiodFORUSER, (void *)&updateofGraceperiodFORUSER_instrument);

    // Calculate and hook into FUN_100013624
    void *addr_FUN_100013624 = (void *)image + (0x100013624 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013624  %x \n", (uint64_t)addr_FUN_100013624);
    MSInstrumentFunction(addr_FUN_100013624, (void *)&FUN_100013624_instrument);

    // Calculate and hook into FUN_100013728
    void *addr_FUN_100013728 = (void *)image + (0x100013728 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013728  %x \n", (uint64_t)addr_FUN_100013728);
    MSInstrumentFunction(addr_FUN_100013728, (void *)&FUN_100013728_instrument);

    // Calculate and hook into FUN_100013820
    void *addr_FUN_100013820 = (void *)image + (0x100013820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013820  %x \n", (uint64_t)addr_FUN_100013820);
    MSInstrumentFunction(addr_FUN_100013820, (void *)&FUN_100013820_instrument);

    // Calculate and hook into FUN_100013868
    void *addr_FUN_100013868 = (void *)image + (0x100013868 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013868  %x \n", (uint64_t)addr_FUN_100013868);
    MSInstrumentFunction(addr_FUN_100013868, (void *)&FUN_100013868_instrument);

    // Calculate and hook into FUN_1000139f8
    void *addr_FUN_1000139f8 = (void *)image + (0x1000139f8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000139f8  %x \n", (uint64_t)addr_FUN_1000139f8);
    MSInstrumentFunction(addr_FUN_1000139f8, (void *)&FUN_1000139f8_instrument);

    // Calculate and hook into FUN_100013a88
    void *addr_FUN_100013a88 = (void *)image + (0x100013a88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013a88  %x \n", (uint64_t)addr_FUN_100013a88);
    MSInstrumentFunction(addr_FUN_100013a88, (void *)&FUN_100013a88_instrument);

    // Calculate and hook into FUN_100013bfc
    void *addr_FUN_100013bfc = (void *)image + (0x100013bfc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013bfc  %x \n", (uint64_t)addr_FUN_100013bfc);
    MSInstrumentFunction(addr_FUN_100013bfc, (void *)&FUN_100013bfc_instrument);

    // Calculate and hook into FUN_100013c08
    void *addr_FUN_100013c08 = (void *)image + (0x100013c08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013c08  %x \n", (uint64_t)addr_FUN_100013c08);
    MSInstrumentFunction(addr_FUN_100013c08, (void *)&FUN_100013c08_instrument);

    // Calculate and hook into FUN_100013cf4
    void *addr_FUN_100013cf4 = (void *)image + (0x100013cf4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013cf4  %x \n", (uint64_t)addr_FUN_100013cf4);
    MSInstrumentFunction(addr_FUN_100013cf4, (void *)&FUN_100013cf4_instrument);

    // Calculate and hook into FUN_100013d00
    void *addr_FUN_100013d00 = (void *)image + (0x100013d00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013d00  %x \n", (uint64_t)addr_FUN_100013d00);
    MSInstrumentFunction(addr_FUN_100013d00, (void *)&FUN_100013d00_instrument);

    // Calculate and hook into FUN_100013d8c
    void *addr_FUN_100013d8c = (void *)image + (0x100013d8c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013d8c  %x \n", (uint64_t)addr_FUN_100013d8c);
    MSInstrumentFunction(addr_FUN_100013d8c, (void *)&FUN_100013d8c_instrument);

    // Calculate and hook into FUN_100013e14
    void *addr_FUN_100013e14 = (void *)image + (0x100013e14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013e14  %x \n", (uint64_t)addr_FUN_100013e14);
    MSInstrumentFunction(addr_FUN_100013e14, (void *)&FUN_100013e14_instrument);

    // Calculate and hook into FUN_100013e28
    void *addr_FUN_100013e28 = (void *)image + (0x100013e28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013e28  %x \n", (uint64_t)addr_FUN_100013e28);
    MSInstrumentFunction(addr_FUN_100013e28, (void *)&FUN_100013e28_instrument);

    // Calculate and hook into FUN_100013fa0
    void *addr_FUN_100013fa0 = (void *)image + (0x100013fa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fa0  %x \n", (uint64_t)addr_FUN_100013fa0);
    MSInstrumentFunction(addr_FUN_100013fa0, (void *)&FUN_100013fa0_instrument);

    // Calculate and hook into FUN_100013fcc
    void *addr_FUN_100013fcc = (void *)image + (0x100013fcc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fcc  %x \n", (uint64_t)addr_FUN_100013fcc);
    MSInstrumentFunction(addr_FUN_100013fcc, (void *)&FUN_100013fcc_instrument);

    // Calculate and hook into FUN_10001410c
    void *addr_FUN_10001410c = (void *)image + (0x10001410c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001410c  %x \n", (uint64_t)addr_FUN_10001410c);
    MSInstrumentFunction(addr_FUN_10001410c, (void *)&FUN_10001410c_instrument);

    // Calculate and hook into FUN_1000141b8
    void *addr_FUN_1000141b8 = (void *)image + (0x1000141b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000141b8  %x \n", (uint64_t)addr_FUN_1000141b8);
    MSInstrumentFunction(addr_FUN_1000141b8, (void *)&FUN_1000141b8_instrument);

    // Calculate and hook into FUN_1000142dc
    void *addr_FUN_1000142dc = (void *)image + (0x1000142dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000142dc  %x \n", (uint64_t)addr_FUN_1000142dc);
    MSInstrumentFunction(addr_FUN_1000142dc, (void *)&FUN_1000142dc_instrument);

    // Calculate and hook into FUN_1000142f4
    void *addr_FUN_1000142f4 = (void *)image + (0x1000142f4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000142f4  %x \n", (uint64_t)addr_FUN_1000142f4);
    MSInstrumentFunction(addr_FUN_1000142f4, (void *)&FUN_1000142f4_instrument);

    // Calculate and hook into FUN_100014390
    void *addr_FUN_100014390 = (void *)image + (0x100014390 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014390  %x \n", (uint64_t)addr_FUN_100014390);
    MSInstrumentFunction(addr_FUN_100014390, (void *)&FUN_100014390_instrument);

    // Calculate and hook into FUN_1000144f0
    void *addr_FUN_1000144f0 = (void *)image + (0x1000144f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000144f0  %x \n", (uint64_t)addr_FUN_1000144f0);
    MSInstrumentFunction(addr_FUN_1000144f0, (void *)&FUN_1000144f0_instrument);

    // Calculate and hook into FUN_100014578
    void *addr_FUN_100014578 = (void *)image + (0x100014578 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014578  %x \n", (uint64_t)addr_FUN_100014578);
    MSInstrumentFunction(addr_FUN_100014578, (void *)&FUN_100014578_instrument);

    // Calculate and hook into FUN_1000145f0
    void *addr_FUN_1000145f0 = (void *)image + (0x1000145f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000145f0  %x \n", (uint64_t)addr_FUN_1000145f0);
    MSInstrumentFunction(addr_FUN_1000145f0, (void *)&FUN_1000145f0_instrument);

    // Calculate and hook into FUN_100014a0c
    void *addr_FUN_100014a0c = (void *)image + (0x100014a0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014a0c  %x \n", (uint64_t)addr_FUN_100014a0c);
    MSInstrumentFunction(addr_FUN_100014a0c, (void *)&FUN_100014a0c_instrument);

    // Calculate and hook into FUN_100014c44
    void *addr_FUN_100014c44 = (void *)image + (0x100014c44 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014c44  %x \n", (uint64_t)addr_FUN_100014c44);
    MSInstrumentFunction(addr_FUN_100014c44, (void *)&FUN_100014c44_instrument);

    // Calculate and hook into FUN_100014d08
    void *addr_FUN_100014d08 = (void *)image + (0x100014d08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014d08  %x \n", (uint64_t)addr_FUN_100014d08);
    MSInstrumentFunction(addr_FUN_100014d08, (void *)&FUN_100014d08_instrument);

    // Calculate and hook into FUN_100014e00
    void *addr_FUN_100014e00 = (void *)image + (0x100014e00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014e00  %x \n", (uint64_t)addr_FUN_100014e00);
    MSInstrumentFunction(addr_FUN_100014e00, (void *)&FUN_100014e00_instrument);

    // Calculate and hook into FUN_100014ed0
    void *addr_FUN_100014ed0 = (void *)image + (0x100014ed0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014ed0  %x \n", (uint64_t)addr_FUN_100014ed0);
    MSInstrumentFunction(addr_FUN_100014ed0, (void *)&FUN_100014ed0_instrument);

    // Calculate and hook into FUN_100014fac
    void *addr_FUN_100014fac = (void *)image + (0x100014fac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014fac  %x \n", (uint64_t)addr_FUN_100014fac);
    MSInstrumentFunction(addr_FUN_100014fac, (void *)&FUN_100014fac_instrument);

    // Calculate and hook into FUN_100015034
    void *addr_FUN_100015034 = (void *)image + (0x100015034 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015034  %x \n", (uint64_t)addr_FUN_100015034);
    MSInstrumentFunction(addr_FUN_100015034, (void *)&FUN_100015034_instrument);

    // Calculate and hook into FUN_1000150ac
    void *addr_FUN_1000150ac = (void *)image + (0x1000150ac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000150ac  %x \n", (uint64_t)addr_FUN_1000150ac);
    MSInstrumentFunction(addr_FUN_1000150ac, (void *)&FUN_1000150ac_instrument);

    // Calculate and hook into FUN_100015214
    void *addr_FUN_100015214 = (void *)image + (0x100015214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015214  %x \n", (uint64_t)addr_FUN_100015214);
    MSInstrumentFunction(addr_FUN_100015214, (void *)&FUN_100015214_instrument);

    // Calculate and hook into FUN_1000153b8
    void *addr_FUN_1000153b8 = (void *)image + (0x1000153b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000153b8  %x \n", (uint64_t)addr_FUN_1000153b8);
    MSInstrumentFunction(addr_FUN_1000153b8, (void *)&FUN_1000153b8_instrument);

    // Calculate and hook into FUN_1000154f8
    void *addr_FUN_1000154f8 = (void *)image + (0x1000154f8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000154f8  %x \n", (uint64_t)addr_FUN_1000154f8);
    MSInstrumentFunction(addr_FUN_1000154f8, (void *)&FUN_1000154f8_instrument);

    // Calculate and hook into FUN_100015630
    void *addr_FUN_100015630 = (void *)image + (0x100015630 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015630  %x \n", (uint64_t)addr_FUN_100015630);
    MSInstrumentFunction(addr_FUN_100015630, (void *)&FUN_100015630_instrument);

    // Calculate and hook into FUN_1000157fc
    void *addr_FUN_1000157fc = (void *)image + (0x1000157fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000157fc  %x \n", (uint64_t)addr_FUN_1000157fc);
    MSInstrumentFunction(addr_FUN_1000157fc, (void *)&FUN_1000157fc_instrument);

    // Calculate and hook into FUN_10001580c
    void *addr_FUN_10001580c = (void *)image + (0x10001580c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001580c  %x \n", (uint64_t)addr_FUN_10001580c);
    MSInstrumentFunction(addr_FUN_10001580c, (void *)&FUN_10001580c_instrument);

    // Calculate and hook into FUN_100015874
    void *addr_FUN_100015874 = (void *)image + (0x100015874 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015874  %x \n", (uint64_t)addr_FUN_100015874);
    MSInstrumentFunction(addr_FUN_100015874, (void *)&FUN_100015874_instrument);

    // Calculate and hook into FUN_100015a84
    void *addr_FUN_100015a84 = (void *)image + (0x100015a84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015a84  %x \n", (uint64_t)addr_FUN_100015a84);
    MSInstrumentFunction(addr_FUN_100015a84, (void *)&FUN_100015a84_instrument);

    // Calculate and hook into FUN_100015b10
    void *addr_FUN_100015b10 = (void *)image + (0x100015b10 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015b10  %x \n", (uint64_t)addr_FUN_100015b10);
    MSInstrumentFunction(addr_FUN_100015b10, (void *)&FUN_100015b10_instrument);

    // Calculate and hook into FUN_100015be8
    void *addr_FUN_100015be8 = (void *)image + (0x100015be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015be8  %x \n", (uint64_t)addr_FUN_100015be8);
    MSInstrumentFunction(addr_FUN_100015be8, (void *)&FUN_100015be8_instrument);

    // Calculate and hook into FUN_100015c4c
    void *addr_FUN_100015c4c = (void *)image + (0x100015c4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015c4c  %x \n", (uint64_t)addr_FUN_100015c4c);
    MSInstrumentFunction(addr_FUN_100015c4c, (void *)&FUN_100015c4c_instrument);

    // Calculate and hook into FUN_100015cb0
    void *addr_FUN_100015cb0 = (void *)image + (0x100015cb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015cb0  %x \n", (uint64_t)addr_FUN_100015cb0);
    MSInstrumentFunction(addr_FUN_100015cb0, (void *)&FUN_100015cb0_instrument);

    // Calculate and hook into FUN_100015d14
    void *addr_FUN_100015d14 = (void *)image + (0x100015d14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015d14  %x \n", (uint64_t)addr_FUN_100015d14);
    MSInstrumentFunction(addr_FUN_100015d14, (void *)&FUN_100015d14_instrument);

    // Calculate and hook into _ADClientAddValueForScalarKey
    void *addr__ADClientAddValueForScalarKey = (void *)image + (0x100015d78 - BASEADDR);
    fprintf(f, "Pegou o addr _ADClientAddValueForScalarKey  %x \n", (uint64_t)addr__ADClientAddValueForScalarKey);
    MSInstrumentFunction(addr__ADClientAddValueForScalarKey, (void *)&_ADClientAddValueForScalarKey_instrument);

    // Calculate and hook into _ADClientSetValueForScalarKey
    void *addr__ADClientSetValueForScalarKey = (void *)image + (0x100015d84 - BASEADDR);
    fprintf(f, "Pegou o addr _ADClientSetValueForScalarKey  %x \n", (uint64_t)addr__ADClientSetValueForScalarKey);
    MSInstrumentFunction(addr__ADClientSetValueForScalarKey, (void *)&_ADClientSetValueForScalarKey_instrument);

    // Calculate and hook into _CCCryptorCreate
    void *addr__CCCryptorCreate = (void *)image + (0x100015d90 - BASEADDR);
    fprintf(f, "Pegou o addr _CCCryptorCreate  %x \n", (uint64_t)addr__CCCryptorCreate);
    MSInstrumentFunction(addr__CCCryptorCreate, (void *)&_CCCryptorCreate_instrument);

    // Calculate and hook into _CCCryptorFinal
    void *addr__CCCryptorFinal = (void *)image + (0x100015d9c - BASEADDR);
    fprintf(f, "Pegou o addr _CCCryptorFinal  %x \n", (uint64_t)addr__CCCryptorFinal);
    MSInstrumentFunction(addr__CCCryptorFinal, (void *)&_CCCryptorFinal_instrument);

    // Calculate and hook into _CCCryptorGetOutputLength
    void *addr__CCCryptorGetOutputLength = (void *)image + (0x100015da8 - BASEADDR);
    fprintf(f, "Pegou o addr _CCCryptorGetOutputLength  %x \n", (uint64_t)addr__CCCryptorGetOutputLength);
    MSInstrumentFunction(addr__CCCryptorGetOutputLength, (void *)&_CCCryptorGetOutputLength_instrument);

    // Calculate and hook into _CCCryptorRelease
    void *addr__CCCryptorRelease = (void *)image + (0x100015db4 - BASEADDR);
    fprintf(f, "Pegou o addr _CCCryptorRelease  %x \n", (uint64_t)addr__CCCryptorRelease);
    MSInstrumentFunction(addr__CCCryptorRelease, (void *)&_CCCryptorRelease_instrument);

    // Calculate and hook into _CCCryptorUpdate
    void *addr__CCCryptorUpdate = (void *)image + (0x100015dc0 - BASEADDR);
    fprintf(f, "Pegou o addr _CCCryptorUpdate  %x \n", (uint64_t)addr__CCCryptorUpdate);
    MSInstrumentFunction(addr__CCCryptorUpdate, (void *)&_CCCryptorUpdate_instrument);

    // Calculate and hook into _CFAbsoluteTimeGetCurrent
    void *addr__CFAbsoluteTimeGetCurrent = (void *)image + (0x100015dcc - BASEADDR);
    fprintf(f, "Pegou o addr _CFAbsoluteTimeGetCurrent  %x \n", (uint64_t)addr__CFAbsoluteTimeGetCurrent);
    MSInstrumentFunction(addr__CFAbsoluteTimeGetCurrent, (void *)&_CFAbsoluteTimeGetCurrent_instrument);

    // Calculate and hook into _CFArrayAppendValue
    void *addr__CFArrayAppendValue = (void *)image + (0x100015dd8 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayAppendValue  %x \n", (uint64_t)addr__CFArrayAppendValue);
    MSInstrumentFunction(addr__CFArrayAppendValue, (void *)&_CFArrayAppendValue_instrument);

    // Calculate and hook into _CFArrayCreateMutable
    void *addr__CFArrayCreateMutable = (void *)image + (0x100015de4 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayCreateMutable  %x \n", (uint64_t)addr__CFArrayCreateMutable);
    MSInstrumentFunction(addr__CFArrayCreateMutable, (void *)&_CFArrayCreateMutable_instrument);

    // Calculate and hook into _CFArrayCreateMutableCopy
    void *addr__CFArrayCreateMutableCopy = (void *)image + (0x100015df0 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayCreateMutableCopy  %x \n", (uint64_t)addr__CFArrayCreateMutableCopy);
    MSInstrumentFunction(addr__CFArrayCreateMutableCopy, (void *)&_CFArrayCreateMutableCopy_instrument);

    // Calculate and hook into _CFArrayGetCount
    void *addr__CFArrayGetCount = (void *)image + (0x100015dfc - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayGetCount  %x \n", (uint64_t)addr__CFArrayGetCount);
    MSInstrumentFunction(addr__CFArrayGetCount, (void *)&_CFArrayGetCount_instrument);

    // Calculate and hook into _CFArrayGetTypeID
    void *addr__CFArrayGetTypeID = (void *)image + (0x100015e08 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayGetTypeID  %x \n", (uint64_t)addr__CFArrayGetTypeID);
    MSInstrumentFunction(addr__CFArrayGetTypeID, (void *)&_CFArrayGetTypeID_instrument);

    // Calculate and hook into _CFArrayGetValueAtIndex
    void *addr__CFArrayGetValueAtIndex = (void *)image + (0x100015e14 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayGetValueAtIndex  %x \n", (uint64_t)addr__CFArrayGetValueAtIndex);
    MSInstrumentFunction(addr__CFArrayGetValueAtIndex, (void *)&_CFArrayGetValueAtIndex_instrument);

    // Calculate and hook into _CFArrayRemoveValueAtIndex
    void *addr__CFArrayRemoveValueAtIndex = (void *)image + (0x100015e20 - BASEADDR);
    fprintf(f, "Pegou o addr _CFArrayRemoveValueAtIndex  %x \n", (uint64_t)addr__CFArrayRemoveValueAtIndex);
    MSInstrumentFunction(addr__CFArrayRemoveValueAtIndex, (void *)&_CFArrayRemoveValueAtIndex_instrument);

    // Calculate and hook into _CFBooleanGetTypeID
    void *addr__CFBooleanGetTypeID = (void *)image + (0x100015e2c - BASEADDR);
    fprintf(f, "Pegou o addr _CFBooleanGetTypeID  %x \n", (uint64_t)addr__CFBooleanGetTypeID);
    MSInstrumentFunction(addr__CFBooleanGetTypeID, (void *)&_CFBooleanGetTypeID_instrument);

    // Calculate and hook into _CFBooleanGetValue
    void *addr__CFBooleanGetValue = (void *)image + (0x100015e38 - BASEADDR);
    fprintf(f, "Pegou o addr _CFBooleanGetValue  %x \n", (uint64_t)addr__CFBooleanGetValue);
    MSInstrumentFunction(addr__CFBooleanGetValue, (void *)&_CFBooleanGetValue_instrument);

    // Calculate and hook into _CFDataCreate
    void *addr__CFDataCreate = (void *)image + (0x100015e44 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataCreate  %x \n", (uint64_t)addr__CFDataCreate);
    MSInstrumentFunction(addr__CFDataCreate, (void *)&_CFDataCreate_instrument);

    // Calculate and hook into _CFDataCreateMutable
    void *addr__CFDataCreateMutable = (void *)image + (0x100015e50 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataCreateMutable  %x \n", (uint64_t)addr__CFDataCreateMutable);
    MSInstrumentFunction(addr__CFDataCreateMutable, (void *)&_CFDataCreateMutable_instrument);

    // Calculate and hook into _CFDataCreateWithBytesNoCopy
    void *addr__CFDataCreateWithBytesNoCopy = (void *)image + (0x100015e5c - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataCreateWithBytesNoCopy  %x \n", (uint64_t)addr__CFDataCreateWithBytesNoCopy);
    MSInstrumentFunction(addr__CFDataCreateWithBytesNoCopy, (void *)&_CFDataCreateWithBytesNoCopy_instrument);

    // Calculate and hook into _CFDataGetBytePtr
    void *addr__CFDataGetBytePtr = (void *)image + (0x100015e68 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataGetBytePtr  %x \n", (uint64_t)addr__CFDataGetBytePtr);
    MSInstrumentFunction(addr__CFDataGetBytePtr, (void *)&_CFDataGetBytePtr_instrument);

    // Calculate and hook into _CFDataGetBytes
    void *addr__CFDataGetBytes = (void *)image + (0x100015e74 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataGetBytes  %x \n", (uint64_t)addr__CFDataGetBytes);
    MSInstrumentFunction(addr__CFDataGetBytes, (void *)&_CFDataGetBytes_instrument);

    // Calculate and hook into _CFDataGetLength
    void *addr__CFDataGetLength = (void *)image + (0x100015e80 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataGetLength  %x \n", (uint64_t)addr__CFDataGetLength);
    MSInstrumentFunction(addr__CFDataGetLength, (void *)&_CFDataGetLength_instrument);

    // Calculate and hook into _CFDataGetMutableBytePtr
    void *addr__CFDataGetMutableBytePtr = (void *)image + (0x100015e8c - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataGetMutableBytePtr  %x \n", (uint64_t)addr__CFDataGetMutableBytePtr);
    MSInstrumentFunction(addr__CFDataGetMutableBytePtr, (void *)&_CFDataGetMutableBytePtr_instrument);

    // Calculate and hook into _CFDataGetTypeID
    void *addr__CFDataGetTypeID = (void *)image + (0x100015e98 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataGetTypeID  %x \n", (uint64_t)addr__CFDataGetTypeID);
    MSInstrumentFunction(addr__CFDataGetTypeID, (void *)&_CFDataGetTypeID_instrument);

    // Calculate and hook into _CFDataSetLength
    void *addr__CFDataSetLength = (void *)image + (0x100015ea4 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDataSetLength  %x \n", (uint64_t)addr__CFDataSetLength);
    MSInstrumentFunction(addr__CFDataSetLength, (void *)&_CFDataSetLength_instrument);

    // Calculate and hook into _CFDateCompare
    void *addr__CFDateCompare = (void *)image + (0x100015eb0 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDateCompare  %x \n", (uint64_t)addr__CFDateCompare);
    MSInstrumentFunction(addr__CFDateCompare, (void *)&_CFDateCompare_instrument);

    // Calculate and hook into _CFDateCreate
    void *addr__CFDateCreate = (void *)image + (0x100015ebc - BASEADDR);
    fprintf(f, "Pegou o addr _CFDateCreate  %x \n", (uint64_t)addr__CFDateCreate);
    MSInstrumentFunction(addr__CFDateCreate, (void *)&_CFDateCreate_instrument);

    // Calculate and hook into _CFDateGetAbsoluteTime
    void *addr__CFDateGetAbsoluteTime = (void *)image + (0x100015ec8 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDateGetAbsoluteTime  %x \n", (uint64_t)addr__CFDateGetAbsoluteTime);
    MSInstrumentFunction(addr__CFDateGetAbsoluteTime, (void *)&_CFDateGetAbsoluteTime_instrument);

    // Calculate and hook into _CFDictionaryAddValue
    void *addr__CFDictionaryAddValue = (void *)image + (0x100015ed4 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryAddValue  %x \n", (uint64_t)addr__CFDictionaryAddValue);
    MSInstrumentFunction(addr__CFDictionaryAddValue, (void *)&_CFDictionaryAddValue_instrument);

    // Calculate and hook into _CFDictionaryContainsKey
    void *addr__CFDictionaryContainsKey = (void *)image + (0x100015ee0 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryContainsKey  %x \n", (uint64_t)addr__CFDictionaryContainsKey);
    MSInstrumentFunction(addr__CFDictionaryContainsKey, (void *)&_CFDictionaryContainsKey_instrument);

    // Calculate and hook into _CFDictionaryCreateMutable
    void *addr__CFDictionaryCreateMutable = (void *)image + (0x100015eec - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryCreateMutable  %x \n", (uint64_t)addr__CFDictionaryCreateMutable);
    MSInstrumentFunction(addr__CFDictionaryCreateMutable, (void *)&_CFDictionaryCreateMutable_instrument);

    // Calculate and hook into _CFDictionaryCreateMutableCopy
    void *addr__CFDictionaryCreateMutableCopy = (void *)image + (0x100015ef8 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryCreateMutableCopy  %x \n", (uint64_t)addr__CFDictionaryCreateMutableCopy);
    MSInstrumentFunction(addr__CFDictionaryCreateMutableCopy, (void *)&_CFDictionaryCreateMutableCopy_instrument);

    // Calculate and hook into _CFDictionaryGetCount
    void *addr__CFDictionaryGetCount = (void *)image + (0x100015f04 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryGetCount  %x \n", (uint64_t)addr__CFDictionaryGetCount);
    MSInstrumentFunction(addr__CFDictionaryGetCount, (void *)&_CFDictionaryGetCount_instrument);

    // Calculate and hook into _CFDictionaryGetTypeID
    void *addr__CFDictionaryGetTypeID = (void *)image + (0x100015f10 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryGetTypeID  %x \n", (uint64_t)addr__CFDictionaryGetTypeID);
    MSInstrumentFunction(addr__CFDictionaryGetTypeID, (void *)&_CFDictionaryGetTypeID_instrument);

    // Calculate and hook into _CFDictionaryGetValue
    void *addr__CFDictionaryGetValue = (void *)image + (0x100015f1c - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryGetValue  %x \n", (uint64_t)addr__CFDictionaryGetValue);
    MSInstrumentFunction(addr__CFDictionaryGetValue, (void *)&_CFDictionaryGetValue_instrument);

    // Calculate and hook into _CFDictionaryGetValueIfPresent
    void *addr__CFDictionaryGetValueIfPresent = (void *)image + (0x100015f28 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryGetValueIfPresent  %x \n", (uint64_t)addr__CFDictionaryGetValueIfPresent);
    MSInstrumentFunction(addr__CFDictionaryGetValueIfPresent, (void *)&_CFDictionaryGetValueIfPresent_instrument);

    // Calculate and hook into _CFDictionaryRemoveValue
    void *addr__CFDictionaryRemoveValue = (void *)image + (0x100015f34 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryRemoveValue  %x \n", (uint64_t)addr__CFDictionaryRemoveValue);
    MSInstrumentFunction(addr__CFDictionaryRemoveValue, (void *)&_CFDictionaryRemoveValue_instrument);

    // Calculate and hook into _CFDictionaryReplaceValue
    void *addr__CFDictionaryReplaceValue = (void *)image + (0x100015f40 - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionaryReplaceValue  %x \n", (uint64_t)addr__CFDictionaryReplaceValue);
    MSInstrumentFunction(addr__CFDictionaryReplaceValue, (void *)&_CFDictionaryReplaceValue_instrument);

    // Calculate and hook into _CFDictionarySetValue
    void *addr__CFDictionarySetValue = (void *)image + (0x100015f4c - BASEADDR);
    fprintf(f, "Pegou o addr _CFDictionarySetValue  %x \n", (uint64_t)addr__CFDictionarySetValue);
    MSInstrumentFunction(addr__CFDictionarySetValue, (void *)&_CFDictionarySetValue_instrument);

    // Calculate and hook into _CFEqual
    void *addr__CFEqual = (void *)image + (0x100015f58 - BASEADDR);
    fprintf(f, "Pegou o addr _CFEqual  %x \n", (uint64_t)addr__CFEqual);
    MSInstrumentFunction(addr__CFEqual, (void *)&_CFEqual_instrument);

    // Calculate and hook into _CFGetTypeID
    void *addr__CFGetTypeID = (void *)image + (0x100015f64 - BASEADDR);
    fprintf(f, "Pegou o addr _CFGetTypeID  %x \n", (uint64_t)addr__CFGetTypeID);
    MSInstrumentFunction(addr__CFGetTypeID, (void *)&_CFGetTypeID_instrument);

    // Calculate and hook into _CFNumberCreate
    void *addr__CFNumberCreate = (void *)image + (0x100015f70 - BASEADDR);
    fprintf(f, "Pegou o addr _CFNumberCreate  %x \n", (uint64_t)addr__CFNumberCreate);
    MSInstrumentFunction(addr__CFNumberCreate, (void *)&_CFNumberCreate_instrument);

    // Calculate and hook into _CFNumberGetTypeID
    void *addr__CFNumberGetTypeID = (void *)image + (0x100015f7c - BASEADDR);
    fprintf(f, "Pegou o addr _CFNumberGetTypeID  %x \n", (uint64_t)addr__CFNumberGetTypeID);
    MSInstrumentFunction(addr__CFNumberGetTypeID, (void *)&_CFNumberGetTypeID_instrument);

    // Calculate and hook into _CFNumberGetValue
    void *addr__CFNumberGetValue = (void *)image + (0x100015f88 - BASEADDR);
    fprintf(f, "Pegou o addr _CFNumberGetValue  %x \n", (uint64_t)addr__CFNumberGetValue);
    MSInstrumentFunction(addr__CFNumberGetValue, (void *)&_CFNumberGetValue_instrument);

    // Calculate and hook into _CFPropertyListCreateWithStream
    void *addr__CFPropertyListCreateWithStream = (void *)image + (0x100015f94 - BASEADDR);
    fprintf(f, "Pegou o addr _CFPropertyListCreateWithStream  %x \n", (uint64_t)addr__CFPropertyListCreateWithStream);
    MSInstrumentFunction(addr__CFPropertyListCreateWithStream, (void *)&_CFPropertyListCreateWithStream_instrument);

    // Calculate and hook into _CFPropertyListWrite
    void *addr__CFPropertyListWrite = (void *)image + (0x100015fa0 - BASEADDR);
    fprintf(f, "Pegou o addr _CFPropertyListWrite  %x \n", (uint64_t)addr__CFPropertyListWrite);
    MSInstrumentFunction(addr__CFPropertyListWrite, (void *)&_CFPropertyListWrite_instrument);

    // Calculate and hook into _CFReadStreamClose
    void *addr__CFReadStreamClose = (void *)image + (0x100015fac - BASEADDR);
    fprintf(f, "Pegou o addr _CFReadStreamClose  %x \n", (uint64_t)addr__CFReadStreamClose);
    MSInstrumentFunction(addr__CFReadStreamClose, (void *)&_CFReadStreamClose_instrument);

    // Calculate and hook into _CFReadStreamCreateWithBytesNoCopy
    void *addr__CFReadStreamCreateWithBytesNoCopy = (void *)image + (0x100015fb8 - BASEADDR);
    fprintf(f, "Pegou o addr _CFReadStreamCreateWithBytesNoCopy  %x \n", (uint64_t)addr__CFReadStreamCreateWithBytesNoCopy);
    MSInstrumentFunction(addr__CFReadStreamCreateWithBytesNoCopy, (void *)&_CFReadStreamCreateWithBytesNoCopy_instrument);

    // Calculate and hook into _CFReadStreamOpen
    void *addr__CFReadStreamOpen = (void *)image + (0x100015fc4 - BASEADDR);
    fprintf(f, "Pegou o addr _CFReadStreamOpen  %x \n", (uint64_t)addr__CFReadStreamOpen);
    MSInstrumentFunction(addr__CFReadStreamOpen, (void *)&_CFReadStreamOpen_instrument);

    // Calculate and hook into _CFRelease
    void *addr__CFRelease = (void *)image + (0x100015fd0 - BASEADDR);
    fprintf(f, "Pegou o addr _CFRelease  %x \n", (uint64_t)addr__CFRelease);
    MSInstrumentFunction(addr__CFRelease, (void *)&_CFRelease_instrument);

    // Calculate and hook into _CFRetain
    void *addr__CFRetain = (void *)image + (0x100015fdc - BASEADDR);
    fprintf(f, "Pegou o addr _CFRetain  %x \n", (uint64_t)addr__CFRetain);
    MSInstrumentFunction(addr__CFRetain, (void *)&_CFRetain_instrument);

    // Calculate and hook into _CFRunLoopRun
    void *addr__CFRunLoopRun = (void *)image + (0x100015fe8 - BASEADDR);
    fprintf(f, "Pegou o addr _CFRunLoopRun  %x \n", (uint64_t)addr__CFRunLoopRun);
    MSInstrumentFunction(addr__CFRunLoopRun, (void *)&_CFRunLoopRun_instrument);

    // Calculate and hook into _CFShow
    void *addr__CFShow = (void *)image + (0x100015ff4 - BASEADDR);
    fprintf(f, "Pegou o addr _CFShow  %x \n", (uint64_t)addr__CFShow);
    MSInstrumentFunction(addr__CFShow, (void *)&_CFShow_instrument);

    // Calculate and hook into _CFStringCompare
    void *addr__CFStringCompare = (void *)image + (0x100016000 - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringCompare  %x \n", (uint64_t)addr__CFStringCompare);
    MSInstrumentFunction(addr__CFStringCompare, (void *)&_CFStringCompare_instrument);

    // Calculate and hook into _CFStringCreateWithCString
    void *addr__CFStringCreateWithCString = (void *)image + (0x10001600c - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringCreateWithCString  %x \n", (uint64_t)addr__CFStringCreateWithCString);
    MSInstrumentFunction(addr__CFStringCreateWithCString, (void *)&_CFStringCreateWithCString_instrument);

    // Calculate and hook into _CFStringCreateWithFormat
    void *addr__CFStringCreateWithFormat = (void *)image + (0x100016018 - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringCreateWithFormat  %x \n", (uint64_t)addr__CFStringCreateWithFormat);
    MSInstrumentFunction(addr__CFStringCreateWithFormat, (void *)&_CFStringCreateWithFormat_instrument);

    // Calculate and hook into _CFStringCreateWithFormatAndArguments
    void *addr__CFStringCreateWithFormatAndArguments = (void *)image + (0x100016024 - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringCreateWithFormatAndArguments  %x \n", (uint64_t)addr__CFStringCreateWithFormatAndArguments);
    MSInstrumentFunction(addr__CFStringCreateWithFormatAndArguments, (void *)&_CFStringCreateWithFormatAndArguments_instrument);

    // Calculate and hook into _CFStringGetCString
    void *addr__CFStringGetCString = (void *)image + (0x100016030 - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringGetCString  %x \n", (uint64_t)addr__CFStringGetCString);
    MSInstrumentFunction(addr__CFStringGetCString, (void *)&_CFStringGetCString_instrument);

    // Calculate and hook into _CFStringGetCStringPtr
    void *addr__CFStringGetCStringPtr = (void *)image + (0x10001603c - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringGetCStringPtr  %x \n", (uint64_t)addr__CFStringGetCStringPtr);
    MSInstrumentFunction(addr__CFStringGetCStringPtr, (void *)&_CFStringGetCStringPtr_instrument);

    // Calculate and hook into _CFStringGetTypeID
    void *addr__CFStringGetTypeID = (void *)image + (0x100016048 - BASEADDR);
    fprintf(f, "Pegou o addr _CFStringGetTypeID  %x \n", (uint64_t)addr__CFStringGetTypeID);
    MSInstrumentFunction(addr__CFStringGetTypeID, (void *)&_CFStringGetTypeID_instrument);

    // Calculate and hook into _CFWriteStreamClose
    void *addr__CFWriteStreamClose = (void *)image + (0x100016054 - BASEADDR);
    fprintf(f, "Pegou o addr _CFWriteStreamClose  %x \n", (uint64_t)addr__CFWriteStreamClose);
    MSInstrumentFunction(addr__CFWriteStreamClose, (void *)&_CFWriteStreamClose_instrument);

    // Calculate and hook into _CFWriteStreamCopyProperty
    void *addr__CFWriteStreamCopyProperty = (void *)image + (0x100016060 - BASEADDR);
    fprintf(f, "Pegou o addr _CFWriteStreamCopyProperty  %x \n", (uint64_t)addr__CFWriteStreamCopyProperty);
    MSInstrumentFunction(addr__CFWriteStreamCopyProperty, (void *)&_CFWriteStreamCopyProperty_instrument);

    // Calculate and hook into _CFWriteStreamCreateWithAllocatedBuffers
    void *addr__CFWriteStreamCreateWithAllocatedBuffers = (void *)image + (0x10001606c - BASEADDR);
    fprintf(f, "Pegou o addr _CFWriteStreamCreateWithAllocatedBuffers  %x \n", (uint64_t)addr__CFWriteStreamCreateWithAllocatedBuffers);
    MSInstrumentFunction(addr__CFWriteStreamCreateWithAllocatedBuffers, (void *)&_CFWriteStreamCreateWithAllocatedBuffers_instrument);

    // Calculate and hook into _CFWriteStreamOpen
    void *addr__CFWriteStreamOpen = (void *)image + (0x100016078 - BASEADDR);
    fprintf(f, "Pegou o addr _CFWriteStreamOpen  %x \n", (uint64_t)addr__CFWriteStreamOpen);
    MSInstrumentFunction(addr__CFWriteStreamOpen, (void *)&_CFWriteStreamOpen_instrument);

    // Calculate and hook into _IOConnectCallMethod
    void *addr__IOConnectCallMethod = (void *)image + (0x100016084 - BASEADDR);
    fprintf(f, "Pegou o addr _IOConnectCallMethod  %x \n", (uint64_t)addr__IOConnectCallMethod);
    MSInstrumentFunction(addr__IOConnectCallMethod, (void *)&_IOConnectCallMethod_instrument);

    // Calculate and hook into _IOConnectSetNotificationPort
    void *addr__IOConnectSetNotificationPort = (void *)image + (0x100016090 - BASEADDR);
    fprintf(f, "Pegou o addr _IOConnectSetNotificationPort  %x \n", (uint64_t)addr__IOConnectSetNotificationPort);
    MSInstrumentFunction(addr__IOConnectSetNotificationPort, (void *)&_IOConnectSetNotificationPort_instrument);

    // Calculate and hook into _IOMasterPort
    void *addr__IOMasterPort = (void *)image + (0x10001609c - BASEADDR);
    fprintf(f, "Pegou o addr _IOMasterPort  %x \n", (uint64_t)addr__IOMasterPort);
    MSInstrumentFunction(addr__IOMasterPort, (void *)&_IOMasterPort_instrument);

    // Calculate and hook into _IOObjectRelease
    void *addr__IOObjectRelease = (void *)image + (0x1000160a8 - BASEADDR);
    fprintf(f, "Pegou o addr _IOObjectRelease  %x \n", (uint64_t)addr__IOObjectRelease);
    MSInstrumentFunction(addr__IOObjectRelease, (void *)&_IOObjectRelease_instrument);

    // Calculate and hook into _IORegistryEntryCreateCFProperty
    void *addr__IORegistryEntryCreateCFProperty = (void *)image + (0x1000160b4 - BASEADDR);
    fprintf(f, "Pegou o addr _IORegistryEntryCreateCFProperty  %x \n", (uint64_t)addr__IORegistryEntryCreateCFProperty);
    MSInstrumentFunction(addr__IORegistryEntryCreateCFProperty, (void *)&_IORegistryEntryCreateCFProperty_instrument);

    // Calculate and hook into _IORegistryEntryFromPath
    void *addr__IORegistryEntryFromPath = (void *)image + (0x1000160c0 - BASEADDR);
    fprintf(f, "Pegou o addr _IORegistryEntryFromPath  %x \n", (uint64_t)addr__IORegistryEntryFromPath);
    MSInstrumentFunction(addr__IORegistryEntryFromPath, (void *)&_IORegistryEntryFromPath_instrument);

    // Calculate and hook into _IORegistryEntrySetCFProperty
    void *addr__IORegistryEntrySetCFProperty = (void *)image + (0x1000160cc - BASEADDR);
    fprintf(f, "Pegou o addr _IORegistryEntrySetCFProperty  %x \n", (uint64_t)addr__IORegistryEntrySetCFProperty);
    MSInstrumentFunction(addr__IORegistryEntrySetCFProperty, (void *)&_IORegistryEntrySetCFProperty_instrument);

    // Calculate and hook into _IOServiceClose
    void *addr__IOServiceClose = (void *)image + (0x1000160d8 - BASEADDR);
    fprintf(f, "Pegou o addr _IOServiceClose  %x \n", (uint64_t)addr__IOServiceClose);
    MSInstrumentFunction(addr__IOServiceClose, (void *)&_IOServiceClose_instrument);

    // Calculate and hook into _IOServiceGetMatchingService
    void *addr__IOServiceGetMatchingService = (void *)image + (0x1000160e4 - BASEADDR);
    fprintf(f, "Pegou o addr _IOServiceGetMatchingService  %x \n", (uint64_t)addr__IOServiceGetMatchingService);
    MSInstrumentFunction(addr__IOServiceGetMatchingService, (void *)&_IOServiceGetMatchingService_instrument);

    // Calculate and hook into _IOServiceMatching
    void *addr__IOServiceMatching = (void *)image + (0x1000160f0 - BASEADDR);
    fprintf(f, "Pegou o addr _IOServiceMatching  %x \n", (uint64_t)addr__IOServiceMatching);
    MSInstrumentFunction(addr__IOServiceMatching, (void *)&_IOServiceMatching_instrument);

    // Calculate and hook into _IOServiceOpen
    void *addr__IOServiceOpen = (void *)image + (0x1000160fc - BASEADDR);
    fprintf(f, "Pegou o addr _IOServiceOpen  %x \n", (uint64_t)addr__IOServiceOpen);
    MSInstrumentFunction(addr__IOServiceOpen, (void *)&_IOServiceOpen_instrument);

    // Calculate and hook into _MOLogEnableDiskLogging
    void *addr__MOLogEnableDiskLogging = (void *)image + (0x100016108 - BASEADDR);
    fprintf(f, "Pegou o addr _MOLogEnableDiskLogging  %x \n", (uint64_t)addr__MOLogEnableDiskLogging);
    MSInstrumentFunction(addr__MOLogEnableDiskLogging, (void *)&_MOLogEnableDiskLogging_instrument);

    // Calculate and hook into _MOLogOpen
    void *addr__MOLogOpen = (void *)image + (0x100016114 - BASEADDR);
    fprintf(f, "Pegou o addr _MOLogOpen  %x \n", (uint64_t)addr__MOLogOpen);
    MSInstrumentFunction(addr__MOLogOpen, (void *)&_MOLogOpen_instrument);

    // Calculate and hook into _MOLogWriteV
    void *addr__MOLogWriteV = (void *)image + (0x100016120 - BASEADDR);
    fprintf(f, "Pegou o addr _MOLogWriteV  %x \n", (uint64_t)addr__MOLogWriteV);
    MSInstrumentFunction(addr__MOLogWriteV, (void *)&_MOLogWriteV_instrument);

    // Calculate and hook into _SecRandomCopyBytes
    void *addr__SecRandomCopyBytes = (void *)image + (0x10001612c - BASEADDR);
    fprintf(f, "Pegou o addr _SecRandomCopyBytes  %x \n", (uint64_t)addr__SecRandomCopyBytes);
    MSInstrumentFunction(addr__SecRandomCopyBytes, (void *)&_SecRandomCopyBytes_instrument);

    // Calculate and hook into __Block_object_assign
    void *addr___Block_object_assign = (void *)image + (0x100016138 - BASEADDR);
    fprintf(f, "Pegou o addr __Block_object_assign  %x \n", (uint64_t)addr___Block_object_assign);
    MSInstrumentFunction(addr___Block_object_assign, (void *)&__Block_object_assign_instrument);

    // Calculate and hook into __Block_object_dispose
    void *addr___Block_object_dispose = (void *)image + (0x100016144 - BASEADDR);
    fprintf(f, "Pegou o addr __Block_object_dispose  %x \n", (uint64_t)addr___Block_object_dispose);
    MSInstrumentFunction(addr___Block_object_dispose, (void *)&__Block_object_dispose_instrument);

    // Calculate and hook into __Unwind_Resume
    void *addr___Unwind_Resume = (void *)image + (0x100016150 - BASEADDR);
    fprintf(f, "Pegou o addr __Unwind_Resume  %x \n", (uint64_t)addr___Unwind_Resume);
    MSInstrumentFunction(addr___Unwind_Resume, (void *)&__Unwind_Resume_instrument);

    // Calculate and hook into ___error
    void *addr____error = (void *)image + (0x10001615c - BASEADDR);
    fprintf(f, "Pegou o addr ___error  %x \n", (uint64_t)addr____error);
    MSInstrumentFunction(addr____error, (void *)&___error_instrument);

    // Calculate and hook into ___stack_chk_fail
    void *addr____stack_chk_fail = (void *)image + (0x100016168 - BASEADDR);
    fprintf(f, "Pegou o addr ___stack_chk_fail  %x \n", (uint64_t)addr____stack_chk_fail);
    MSInstrumentFunction(addr____stack_chk_fail, (void *)&___stack_chk_fail_instrument);

    // Calculate and hook into ___strlcat_chk
    void *addr____strlcat_chk = (void *)image + (0x100016174 - BASEADDR);
    fprintf(f, "Pegou o addr ___strlcat_chk  %x \n", (uint64_t)addr____strlcat_chk);
    MSInstrumentFunction(addr____strlcat_chk, (void *)&___strlcat_chk_instrument);

    // Calculate and hook into __os_log_impl
    void *addr___os_log_impl = (void *)image + (0x100016180 - BASEADDR);
    fprintf(f, "Pegou o addr __os_log_impl  %x \n", (uint64_t)addr___os_log_impl);
    MSInstrumentFunction(addr___os_log_impl, (void *)&__os_log_impl_instrument);

    // Calculate and hook into _access
    void *addr__access = (void *)image + (0x10001618c - BASEADDR);
    fprintf(f, "Pegou o addr _access  %x \n", (uint64_t)addr__access);
    MSInstrumentFunction(addr__access, (void *)&_access_instrument);

    // Calculate and hook into _analytics_send_event_lazy
    void *addr__analytics_send_event_lazy = (void *)image + (0x100016198 - BASEADDR);
    fprintf(f, "Pegou o addr _analytics_send_event_lazy  %x \n", (uint64_t)addr__analytics_send_event_lazy);
    MSInstrumentFunction(addr__analytics_send_event_lazy, (void *)&_analytics_send_event_lazy_instrument);

    // Calculate and hook into _arc4random
    void *addr__arc4random = (void *)image + (0x1000161a4 - BASEADDR);
    fprintf(f, "Pegou o addr _arc4random  %x \n", (uint64_t)addr__arc4random);
    MSInstrumentFunction(addr__arc4random, (void *)&_arc4random_instrument);

    // Calculate and hook into _asctime
    void *addr__asctime = (void *)image + (0x1000161b0 - BASEADDR);
    fprintf(f, "Pegou o addr _asctime  %x \n", (uint64_t)addr__asctime);
    MSInstrumentFunction(addr__asctime, (void *)&_asctime_instrument);

    // Calculate and hook into _bootstrap_check_in
    void *addr__bootstrap_check_in = (void *)image + (0x1000161bc - BASEADDR);
    fprintf(f, "Pegou o addr _bootstrap_check_in  %x \n", (uint64_t)addr__bootstrap_check_in);
    MSInstrumentFunction(addr__bootstrap_check_in, (void *)&_bootstrap_check_in_instrument);

    // Calculate and hook into _bzero
    void *addr__bzero = (void *)image + (0x1000161c8 - BASEADDR);
    fprintf(f, "Pegou o addr _bzero  %x \n", (uint64_t)addr__bzero);
    MSInstrumentFunction(addr__bzero, (void *)&_bzero_instrument);

    // Calculate and hook into _calloc
    void *addr__calloc = (void *)image + (0x1000161d4 - BASEADDR);
    fprintf(f, "Pegou o addr _calloc  %x \n", (uint64_t)addr__calloc);
    MSInstrumentFunction(addr__calloc, (void *)&_calloc_instrument);

    // Calculate and hook into _ccder_decode_constructed_tl
    void *addr__ccder_decode_constructed_tl = (void *)image + (0x1000161e0 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_decode_constructed_tl  %x \n", (uint64_t)addr__ccder_decode_constructed_tl);
    MSInstrumentFunction(addr__ccder_decode_constructed_tl, (void *)&_ccder_decode_constructed_tl_instrument);

    // Calculate and hook into _ccder_decode_len
    void *addr__ccder_decode_len = (void *)image + (0x1000161ec - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_decode_len  %x \n", (uint64_t)addr__ccder_decode_len);
    MSInstrumentFunction(addr__ccder_decode_len, (void *)&_ccder_decode_len_instrument);

    // Calculate and hook into _ccder_decode_tag
    void *addr__ccder_decode_tag = (void *)image + (0x1000161f8 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_decode_tag  %x \n", (uint64_t)addr__ccder_decode_tag);
    MSInstrumentFunction(addr__ccder_decode_tag, (void *)&_ccder_decode_tag_instrument);

    // Calculate and hook into _ccder_decode_tl
    void *addr__ccder_decode_tl = (void *)image + (0x100016204 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_decode_tl  %x \n", (uint64_t)addr__ccder_decode_tl);
    MSInstrumentFunction(addr__ccder_decode_tl, (void *)&_ccder_decode_tl_instrument);

    // Calculate and hook into _ccder_encode_body
    void *addr__ccder_encode_body = (void *)image + (0x100016210 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_encode_body  %x \n", (uint64_t)addr__ccder_encode_body);
    MSInstrumentFunction(addr__ccder_encode_body, (void *)&_ccder_encode_body_instrument);

    // Calculate and hook into _ccder_encode_constructed_tl
    void *addr__ccder_encode_constructed_tl = (void *)image + (0x10001621c - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_encode_constructed_tl  %x \n", (uint64_t)addr__ccder_encode_constructed_tl);
    MSInstrumentFunction(addr__ccder_encode_constructed_tl, (void *)&_ccder_encode_constructed_tl_instrument);

    // Calculate and hook into _ccder_encode_tl
    void *addr__ccder_encode_tl = (void *)image + (0x100016228 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_encode_tl  %x \n", (uint64_t)addr__ccder_encode_tl);
    MSInstrumentFunction(addr__ccder_encode_tl, (void *)&_ccder_encode_tl_instrument);

    // Calculate and hook into _ccder_sizeof
    void *addr__ccder_sizeof = (void *)image + (0x100016234 - BASEADDR);
    fprintf(f, "Pegou o addr _ccder_sizeof  %x \n", (uint64_t)addr__ccder_sizeof);
    MSInstrumentFunction(addr__ccder_sizeof, (void *)&_ccder_sizeof_instrument);

    // Calculate and hook into _chmod
    void *addr__chmod = (void *)image + (0x100016240 - BASEADDR);
    fprintf(f, "Pegou o addr _chmod  %x \n", (uint64_t)addr__chmod);
    MSInstrumentFunction(addr__chmod, (void *)&_chmod_instrument);

    // Calculate and hook into _chown
    void *addr__chown = (void *)image + (0x10001624c - BASEADDR);
    fprintf(f, "Pegou o addr _chown  %x \n", (uint64_t)addr__chown);
    MSInstrumentFunction(addr__chown, (void *)&_chown_instrument);

    // Calculate and hook into _close
    void *addr__close = (void *)image + (0x100016258 - BASEADDR);
    fprintf(f, "Pegou o addr _close  %x \n", (uint64_t)addr__close);
    MSInstrumentFunction(addr__close, (void *)&_close_instrument);

    // Calculate and hook into _closedir
    void *addr__closedir = (void *)image + (0x100016264 - BASEADDR);
    fprintf(f, "Pegou o addr _closedir  %x \n", (uint64_t)addr__closedir);
    MSInstrumentFunction(addr__closedir, (void *)&_closedir_instrument);

    // Calculate and hook into _dirfd
    void *addr__dirfd = (void *)image + (0x100016270 - BASEADDR);
    fprintf(f, "Pegou o addr _dirfd  %x \n", (uint64_t)addr__dirfd);
    MSInstrumentFunction(addr__dirfd, (void *)&_dirfd_instrument);

    // Calculate and hook into _dispatch_async
    void *addr__dispatch_async = (void *)image + (0x10001627c - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_async  %x \n", (uint64_t)addr__dispatch_async);
    MSInstrumentFunction(addr__dispatch_async, (void *)&_dispatch_async_instrument);

    // Calculate and hook into _dispatch_get_global_queue
    void *addr__dispatch_get_global_queue = (void *)image + (0x100016288 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_get_global_queue  %x \n", (uint64_t)addr__dispatch_get_global_queue);
    MSInstrumentFunction(addr__dispatch_get_global_queue, (void *)&_dispatch_get_global_queue_instrument);

    // Calculate and hook into _dispatch_once
    void *addr__dispatch_once = (void *)image + (0x100016294 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_once  %x \n", (uint64_t)addr__dispatch_once);
    MSInstrumentFunction(addr__dispatch_once, (void *)&_dispatch_once_instrument);

    // Calculate and hook into _dispatch_queue_attr_make_with_qos_class
    void *addr__dispatch_queue_attr_make_with_qos_class = (void *)image + (0x1000162a0 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_queue_attr_make_with_qos_class  %x \n", (uint64_t)addr__dispatch_queue_attr_make_with_qos_class);
    MSInstrumentFunction(addr__dispatch_queue_attr_make_with_qos_class, (void *)&_dispatch_queue_attr_make_with_qos_class_instrument);

    // Calculate and hook into _dispatch_queue_create
    void *addr__dispatch_queue_create = (void *)image + (0x1000162ac - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_queue_create  %x \n", (uint64_t)addr__dispatch_queue_create);
    MSInstrumentFunction(addr__dispatch_queue_create, (void *)&_dispatch_queue_create_instrument);

    // Calculate and hook into _dispatch_release
    void *addr__dispatch_release = (void *)image + (0x1000162b8 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_release  %x \n", (uint64_t)addr__dispatch_release);
    MSInstrumentFunction(addr__dispatch_release, (void *)&_dispatch_release_instrument);

    // Calculate and hook into _dispatch_resume
    void *addr__dispatch_resume = (void *)image + (0x1000162c4 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_resume  %x \n", (uint64_t)addr__dispatch_resume);
    MSInstrumentFunction(addr__dispatch_resume, (void *)&_dispatch_resume_instrument);

    // Calculate and hook into _dispatch_source_create
    void *addr__dispatch_source_create = (void *)image + (0x1000162d0 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_source_create  %x \n", (uint64_t)addr__dispatch_source_create);
    MSInstrumentFunction(addr__dispatch_source_create, (void *)&_dispatch_source_create_instrument);

    // Calculate and hook into _dispatch_source_set_event_handler
    void *addr__dispatch_source_set_event_handler = (void *)image + (0x1000162dc - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_source_set_event_handler  %x \n", (uint64_t)addr__dispatch_source_set_event_handler);
    MSInstrumentFunction(addr__dispatch_source_set_event_handler, (void *)&_dispatch_source_set_event_handler_instrument);

    // Calculate and hook into _dispatch_sync
    void *addr__dispatch_sync = (void *)image + (0x1000162e8 - BASEADDR);
    fprintf(f, "Pegou o addr _dispatch_sync  %x \n", (uint64_t)addr__dispatch_sync);
    MSInstrumentFunction(addr__dispatch_sync, (void *)&_dispatch_sync_instrument);

    // Calculate and hook into _dlerror
    void *addr__dlerror = (void *)image + (0x1000162f4 - BASEADDR);
    fprintf(f, "Pegou o addr _dlerror  %x \n", (uint64_t)addr__dlerror);
    MSInstrumentFunction(addr__dlerror, (void *)&_dlerror_instrument);

    // Calculate and hook into _dlopen
    void *addr__dlopen = (void *)image + (0x100016300 - BASEADDR);
    fprintf(f, "Pegou o addr _dlopen  %x \n", (uint64_t)addr__dlopen);
    MSInstrumentFunction(addr__dlopen, (void *)&_dlopen_instrument);

    // Calculate and hook into _dlsym
    void *addr__dlsym = (void *)image + (0x10001630c - BASEADDR);
    fprintf(f, "Pegou o addr _dlsym  %x \n", (uint64_t)addr__dlsym);
    MSInstrumentFunction(addr__dlsym, (void *)&_dlsym_instrument);

    // Calculate and hook into _exit
    void *addr__exit = (void *)image + (0x100016318 - BASEADDR);
    fprintf(f, "Pegou o addr _exit  %x \n", (uint64_t)addr__exit);
    MSInstrumentFunction(addr__exit, (void *)&_exit_instrument);

    // Calculate and hook into _fclose
    void *addr__fclose = (void *)image + (0x100016324 - BASEADDR);
    fprintf(f, "Pegou o addr _fclose  %x \n", (uint64_t)addr__fclose);
    MSInstrumentFunction(addr__fclose, (void *)&_fclose_instrument);

    // Calculate and hook into _fcntl
    void *addr__fcntl = (void *)image + (0x100016330 - BASEADDR);
    fprintf(f, "Pegou o addr _fcntl  %x \n", (uint64_t)addr__fcntl);
    MSInstrumentFunction(addr__fcntl, (void *)&_fcntl_instrument);

    // Calculate and hook into _fopen
    void *addr__fopen = (void *)image + (0x10001633c - BASEADDR);
    fprintf(f, "Pegou o addr _fopen  %x \n", (uint64_t)addr__fopen);
    MSInstrumentFunction(addr__fopen, (void *)&_fopen_instrument);

    // Calculate and hook into _fprintf
    void *addr__fprintf = (void *)image + (0x100016348 - BASEADDR);
    fprintf(f, "Pegou o addr _fprintf  %x \n", (uint64_t)addr__fprintf);
    MSInstrumentFunction(addr__fprintf, (void *)&_fprintf_instrument);

    // Calculate and hook into _free
    void *addr__free = (void *)image + (0x100016354 - BASEADDR);
    fprintf(f, "Pegou o addr _free  %x \n", (uint64_t)addr__free);
    MSInstrumentFunction(addr__free, (void *)&_free_instrument);

    // Calculate and hook into _fsctl
    void *addr__fsctl = (void *)image + (0x100016360 - BASEADDR);
    fprintf(f, "Pegou o addr _fsctl  %x \n", (uint64_t)addr__fsctl);
    MSInstrumentFunction(addr__fsctl, (void *)&_fsctl_instrument);

    // Calculate and hook into _fstat
    void *addr__fstat = (void *)image + (0x10001636c - BASEADDR);
    fprintf(f, "Pegou o addr _fstat  %x \n", (uint64_t)addr__fstat);
    MSInstrumentFunction(addr__fstat, (void *)&_fstat_instrument);

    // Calculate and hook into _fts_close
    void *addr__fts_close = (void *)image + (0x100016378 - BASEADDR);
    fprintf(f, "Pegou o addr _fts_close  %x \n", (uint64_t)addr__fts_close);
    MSInstrumentFunction(addr__fts_close, (void *)&_fts_close_instrument);

    // Calculate and hook into _fts_open
    void *addr__fts_open = (void *)image + (0x100016384 - BASEADDR);
    fprintf(f, "Pegou o addr _fts_open  %x \n", (uint64_t)addr__fts_open);
    MSInstrumentFunction(addr__fts_open, (void *)&_fts_open_instrument);

    // Calculate and hook into _fts_read
    void *addr__fts_read = (void *)image + (0x100016390 - BASEADDR);
    fprintf(f, "Pegou o addr _fts_read  %x \n", (uint64_t)addr__fts_read);
    MSInstrumentFunction(addr__fts_read, (void *)&_fts_read_instrument);

    // Calculate and hook into _fts_set
    void *addr__fts_set = (void *)image + (0x10001639c - BASEADDR);
    fprintf(f, "Pegou o addr _fts_set  %x \n", (uint64_t)addr__fts_set);
    MSInstrumentFunction(addr__fts_set, (void *)&_fts_set_instrument);

    // Calculate and hook into _fwrite
    void *addr__fwrite = (void *)image + (0x1000163a8 - BASEADDR);
    fprintf(f, "Pegou o addr _fwrite  %x \n", (uint64_t)addr__fwrite);
    MSInstrumentFunction(addr__fwrite, (void *)&_fwrite_instrument);

    // Calculate and hook into _getattrlist
    void *addr__getattrlist = (void *)image + (0x1000163b4 - BASEADDR);
    fprintf(f, "Pegou o addr _getattrlist  %x \n", (uint64_t)addr__getattrlist);
    MSInstrumentFunction(addr__getattrlist, (void *)&_getattrlist_instrument);

    // Calculate and hook into _getenv
    void *addr__getenv = (void *)image + (0x1000163c0 - BASEADDR);
    fprintf(f, "Pegou o addr _getenv  %x \n", (uint64_t)addr__getenv);
    MSInstrumentFunction(addr__getenv, (void *)&_getenv_instrument);

    // Calculate and hook into _getgrnam_r
    void *addr__getgrnam_r = (void *)image + (0x1000163cc - BASEADDR);
    fprintf(f, "Pegou o addr _getgrnam_r  %x \n", (uint64_t)addr__getgrnam_r);
    MSInstrumentFunction(addr__getgrnam_r, (void *)&_getgrnam_r_instrument);

    // Calculate and hook into _getpwnam_r
    void *addr__getpwnam_r = (void *)image + (0x1000163d8 - BASEADDR);
    fprintf(f, "Pegou o addr _getpwnam_r  %x \n", (uint64_t)addr__getpwnam_r);
    MSInstrumentFunction(addr__getpwnam_r, (void *)&_getpwnam_r_instrument);

    // Calculate and hook into _host_get_multiuser_config_flags
    void *addr__host_get_multiuser_config_flags = (void *)image + (0x1000163e4 - BASEADDR);
    fprintf(f, "Pegou o addr _host_get_multiuser_config_flags  %x \n", (uint64_t)addr__host_get_multiuser_config_flags);
    MSInstrumentFunction(addr__host_get_multiuser_config_flags, (void *)&_host_get_multiuser_config_flags_instrument);

    // Calculate and hook into _localtime
    void *addr__localtime = (void *)image + (0x1000163f0 - BASEADDR);
    fprintf(f, "Pegou o addr _localtime  %x \n", (uint64_t)addr__localtime);
    MSInstrumentFunction(addr__localtime, (void *)&_localtime_instrument);

    // Calculate and hook into _mach_host_self
    void *addr__mach_host_self = (void *)image + (0x1000163fc - BASEADDR);
    fprintf(f, "Pegou o addr _mach_host_self  %x \n", (uint64_t)addr__mach_host_self);
    MSInstrumentFunction(addr__mach_host_self, (void *)&_mach_host_self_instrument);

    // Calculate and hook into _mach_msg
    void *addr__mach_msg = (void *)image + (0x100016408 - BASEADDR);
    fprintf(f, "Pegou o addr _mach_msg  %x \n", (uint64_t)addr__mach_msg);
    MSInstrumentFunction(addr__mach_msg, (void *)&_mach_msg_instrument);

    // Calculate and hook into _malloc
    void *addr__malloc = (void *)image + (0x100016414 - BASEADDR);
    fprintf(f, "Pegou o addr _malloc  %x \n", (uint64_t)addr__malloc);
    MSInstrumentFunction(addr__malloc, (void *)&_malloc_instrument);

    // Calculate and hook into _memcmp
    void *addr__memcmp = (void *)image + (0x100016420 - BASEADDR);
    fprintf(f, "Pegou o addr _memcmp  %x \n", (uint64_t)addr__memcmp);
    MSInstrumentFunction(addr__memcmp, (void *)&_memcmp_instrument);

    // Calculate and hook into _memcpy
    void *addr__memcpy = (void *)image + (0x10001642c - BASEADDR);
    fprintf(f, "Pegou o addr _memcpy  %x \n", (uint64_t)addr__memcpy);
    MSInstrumentFunction(addr__memcpy, (void *)&_memcpy_instrument);

    // Calculate and hook into _memset_s
    void *addr__memset_s = (void *)image + (0x100016438 - BASEADDR);
    fprintf(f, "Pegou o addr _memset_s  %x \n", (uint64_t)addr__memset_s);
    MSInstrumentFunction(addr__memset_s, (void *)&_memset_s_instrument);

    // Calculate and hook into _mkdir
    void *addr__mkdir = (void *)image + (0x100016444 - BASEADDR);
    fprintf(f, "Pegou o addr _mkdir  %x \n", (uint64_t)addr__mkdir);
    MSInstrumentFunction(addr__mkdir, (void *)&_mkdir_instrument);

    // Calculate and hook into _mkpath_np
    void *addr__mkpath_np = (void *)image + (0x100016450 - BASEADDR);
    fprintf(f, "Pegou o addr _mkpath_np  %x \n", (uint64_t)addr__mkpath_np);
    MSInstrumentFunction(addr__mkpath_np, (void *)&_mkpath_np_instrument);

    // Calculate and hook into _objc_alloc
    void *addr__objc_alloc = (void *)image + (0x10001645c - BASEADDR);
    fprintf(f, "Pegou o addr _objc_alloc  %x \n", (uint64_t)addr__objc_alloc);
    MSInstrumentFunction(addr__objc_alloc, (void *)&_objc_alloc_instrument);

    // Calculate and hook into _objc_autoreleaseReturnValue
    void *addr__objc_autoreleaseReturnValue = (void *)image + (0x100016468 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_autoreleaseReturnValue  %x \n", (uint64_t)addr__objc_autoreleaseReturnValue);
    MSInstrumentFunction(addr__objc_autoreleaseReturnValue, (void *)&_objc_autoreleaseReturnValue_instrument);

    // Calculate and hook into _objc_claimAutoreleasedReturnValue
    void *addr__objc_claimAutoreleasedReturnValue = (void *)image + (0x100016474 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_claimAutoreleasedReturnValue  %x \n", (uint64_t)addr__objc_claimAutoreleasedReturnValue);
    MSInstrumentFunction(addr__objc_claimAutoreleasedReturnValue, (void *)&_objc_claimAutoreleasedReturnValue_instrument);

    // Calculate and hook into _objc_getClass
    void *addr__objc_getClass = (void *)image + (0x100016480 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_getClass  %x \n", (uint64_t)addr__objc_getClass);
    MSInstrumentFunction(addr__objc_getClass, (void *)&_objc_getClass_instrument);

    // Calculate and hook into _objc_msgSendSuper2
    void *addr__objc_msgSendSuper2 = (void *)image + (0x10001648c - BASEADDR);
    fprintf(f, "Pegou o addr _objc_msgSendSuper2  %x \n", (uint64_t)addr__objc_msgSendSuper2);
    MSInstrumentFunction(addr__objc_msgSendSuper2, (void *)&_objc_msgSendSuper2_instrument);

    // Calculate and hook into _objc_opt_class
    void *addr__objc_opt_class = (void *)image + (0x100016498 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_opt_class  %x \n", (uint64_t)addr__objc_opt_class);
    MSInstrumentFunction(addr__objc_opt_class, (void *)&_objc_opt_class_instrument);

    // Calculate and hook into _objc_opt_isKindOfClass
    void *addr__objc_opt_isKindOfClass = (void *)image + (0x1000164a4 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_opt_isKindOfClass  %x \n", (uint64_t)addr__objc_opt_isKindOfClass);
    MSInstrumentFunction(addr__objc_opt_isKindOfClass, (void *)&_objc_opt_isKindOfClass_instrument);

    // Calculate and hook into _objc_opt_new
    void *addr__objc_opt_new = (void *)image + (0x1000164b0 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_opt_new  %x \n", (uint64_t)addr__objc_opt_new);
    MSInstrumentFunction(addr__objc_opt_new, (void *)&_objc_opt_new_instrument);

    // Calculate and hook into _objc_release
    void *addr__objc_release = (void *)image + (0x1000164bc - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release  %x \n", (uint64_t)addr__objc_release);
    MSInstrumentFunction(addr__objc_release, (void *)&_objc_release_instrument);

    // Calculate and hook into _objc_release_x1
    void *addr__objc_release_x1 = (void *)image + (0x1000164c8 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x1  %x \n", (uint64_t)addr__objc_release_x1);
    MSInstrumentFunction(addr__objc_release_x1, (void *)&_objc_release_x1_instrument);

    // Calculate and hook into _objc_release_x19
    void *addr__objc_release_x19 = (void *)image + (0x1000164d4 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x19  %x \n", (uint64_t)addr__objc_release_x19);
    MSInstrumentFunction(addr__objc_release_x19, (void *)&_objc_release_x19_instrument);

    // Calculate and hook into _objc_release_x20
    void *addr__objc_release_x20 = (void *)image + (0x1000164e0 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x20  %x \n", (uint64_t)addr__objc_release_x20);
    MSInstrumentFunction(addr__objc_release_x20, (void *)&_objc_release_x20_instrument);

    // Calculate and hook into _objc_release_x21
    void *addr__objc_release_x21 = (void *)image + (0x1000164ec - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x21  %x \n", (uint64_t)addr__objc_release_x21);
    MSInstrumentFunction(addr__objc_release_x21, (void *)&_objc_release_x21_instrument);

    // Calculate and hook into _objc_release_x22
    void *addr__objc_release_x22 = (void *)image + (0x1000164f8 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x22  %x \n", (uint64_t)addr__objc_release_x22);
    MSInstrumentFunction(addr__objc_release_x22, (void *)&_objc_release_x22_instrument);

    // Calculate and hook into _objc_release_x23
    void *addr__objc_release_x23 = (void *)image + (0x100016504 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x23  %x \n", (uint64_t)addr__objc_release_x23);
    MSInstrumentFunction(addr__objc_release_x23, (void *)&_objc_release_x23_instrument);

    // Calculate and hook into _objc_release_x8
    void *addr__objc_release_x8 = (void *)image + (0x100016510 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x8  %x \n", (uint64_t)addr__objc_release_x8);
    MSInstrumentFunction(addr__objc_release_x8, (void *)&_objc_release_x8_instrument);

    // Calculate and hook into _objc_release_x9
    void *addr__objc_release_x9 = (void *)image + (0x10001651c - BASEADDR);
    fprintf(f, "Pegou o addr _objc_release_x9  %x \n", (uint64_t)addr__objc_release_x9);
    MSInstrumentFunction(addr__objc_release_x9, (void *)&_objc_release_x9_instrument);

    // Calculate and hook into _objc_retain
    void *addr__objc_retain = (void *)image + (0x100016528 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain  %x \n", (uint64_t)addr__objc_retain);
    MSInstrumentFunction(addr__objc_retain, (void *)&_objc_retain_instrument);

    // Calculate and hook into _objc_retainAutoreleaseReturnValue
    void *addr__objc_retainAutoreleaseReturnValue = (void *)image + (0x100016534 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retainAutoreleaseReturnValue  %x \n", (uint64_t)addr__objc_retainAutoreleaseReturnValue);
    MSInstrumentFunction(addr__objc_retainAutoreleaseReturnValue, (void *)&_objc_retainAutoreleaseReturnValue_instrument);

    // Calculate and hook into _objc_retain_x19
    void *addr__objc_retain_x19 = (void *)image + (0x100016540 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x19  %x \n", (uint64_t)addr__objc_retain_x19);
    MSInstrumentFunction(addr__objc_retain_x19, (void *)&_objc_retain_x19_instrument);

    // Calculate and hook into _objc_retain_x2
    void *addr__objc_retain_x2 = (void *)image + (0x10001654c - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x2  %x \n", (uint64_t)addr__objc_retain_x2);
    MSInstrumentFunction(addr__objc_retain_x2, (void *)&_objc_retain_x2_instrument);

    // Calculate and hook into _objc_retain_x20
    void *addr__objc_retain_x20 = (void *)image + (0x100016558 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x20  %x \n", (uint64_t)addr__objc_retain_x20);
    MSInstrumentFunction(addr__objc_retain_x20, (void *)&_objc_retain_x20_instrument);

    // Calculate and hook into _objc_retain_x21
    void *addr__objc_retain_x21 = (void *)image + (0x100016564 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x21  %x \n", (uint64_t)addr__objc_retain_x21);
    MSInstrumentFunction(addr__objc_retain_x21, (void *)&_objc_retain_x21_instrument);

    // Calculate and hook into _objc_retain_x22
    void *addr__objc_retain_x22 = (void *)image + (0x100016570 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x22  %x \n", (uint64_t)addr__objc_retain_x22);
    MSInstrumentFunction(addr__objc_retain_x22, (void *)&_objc_retain_x22_instrument);

    // Calculate and hook into _objc_retain_x23
    void *addr__objc_retain_x23 = (void *)image + (0x10001657c - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x23  %x \n", (uint64_t)addr__objc_retain_x23);
    MSInstrumentFunction(addr__objc_retain_x23, (void *)&_objc_retain_x23_instrument);

    // Calculate and hook into _objc_retain_x3
    void *addr__objc_retain_x3 = (void *)image + (0x100016588 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x3  %x \n", (uint64_t)addr__objc_retain_x3);
    MSInstrumentFunction(addr__objc_retain_x3, (void *)&_objc_retain_x3_instrument);

    // Calculate and hook into _objc_retain_x4
    void *addr__objc_retain_x4 = (void *)image + (0x100016594 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x4  %x \n", (uint64_t)addr__objc_retain_x4);
    MSInstrumentFunction(addr__objc_retain_x4, (void *)&_objc_retain_x4_instrument);

    // Calculate and hook into _objc_retain_x8
    void *addr__objc_retain_x8 = (void *)image + (0x1000165a0 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_retain_x8  %x \n", (uint64_t)addr__objc_retain_x8);
    MSInstrumentFunction(addr__objc_retain_x8, (void *)&_objc_retain_x8_instrument);

    // Calculate and hook into _objc_sync_enter
    void *addr__objc_sync_enter = (void *)image + (0x1000165ac - BASEADDR);
    fprintf(f, "Pegou o addr _objc_sync_enter  %x \n", (uint64_t)addr__objc_sync_enter);
    MSInstrumentFunction(addr__objc_sync_enter, (void *)&_objc_sync_enter_instrument);

    // Calculate and hook into _objc_sync_exit
    void *addr__objc_sync_exit = (void *)image + (0x1000165b8 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_sync_exit  %x \n", (uint64_t)addr__objc_sync_exit);
    MSInstrumentFunction(addr__objc_sync_exit, (void *)&_objc_sync_exit_instrument);

    // Calculate and hook into _open
    void *addr__open = (void *)image + (0x1000165c4 - BASEADDR);
    fprintf(f, "Pegou o addr _open  %x \n", (uint64_t)addr__open);
    MSInstrumentFunction(addr__open, (void *)&_open_instrument);

    // Calculate and hook into _open_dprotected_np
    void *addr__open_dprotected_np = (void *)image + (0x1000165d0 - BASEADDR);
    fprintf(f, "Pegou o addr _open_dprotected_np  %x \n", (uint64_t)addr__open_dprotected_np);
    MSInstrumentFunction(addr__open_dprotected_np, (void *)&_open_dprotected_np_instrument);

    // Calculate and hook into _opendir
    void *addr__opendir = (void *)image + (0x1000165dc - BASEADDR);
    fprintf(f, "Pegou o addr _opendir  %x \n", (uint64_t)addr__opendir);
    MSInstrumentFunction(addr__opendir, (void *)&_opendir_instrument);

    // Calculate and hook into _openlog
    void *addr__openlog = (void *)image + (0x1000165e8 - BASEADDR);
    fprintf(f, "Pegou o addr _openlog  %x \n", (uint64_t)addr__openlog);
    MSInstrumentFunction(addr__openlog, (void *)&_openlog_instrument);

    // Calculate and hook into _os_log_type_enabled
    void *addr__os_log_type_enabled = (void *)image + (0x1000165f4 - BASEADDR);
    fprintf(f, "Pegou o addr _os_log_type_enabled  %x \n", (uint64_t)addr__os_log_type_enabled);
    MSInstrumentFunction(addr__os_log_type_enabled, (void *)&_os_log_type_enabled_instrument);

    // Calculate and hook into _os_variant_uses_ephemeral_storage
    void *addr__os_variant_uses_ephemeral_storage = (void *)image + (0x100016600 - BASEADDR);
    fprintf(f, "Pegou o addr _os_variant_uses_ephemeral_storage  %x \n", (uint64_t)addr__os_variant_uses_ephemeral_storage);
    MSInstrumentFunction(addr__os_variant_uses_ephemeral_storage, (void *)&_os_variant_uses_ephemeral_storage_instrument);

    // Calculate and hook into _pwrite
    void *addr__pwrite = (void *)image + (0x10001660c - BASEADDR);
    fprintf(f, "Pegou o addr _pwrite  %x \n", (uint64_t)addr__pwrite);
    MSInstrumentFunction(addr__pwrite, (void *)&_pwrite_instrument);

    // Calculate and hook into _read
    void *addr__read = (void *)image + (0x100016618 - BASEADDR);
    fprintf(f, "Pegou o addr _read  %x \n", (uint64_t)addr__read);
    MSInstrumentFunction(addr__read, (void *)&_read_instrument);

    // Calculate and hook into _realpath_DARWIN_EXTSN
    void *addr__realpath_DARWIN_EXTSN = (void *)image + (0x100016624 - BASEADDR);
    fprintf(f, "Pegou o addr _realpath_DARWIN_EXTSN  %x \n", (uint64_t)addr__realpath_DARWIN_EXTSN);
    MSInstrumentFunction(addr__realpath_DARWIN_EXTSN, (void *)&_realpath_DARWIN_EXTSN_instrument);

    // Calculate and hook into _reboot
    void *addr__reboot = (void *)image + (0x100016630 - BASEADDR);
    fprintf(f, "Pegou o addr _reboot  %x \n", (uint64_t)addr__reboot);
    MSInstrumentFunction(addr__reboot, (void *)&_reboot_instrument);

    // Calculate and hook into _rename
    void *addr__rename = (void *)image + (0x10001663c - BASEADDR);
    fprintf(f, "Pegou o addr _rename  %x \n", (uint64_t)addr__rename);
    MSInstrumentFunction(addr__rename, (void *)&_rename_instrument);

    // Calculate and hook into _renamex_np
    void *addr__renamex_np = (void *)image + (0x100016648 - BASEADDR);
    fprintf(f, "Pegou o addr _renamex_np  %x \n", (uint64_t)addr__renamex_np);
    MSInstrumentFunction(addr__renamex_np, (void *)&_renamex_np_instrument);

    // Calculate and hook into _setattrlist
    void *addr__setattrlist = (void *)image + (0x100016654 - BASEADDR);
    fprintf(f, "Pegou o addr _setattrlist  %x \n", (uint64_t)addr__setattrlist);
    MSInstrumentFunction(addr__setattrlist, (void *)&_setattrlist_instrument);

    // Calculate and hook into _setiopolicy_np
    void *addr__setiopolicy_np = (void *)image + (0x100016660 - BASEADDR);
    fprintf(f, "Pegou o addr _setiopolicy_np  %x \n", (uint64_t)addr__setiopolicy_np);
    MSInstrumentFunction(addr__setiopolicy_np, (void *)&_setiopolicy_np_instrument);

    // Calculate and hook into _snprintf
    void *addr__snprintf = (void *)image + (0x10001666c - BASEADDR);
    fprintf(f, "Pegou o addr _snprintf  %x \n", (uint64_t)addr__snprintf);
    MSInstrumentFunction(addr__snprintf, (void *)&_snprintf_instrument);

    // Calculate and hook into _sqlite3_bind_blob
    void *addr__sqlite3_bind_blob = (void *)image + (0x100016678 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_bind_blob  %x \n", (uint64_t)addr__sqlite3_bind_blob);
    MSInstrumentFunction(addr__sqlite3_bind_blob, (void *)&_sqlite3_bind_blob_instrument);

    // Calculate and hook into _sqlite3_bind_int64
    void *addr__sqlite3_bind_int64 = (void *)image + (0x100016684 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_bind_int64  %x \n", (uint64_t)addr__sqlite3_bind_int64);
    MSInstrumentFunction(addr__sqlite3_bind_int64, (void *)&_sqlite3_bind_int64_instrument);

    // Calculate and hook into _sqlite3_close
    void *addr__sqlite3_close = (void *)image + (0x100016690 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_close  %x \n", (uint64_t)addr__sqlite3_close);
    MSInstrumentFunction(addr__sqlite3_close, (void *)&_sqlite3_close_instrument);

    // Calculate and hook into _sqlite3_column_blob
    void *addr__sqlite3_column_blob = (void *)image + (0x10001669c - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_column_blob  %x \n", (uint64_t)addr__sqlite3_column_blob);
    MSInstrumentFunction(addr__sqlite3_column_blob, (void *)&_sqlite3_column_blob_instrument);

    // Calculate and hook into _sqlite3_column_bytes
    void *addr__sqlite3_column_bytes = (void *)image + (0x1000166a8 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_column_bytes  %x \n", (uint64_t)addr__sqlite3_column_bytes);
    MSInstrumentFunction(addr__sqlite3_column_bytes, (void *)&_sqlite3_column_bytes_instrument);

    // Calculate and hook into _sqlite3_column_int
    void *addr__sqlite3_column_int = (void *)image + (0x1000166b4 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_column_int  %x \n", (uint64_t)addr__sqlite3_column_int);
    MSInstrumentFunction(addr__sqlite3_column_int, (void *)&_sqlite3_column_int_instrument);

    // Calculate and hook into _sqlite3_column_text
    void *addr__sqlite3_column_text = (void *)image + (0x1000166c0 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_column_text  %x \n", (uint64_t)addr__sqlite3_column_text);
    MSInstrumentFunction(addr__sqlite3_column_text, (void *)&_sqlite3_column_text_instrument);

    // Calculate and hook into _sqlite3_errmsg
    void *addr__sqlite3_errmsg = (void *)image + (0x1000166cc - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_errmsg  %x \n", (uint64_t)addr__sqlite3_errmsg);
    MSInstrumentFunction(addr__sqlite3_errmsg, (void *)&_sqlite3_errmsg_instrument);

    // Calculate and hook into _sqlite3_exec
    void *addr__sqlite3_exec = (void *)image + (0x1000166d8 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_exec  %x \n", (uint64_t)addr__sqlite3_exec);
    MSInstrumentFunction(addr__sqlite3_exec, (void *)&_sqlite3_exec_instrument);

    // Calculate and hook into _sqlite3_file_control
    void *addr__sqlite3_file_control = (void *)image + (0x1000166e4 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_file_control  %x \n", (uint64_t)addr__sqlite3_file_control);
    MSInstrumentFunction(addr__sqlite3_file_control, (void *)&_sqlite3_file_control_instrument);

    // Calculate and hook into _sqlite3_finalize
    void *addr__sqlite3_finalize = (void *)image + (0x1000166f0 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_finalize  %x \n", (uint64_t)addr__sqlite3_finalize);
    MSInstrumentFunction(addr__sqlite3_finalize, (void *)&_sqlite3_finalize_instrument);

    // Calculate and hook into _sqlite3_free
    void *addr__sqlite3_free = (void *)image + (0x1000166fc - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_free  %x \n", (uint64_t)addr__sqlite3_free);
    MSInstrumentFunction(addr__sqlite3_free, (void *)&_sqlite3_free_instrument);

    // Calculate and hook into _sqlite3_open_v2
    void *addr__sqlite3_open_v2 = (void *)image + (0x100016708 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_open_v2  %x \n", (uint64_t)addr__sqlite3_open_v2);
    MSInstrumentFunction(addr__sqlite3_open_v2, (void *)&_sqlite3_open_v2_instrument);

    // Calculate and hook into _sqlite3_prepare_v2
    void *addr__sqlite3_prepare_v2 = (void *)image + (0x100016714 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_prepare_v2  %x \n", (uint64_t)addr__sqlite3_prepare_v2);
    MSInstrumentFunction(addr__sqlite3_prepare_v2, (void *)&_sqlite3_prepare_v2_instrument);

    // Calculate and hook into _sqlite3_step
    void *addr__sqlite3_step = (void *)image + (0x100016720 - BASEADDR);
    fprintf(f, "Pegou o addr _sqlite3_step  %x \n", (uint64_t)addr__sqlite3_step);
    MSInstrumentFunction(addr__sqlite3_step, (void *)&_sqlite3_step_instrument);

    // Calculate and hook into _stat
    void *addr__stat = (void *)image + (0x10001672c - BASEADDR);
    fprintf(f, "Pegou o addr _stat  %x \n", (uint64_t)addr__stat);
    MSInstrumentFunction(addr__stat, (void *)&_stat_instrument);

    // Calculate and hook into _statfs
    void *addr__statfs = (void *)image + (0x100016738 - BASEADDR);
    fprintf(f, "Pegou o addr _statfs  %x \n", (uint64_t)addr__statfs);
    MSInstrumentFunction(addr__statfs, (void *)&_statfs_instrument);

    // Calculate and hook into _strcmp
    void *addr__strcmp = (void *)image + (0x100016744 - BASEADDR);
    fprintf(f, "Pegou o addr _strcmp  %x \n", (uint64_t)addr__strcmp);
    MSInstrumentFunction(addr__strcmp, (void *)&_strcmp_instrument);

    // Calculate and hook into _strdup
    void *addr__strdup = (void *)image + (0x100016750 - BASEADDR);
    fprintf(f, "Pegou o addr _strdup  %x \n", (uint64_t)addr__strdup);
    MSInstrumentFunction(addr__strdup, (void *)&_strdup_instrument);

    // Calculate and hook into _strerror
    void *addr__strerror = (void *)image + (0x10001675c - BASEADDR);
    fprintf(f, "Pegou o addr _strerror  %x \n", (uint64_t)addr__strerror);
    MSInstrumentFunction(addr__strerror, (void *)&_strerror_instrument);

    // Calculate and hook into _strlen
    void *addr__strlen = (void *)image + (0x100016768 - BASEADDR);
    fprintf(f, "Pegou o addr _strlen  %x \n", (uint64_t)addr__strlen);
    MSInstrumentFunction(addr__strlen, (void *)&_strlen_instrument);

    // Calculate and hook into _strncasecmp
    void *addr__strncasecmp = (void *)image + (0x100016774 - BASEADDR);
    fprintf(f, "Pegou o addr _strncasecmp  %x \n", (uint64_t)addr__strncasecmp);
    MSInstrumentFunction(addr__strncasecmp, (void *)&_strncasecmp_instrument);

    // Calculate and hook into _strnstr
    void *addr__strnstr = (void *)image + (0x100016780 - BASEADDR);
    fprintf(f, "Pegou o addr _strnstr  %x \n", (uint64_t)addr__strnstr);
    MSInstrumentFunction(addr__strnstr, (void *)&_strnstr_instrument);

    // Calculate and hook into _sync
    void *addr__sync = (void *)image + (0x10001678c - BASEADDR);
    fprintf(f, "Pegou o addr _sync  %x \n", (uint64_t)addr__sync);
    MSInstrumentFunction(addr__sync, (void *)&_sync_instrument);

    // Calculate and hook into _sysctlbyname
    void *addr__sysctlbyname = (void *)image + (0x100016798 - BASEADDR);
    fprintf(f, "Pegou o addr _sysctlbyname  %x \n", (uint64_t)addr__sysctlbyname);
    MSInstrumentFunction(addr__sysctlbyname, (void *)&_sysctlbyname_instrument);

    // Calculate and hook into _syslog
    void *addr__syslog = (void *)image + (0x1000167a4 - BASEADDR);
    fprintf(f, "Pegou o addr _syslog  %x \n", (uint64_t)addr__syslog);
    MSInstrumentFunction(addr__syslog, (void *)&_syslog_instrument);

    // Calculate and hook into _time
    void *addr__time = (void *)image + (0x1000167b0 - BASEADDR);
    fprintf(f, "Pegou o addr _time  %x \n", (uint64_t)addr__time);
    MSInstrumentFunction(addr__time, (void *)&_time_instrument);

    // Calculate and hook into _unlink
    void *addr__unlink = (void *)image + (0x1000167bc - BASEADDR);
    fprintf(f, "Pegou o addr _unlink  %x \n", (uint64_t)addr__unlink);
    MSInstrumentFunction(addr__unlink, (void *)&_unlink_instrument);

    // Calculate and hook into _uuid_copy
    void *addr__uuid_copy = (void *)image + (0x1000167c8 - BASEADDR);
    fprintf(f, "Pegou o addr _uuid_copy  %x \n", (uint64_t)addr__uuid_copy);
    MSInstrumentFunction(addr__uuid_copy, (void *)&_uuid_copy_instrument);

    // Calculate and hook into _uuid_parse
    void *addr__uuid_parse = (void *)image + (0x1000167d4 - BASEADDR);
    fprintf(f, "Pegou o addr _uuid_parse  %x \n", (uint64_t)addr__uuid_parse);
    MSInstrumentFunction(addr__uuid_parse, (void *)&_uuid_parse_instrument);

    // Calculate and hook into _uuid_unparse
    void *addr__uuid_unparse = (void *)image + (0x1000167e0 - BASEADDR);
    fprintf(f, "Pegou o addr _uuid_unparse  %x \n", (uint64_t)addr__uuid_unparse);
    MSInstrumentFunction(addr__uuid_unparse, (void *)&_uuid_unparse_instrument);

    // Calculate and hook into _vm_allocate
    void *addr__vm_allocate = (void *)image + (0x1000167ec - BASEADDR);
    fprintf(f, "Pegou o addr _vm_allocate  %x \n", (uint64_t)addr__vm_allocate);
    MSInstrumentFunction(addr__vm_allocate, (void *)&_vm_allocate_instrument);

    // Calculate and hook into _vm_deallocate
    void *addr__vm_deallocate = (void *)image + (0x1000167f8 - BASEADDR);
    fprintf(f, "Pegou o addr _vm_deallocate  %x \n", (uint64_t)addr__vm_deallocate);
    MSInstrumentFunction(addr__vm_deallocate, (void *)&_vm_deallocate_instrument);

    // Calculate and hook into _voucher_get_current_persona_proximate_info
    void *addr__voucher_get_current_persona_proximate_info = (void *)image + (0x100016804 - BASEADDR);
    fprintf(f, "Pegou o addr _voucher_get_current_persona_proximate_info  %x \n", (uint64_t)addr__voucher_get_current_persona_proximate_info);
    MSInstrumentFunction(addr__voucher_get_current_persona_proximate_info, (void *)&_voucher_get_current_persona_proximate_info_instrument);

    // Calculate and hook into _write
    void *addr__write = (void *)image + (0x100016810 - BASEADDR);
    fprintf(f, "Pegou o addr _write  %x \n", (uint64_t)addr__write);
    MSInstrumentFunction(addr__write, (void *)&_write_instrument);

    // Calculate and hook into _xpc_activity_copy_criteria
    void *addr__xpc_activity_copy_criteria = (void *)image + (0x10001681c - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_activity_copy_criteria  %x \n", (uint64_t)addr__xpc_activity_copy_criteria);
    MSInstrumentFunction(addr__xpc_activity_copy_criteria, (void *)&_xpc_activity_copy_criteria_instrument);

    // Calculate and hook into _xpc_activity_get_state
    void *addr__xpc_activity_get_state = (void *)image + (0x100016828 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_activity_get_state  %x \n", (uint64_t)addr__xpc_activity_get_state);
    MSInstrumentFunction(addr__xpc_activity_get_state, (void *)&_xpc_activity_get_state_instrument);

    // Calculate and hook into _xpc_activity_register
    void *addr__xpc_activity_register = (void *)image + (0x100016834 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_activity_register  %x \n", (uint64_t)addr__xpc_activity_register);
    MSInstrumentFunction(addr__xpc_activity_register, (void *)&_xpc_activity_register_instrument);

    // Calculate and hook into _xpc_activity_set_criteria
    void *addr__xpc_activity_set_criteria = (void *)image + (0x100016840 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_activity_set_criteria  %x \n", (uint64_t)addr__xpc_activity_set_criteria);
    MSInstrumentFunction(addr__xpc_activity_set_criteria, (void *)&_xpc_activity_set_criteria_instrument);

    // Calculate and hook into _xpc_bool_create
    void *addr__xpc_bool_create = (void *)image + (0x10001684c - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_bool_create  %x \n", (uint64_t)addr__xpc_bool_create);
    MSInstrumentFunction(addr__xpc_bool_create, (void *)&_xpc_bool_create_instrument);

    // Calculate and hook into _xpc_dictionary_create
    void *addr__xpc_dictionary_create = (void *)image + (0x100016858 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_dictionary_create  %x \n", (uint64_t)addr__xpc_dictionary_create);
    MSInstrumentFunction(addr__xpc_dictionary_create, (void *)&_xpc_dictionary_create_instrument);

    // Calculate and hook into _xpc_dictionary_get_string
    void *addr__xpc_dictionary_get_string = (void *)image + (0x100016864 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_dictionary_get_string  %x \n", (uint64_t)addr__xpc_dictionary_get_string);
    MSInstrumentFunction(addr__xpc_dictionary_get_string, (void *)&_xpc_dictionary_get_string_instrument);

    // Calculate and hook into _xpc_dictionary_set_bool
    void *addr__xpc_dictionary_set_bool = (void *)image + (0x100016870 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_dictionary_set_bool  %x \n", (uint64_t)addr__xpc_dictionary_set_bool);
    MSInstrumentFunction(addr__xpc_dictionary_set_bool, (void *)&_xpc_dictionary_set_bool_instrument);

    // Calculate and hook into _xpc_dictionary_set_int64
    void *addr__xpc_dictionary_set_int64 = (void *)image + (0x10001687c - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_dictionary_set_int64  %x \n", (uint64_t)addr__xpc_dictionary_set_int64);
    MSInstrumentFunction(addr__xpc_dictionary_set_int64, (void *)&_xpc_dictionary_set_int64_instrument);

    // Calculate and hook into _xpc_dictionary_set_string
    void *addr__xpc_dictionary_set_string = (void *)image + (0x100016888 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_dictionary_set_string  %x \n", (uint64_t)addr__xpc_dictionary_set_string);
    MSInstrumentFunction(addr__xpc_dictionary_set_string, (void *)&_xpc_dictionary_set_string_instrument);

    // Calculate and hook into _xpc_release
    void *addr__xpc_release = (void *)image + (0x100016894 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_release  %x \n", (uint64_t)addr__xpc_release);
    MSInstrumentFunction(addr__xpc_release, (void *)&_xpc_release_instrument);

    // Calculate and hook into _xpc_set_event_stream_handler
    void *addr__xpc_set_event_stream_handler = (void *)image + (0x1000168a0 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_set_event_stream_handler  %x \n", (uint64_t)addr__xpc_set_event_stream_handler);
    MSInstrumentFunction(addr__xpc_set_event_stream_handler, (void *)&_xpc_set_event_stream_handler_instrument);

    // Calculate and hook into _xpc_transaction_begin
    void *addr__xpc_transaction_begin = (void *)image + (0x1000168ac - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_transaction_begin  %x \n", (uint64_t)addr__xpc_transaction_begin);
    MSInstrumentFunction(addr__xpc_transaction_begin, (void *)&_xpc_transaction_begin_instrument);

    // Calculate and hook into _xpc_transaction_end
    void *addr__xpc_transaction_end = (void *)image + (0x1000168b8 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_transaction_end  %x \n", (uint64_t)addr__xpc_transaction_end);
    MSInstrumentFunction(addr__xpc_transaction_end, (void *)&_xpc_transaction_end_instrument);

    // Calculate and hook into _xpc_uint64_create
    void *addr__xpc_uint64_create = (void *)image + (0x1000168c4 - BASEADDR);
    fprintf(f, "Pegou o addr _xpc_uint64_create  %x \n", (uint64_t)addr__xpc_uint64_create);
    MSInstrumentFunction(addr__xpc_uint64_create, (void *)&_xpc_uint64_create_instrument);

    // Calculate and hook into FUN_100017440
    void *addr_FUN_100017440 = (void *)image + (0x100017440 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017440  %x \n", (uint64_t)addr_FUN_100017440);
    MSInstrumentFunction(addr_FUN_100017440, (void *)&FUN_100017440_instrument);

    // Calculate and hook into FUN_100017460
    void *addr_FUN_100017460 = (void *)image + (0x100017460 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017460  %x \n", (uint64_t)addr_FUN_100017460);
    MSInstrumentFunction(addr_FUN_100017460, (void *)&FUN_100017460_instrument);

    // Calculate and hook into FUN_100017480
    void *addr_FUN_100017480 = (void *)image + (0x100017480 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017480  %x \n", (uint64_t)addr_FUN_100017480);
    MSInstrumentFunction(addr_FUN_100017480, (void *)&FUN_100017480_instrument);

    // Calculate and hook into FUN_1000174a0
    void *addr_FUN_1000174a0 = (void *)image + (0x1000174a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174a0  %x \n", (uint64_t)addr_FUN_1000174a0);
    MSInstrumentFunction(addr_FUN_1000174a0, (void *)&FUN_1000174a0_instrument);

    // Calculate and hook into FUN_1000174c0
    void *addr_FUN_1000174c0 = (void *)image + (0x1000174c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174c0  %x \n", (uint64_t)addr_FUN_1000174c0);
    MSInstrumentFunction(addr_FUN_1000174c0, (void *)&FUN_1000174c0_instrument);

    // Calculate and hook into FUN_1000174e0
    void *addr_FUN_1000174e0 = (void *)image + (0x1000174e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174e0  %x \n", (uint64_t)addr_FUN_1000174e0);
    MSInstrumentFunction(addr_FUN_1000174e0, (void *)&FUN_1000174e0_instrument);

    // Calculate and hook into FUN_100017500
    void *addr_FUN_100017500 = (void *)image + (0x100017500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017500  %x \n", (uint64_t)addr_FUN_100017500);
    MSInstrumentFunction(addr_FUN_100017500, (void *)&FUN_100017500_instrument);

    // Calculate and hook into FUN_100017520
    void *addr_FUN_100017520 = (void *)image + (0x100017520 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017520  %x \n", (uint64_t)addr_FUN_100017520);
    MSInstrumentFunction(addr_FUN_100017520, (void *)&FUN_100017520_instrument);

    // Calculate and hook into FUN_100017540
    void *addr_FUN_100017540 = (void *)image + (0x100017540 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017540  %x \n", (uint64_t)addr_FUN_100017540);
    MSInstrumentFunction(addr_FUN_100017540, (void *)&FUN_100017540_instrument);

    // Calculate and hook into FUN_100017560
    void *addr_FUN_100017560 = (void *)image + (0x100017560 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017560  %x \n", (uint64_t)addr_FUN_100017560);
    MSInstrumentFunction(addr_FUN_100017560, (void *)&FUN_100017560_instrument);

    // Calculate and hook into FUN_100017580
    void *addr_FUN_100017580 = (void *)image + (0x100017580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017580  %x \n", (uint64_t)addr_FUN_100017580);
    MSInstrumentFunction(addr_FUN_100017580, (void *)&FUN_100017580_instrument);

    // Calculate and hook into FUN_1000175a0
    void *addr_FUN_1000175a0 = (void *)image + (0x1000175a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175a0  %x \n", (uint64_t)addr_FUN_1000175a0);
    MSInstrumentFunction(addr_FUN_1000175a0, (void *)&FUN_1000175a0_instrument);

    // Calculate and hook into FUN_1000175c0
    void *addr_FUN_1000175c0 = (void *)image + (0x1000175c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175c0  %x \n", (uint64_t)addr_FUN_1000175c0);
    MSInstrumentFunction(addr_FUN_1000175c0, (void *)&FUN_1000175c0_instrument);

    // Calculate and hook into FUN_1000175e0
    void *addr_FUN_1000175e0 = (void *)image + (0x1000175e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175e0  %x \n", (uint64_t)addr_FUN_1000175e0);
    MSInstrumentFunction(addr_FUN_1000175e0, (void *)&FUN_1000175e0_instrument);

    // Calculate and hook into FUN_100017600
    void *addr_FUN_100017600 = (void *)image + (0x100017600 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017600  %x \n", (uint64_t)addr_FUN_100017600);
    MSInstrumentFunction(addr_FUN_100017600, (void *)&FUN_100017600_instrument);

    // Calculate and hook into FUN_100017620
    void *addr_FUN_100017620 = (void *)image + (0x100017620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017620  %x \n", (uint64_t)addr_FUN_100017620);
    MSInstrumentFunction(addr_FUN_100017620, (void *)&FUN_100017620_instrument);

    // Calculate and hook into FUN_100017640
    void *addr_FUN_100017640 = (void *)image + (0x100017640 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017640  %x \n", (uint64_t)addr_FUN_100017640);
    MSInstrumentFunction(addr_FUN_100017640, (void *)&FUN_100017640_instrument);

    // Calculate and hook into FUN_100017660
    void *addr_FUN_100017660 = (void *)image + (0x100017660 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017660  %x \n", (uint64_t)addr_FUN_100017660);
    MSInstrumentFunction(addr_FUN_100017660, (void *)&FUN_100017660_instrument);

    // Calculate and hook into FUN_100017680
    void *addr_FUN_100017680 = (void *)image + (0x100017680 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017680  %x \n", (uint64_t)addr_FUN_100017680);
    MSInstrumentFunction(addr_FUN_100017680, (void *)&FUN_100017680_instrument);

    // Calculate and hook into FUN_1000176a0
    void *addr_FUN_1000176a0 = (void *)image + (0x1000176a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176a0  %x \n", (uint64_t)addr_FUN_1000176a0);
    MSInstrumentFunction(addr_FUN_1000176a0, (void *)&FUN_1000176a0_instrument);

    // Calculate and hook into FUN_1000176c0
    void *addr_FUN_1000176c0 = (void *)image + (0x1000176c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176c0  %x \n", (uint64_t)addr_FUN_1000176c0);
    MSInstrumentFunction(addr_FUN_1000176c0, (void *)&FUN_1000176c0_instrument);

    // Calculate and hook into FUN_1000176e0
    void *addr_FUN_1000176e0 = (void *)image + (0x1000176e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176e0  %x \n", (uint64_t)addr_FUN_1000176e0);
    MSInstrumentFunction(addr_FUN_1000176e0, (void *)&FUN_1000176e0_instrument);

    // Calculate and hook into FUN_100017700
    void *addr_FUN_100017700 = (void *)image + (0x100017700 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017700  %x \n", (uint64_t)addr_FUN_100017700);
    MSInstrumentFunction(addr_FUN_100017700, (void *)&FUN_100017700_instrument);

    // Calculate and hook into FUN_100017720
    void *addr_FUN_100017720 = (void *)image + (0x100017720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017720  %x \n", (uint64_t)addr_FUN_100017720);
    MSInstrumentFunction(addr_FUN_100017720, (void *)&FUN_100017720_instrument);

    // Calculate and hook into FUN_100017740
    void *addr_FUN_100017740 = (void *)image + (0x100017740 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017740  %x \n", (uint64_t)addr_FUN_100017740);
    MSInstrumentFunction(addr_FUN_100017740, (void *)&FUN_100017740_instrument);

    // Calculate and hook into FUN_100017760
    void *addr_FUN_100017760 = (void *)image + (0x100017760 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017760  %x \n", (uint64_t)addr_FUN_100017760);
    MSInstrumentFunction(addr_FUN_100017760, (void *)&FUN_100017760_instrument);

    // Calculate and hook into FUN_100017780
    void *addr_FUN_100017780 = (void *)image + (0x100017780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017780  %x \n", (uint64_t)addr_FUN_100017780);
    MSInstrumentFunction(addr_FUN_100017780, (void *)&FUN_100017780_instrument);

    // Calculate and hook into FUN_1000177a0
    void *addr_FUN_1000177a0 = (void *)image + (0x1000177a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177a0  %x \n", (uint64_t)addr_FUN_1000177a0);
    MSInstrumentFunction(addr_FUN_1000177a0, (void *)&FUN_1000177a0_instrument);

    // Calculate and hook into FUN_1000177c0
    void *addr_FUN_1000177c0 = (void *)image + (0x1000177c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177c0  %x \n", (uint64_t)addr_FUN_1000177c0);
    MSInstrumentFunction(addr_FUN_1000177c0, (void *)&FUN_1000177c0_instrument);

    // Calculate and hook into FUN_1000177e0
    void *addr_FUN_1000177e0 = (void *)image + (0x1000177e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177e0  %x \n", (uint64_t)addr_FUN_1000177e0);
    MSInstrumentFunction(addr_FUN_1000177e0, (void *)&FUN_1000177e0_instrument);

    // Calculate and hook into FUN_100017800
    void *addr_FUN_100017800 = (void *)image + (0x100017800 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017800  %x \n", (uint64_t)addr_FUN_100017800);
    MSInstrumentFunction(addr_FUN_100017800, (void *)&FUN_100017800_instrument);

    // Calculate and hook into FUN_100017820
    void *addr_FUN_100017820 = (void *)image + (0x100017820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017820  %x \n", (uint64_t)addr_FUN_100017820);
    MSInstrumentFunction(addr_FUN_100017820, (void *)&FUN_100017820_instrument);

    // Calculate and hook into FUN_100017840
    void *addr_FUN_100017840 = (void *)image + (0x100017840 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017840  %x \n", (uint64_t)addr_FUN_100017840);
    MSInstrumentFunction(addr_FUN_100017840, (void *)&FUN_100017840_instrument);

    // Calculate and hook into FUN_100017860
    void *addr_FUN_100017860 = (void *)image + (0x100017860 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017860  %x \n", (uint64_t)addr_FUN_100017860);
    MSInstrumentFunction(addr_FUN_100017860, (void *)&FUN_100017860_instrument);

    // Calculate and hook into FUN_100017880
    void *addr_FUN_100017880 = (void *)image + (0x100017880 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017880  %x \n", (uint64_t)addr_FUN_100017880);
    MSInstrumentFunction(addr_FUN_100017880, (void *)&FUN_100017880_instrument);

    // Calculate and hook into FUN_1000178a0
    void *addr_FUN_1000178a0 = (void *)image + (0x1000178a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178a0  %x \n", (uint64_t)addr_FUN_1000178a0);
    MSInstrumentFunction(addr_FUN_1000178a0, (void *)&FUN_1000178a0_instrument);

    // Calculate and hook into FUN_1000178c0
    void *addr_FUN_1000178c0 = (void *)image + (0x1000178c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178c0  %x \n", (uint64_t)addr_FUN_1000178c0);
    MSInstrumentFunction(addr_FUN_1000178c0, (void *)&FUN_1000178c0_instrument);

    // Calculate and hook into FUN_1000178e0
    void *addr_FUN_1000178e0 = (void *)image + (0x1000178e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178e0  %x \n", (uint64_t)addr_FUN_1000178e0);
    MSInstrumentFunction(addr_FUN_1000178e0, (void *)&FUN_1000178e0_instrument);

    // Calculate and hook into FUN_100017900
    void *addr_FUN_100017900 = (void *)image + (0x100017900 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017900  %x \n", (uint64_t)addr_FUN_100017900);
    MSInstrumentFunction(addr_FUN_100017900, (void *)&FUN_100017900_instrument);

    // Calculate and hook into FUN_100017920
    void *addr_FUN_100017920 = (void *)image + (0x100017920 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017920  %x \n", (uint64_t)addr_FUN_100017920);
    MSInstrumentFunction(addr_FUN_100017920, (void *)&FUN_100017920_instrument);

    // Calculate and hook into FUN_100017940
    void *addr_FUN_100017940 = (void *)image + (0x100017940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017940  %x \n", (uint64_t)addr_FUN_100017940);
    MSInstrumentFunction(addr_FUN_100017940, (void *)&FUN_100017940_instrument);

    // Calculate and hook into FUN_100017960
    void *addr_FUN_100017960 = (void *)image + (0x100017960 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017960  %x \n", (uint64_t)addr_FUN_100017960);
    MSInstrumentFunction(addr_FUN_100017960, (void *)&FUN_100017960_instrument);

    // Calculate and hook into FUN_100017980
    void *addr_FUN_100017980 = (void *)image + (0x100017980 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017980  %x \n", (uint64_t)addr_FUN_100017980);
    MSInstrumentFunction(addr_FUN_100017980, (void *)&FUN_100017980_instrument);

    // Calculate and hook into FUN_1000179a0
    void *addr_FUN_1000179a0 = (void *)image + (0x1000179a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179a0  %x \n", (uint64_t)addr_FUN_1000179a0);
    MSInstrumentFunction(addr_FUN_1000179a0, (void *)&FUN_1000179a0_instrument);

    // Calculate and hook into FUN_1000179c0
    void *addr_FUN_1000179c0 = (void *)image + (0x1000179c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179c0  %x \n", (uint64_t)addr_FUN_1000179c0);
    MSInstrumentFunction(addr_FUN_1000179c0, (void *)&FUN_1000179c0_instrument);

    // Calculate and hook into FUN_1000179e0
    void *addr_FUN_1000179e0 = (void *)image + (0x1000179e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179e0  %x \n", (uint64_t)addr_FUN_1000179e0);
    MSInstrumentFunction(addr_FUN_1000179e0, (void *)&FUN_1000179e0_instrument);

    // Calculate and hook into FUN_100017a00
    void *addr_FUN_100017a00 = (void *)image + (0x100017a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a00  %x \n", (uint64_t)addr_FUN_100017a00);
    MSInstrumentFunction(addr_FUN_100017a00, (void *)&FUN_100017a00_instrument);

    // Calculate and hook into FUN_100017a20
    void *addr_FUN_100017a20 = (void *)image + (0x100017a20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a20  %x \n", (uint64_t)addr_FUN_100017a20);
    MSInstrumentFunction(addr_FUN_100017a20, (void *)&FUN_100017a20_instrument);

    // Calculate and hook into FUN_100017a40
    void *addr_FUN_100017a40 = (void *)image + (0x100017a40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a40  %x \n", (uint64_t)addr_FUN_100017a40);
    MSInstrumentFunction(addr_FUN_100017a40, (void *)&FUN_100017a40_instrument);

    // Calculate and hook into FUN_100017a60
    void *addr_FUN_100017a60 = (void *)image + (0x100017a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a60  %x \n", (uint64_t)addr_FUN_100017a60);
    MSInstrumentFunction(addr_FUN_100017a60, (void *)&FUN_100017a60_instrument);

    // Calculate and hook into FUN_100017a80
    void *addr_FUN_100017a80 = (void *)image + (0x100017a80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a80  %x \n", (uint64_t)addr_FUN_100017a80);
    MSInstrumentFunction(addr_FUN_100017a80, (void *)&FUN_100017a80_instrument);

    // Calculate and hook into FUN_100017aa0
    void *addr_FUN_100017aa0 = (void *)image + (0x100017aa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017aa0  %x \n", (uint64_t)addr_FUN_100017aa0);
    MSInstrumentFunction(addr_FUN_100017aa0, (void *)&FUN_100017aa0_instrument);

    // Calculate and hook into FUN_100017ac0
    void *addr_FUN_100017ac0 = (void *)image + (0x100017ac0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ac0  %x \n", (uint64_t)addr_FUN_100017ac0);
    MSInstrumentFunction(addr_FUN_100017ac0, (void *)&FUN_100017ac0_instrument);

    // Calculate and hook into FUN_100017ae0
    void *addr_FUN_100017ae0 = (void *)image + (0x100017ae0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ae0  %x \n", (uint64_t)addr_FUN_100017ae0);
    MSInstrumentFunction(addr_FUN_100017ae0, (void *)&FUN_100017ae0_instrument);

    // Calculate and hook into FUN_100017b00
    void *addr_FUN_100017b00 = (void *)image + (0x100017b00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b00  %x \n", (uint64_t)addr_FUN_100017b00);
    MSInstrumentFunction(addr_FUN_100017b00, (void *)&FUN_100017b00_instrument);

    // Calculate and hook into FUN_100017b20
    void *addr_FUN_100017b20 = (void *)image + (0x100017b20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b20  %x \n", (uint64_t)addr_FUN_100017b20);
    MSInstrumentFunction(addr_FUN_100017b20, (void *)&FUN_100017b20_instrument);

    // Calculate and hook into FUN_100017b40
    void *addr_FUN_100017b40 = (void *)image + (0x100017b40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b40  %x \n", (uint64_t)addr_FUN_100017b40);
    MSInstrumentFunction(addr_FUN_100017b40, (void *)&FUN_100017b40_instrument);

    // Calculate and hook into FUN_100017b60
    void *addr_FUN_100017b60 = (void *)image + (0x100017b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b60  %x \n", (uint64_t)addr_FUN_100017b60);
    MSInstrumentFunction(addr_FUN_100017b60, (void *)&FUN_100017b60_instrument);

    // Calculate and hook into FUN_100017b80
    void *addr_FUN_100017b80 = (void *)image + (0x100017b80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b80  %x \n", (uint64_t)addr_FUN_100017b80);
    MSInstrumentFunction(addr_FUN_100017b80, (void *)&FUN_100017b80_instrument);

    // Calculate and hook into FUN_100017ba0
    void *addr_FUN_100017ba0 = (void *)image + (0x100017ba0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ba0  %x \n", (uint64_t)addr_FUN_100017ba0);
    MSInstrumentFunction(addr_FUN_100017ba0, (void *)&FUN_100017ba0_instrument);

    // Calculate and hook into FUN_100017bc0
    void *addr_FUN_100017bc0 = (void *)image + (0x100017bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017bc0  %x \n", (uint64_t)addr_FUN_100017bc0);
    MSInstrumentFunction(addr_FUN_100017bc0, (void *)&FUN_100017bc0_instrument);

    // Calculate and hook into FUN_100017be0
    void *addr_FUN_100017be0 = (void *)image + (0x100017be0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017be0  %x \n", (uint64_t)addr_FUN_100017be0);
    MSInstrumentFunction(addr_FUN_100017be0, (void *)&FUN_100017be0_instrument);

    // Calculate and hook into FUN_100017c00
    void *addr_FUN_100017c00 = (void *)image + (0x100017c00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017c00  %x \n", (uint64_t)addr_FUN_100017c00);
    MSInstrumentFunction(addr_FUN_100017c00, (void *)&FUN_100017c00_instrument);

    // Calculate and hook into _objc_msgSend
    void *addr__objc_msgSend = (void *)image + (0x100038158 - BASEADDR);
    fprintf(f, "Pegou o addr _objc_msgSend  %x \n", (uint64_t)addr__objc_msgSend);
    MSInstrumentFunction(addr__objc_msgSend, (void *)&_objc_msgSend_instrument);

    fclose(f);
}
