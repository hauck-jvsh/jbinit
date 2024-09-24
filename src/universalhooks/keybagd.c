#include <stdint.h>
#include <stdio.h>
#include <substrate.h>

uint64_t DecryptKBWithCrypto(char *kebagPath, uint8_t *kbOut);

uint64_t (*DecryptKBWithCrypto_ptr)(char *kebagPath, uint8_t *kbOut);

uint64_t DecryptKBWithCrypto_hook(char *kebagPath, uint8_t *kbOut)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no hook \n");
    fclose(f);
    uint64_t temp = DecryptKBWithCrypto_ptr(kebagPath, kbOut);

    return temp;
}

void keybagdInit(void)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");
    fclose(f);

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    void *addr = (void *)0x10000443c;

    MSHookFunction(addr, DecryptKBWithCrypto_hook, DecryptKBWithCrypto_ptr);
}