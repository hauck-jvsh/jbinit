#include <stdint.h>
#include <stdio.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <mach-o/dyld.h>
#include <mach-o/loader.h>
#include <mach-o/nlist.h>
#include <string.h>
#include <mach/message.h>
#include <mach/vm_region.h>
#include <mach/vm_map.h>
#include <mach/mach_vm.h>
#include <mach/mach.h>
#include <libkern/OSCacheControl.h>

uint64_t DecryptKBWithCrypto(char *kebagPath, uint8_t *kbOut);

uint64_t (*DecryptKBWithCrypto_ptr)(char *kebagPath, uint8_t *kbOut);

uint64_t DecryptKBWithCrypto_hook(char *kebagPath, uint8_t *kbOut)
{
    FILE *f = fopen("/var/root/log.txt", "a");
    uint64_t temp = DecryptKBWithCrypto_ptr(kebagPath, kbOut);
    fprintf(f, "%s", kebagPath);
    for (int i = 0; i < 32; i++)
    {
        fprintf(f, "%02x", kbOut[i]);
    }
    return temp;
}

void keybagdInit(void)
{

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    uint8_t *addr;
    MSFindAddress(image, &addr);
    MSHookFunction(addr + 0x443c, DecryptKBWithCrypto_hook, DecryptKBWithCrypto_ptr);
}