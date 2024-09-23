#include <stdint.h>
#include <stdio.h>
#include <substrate.h>

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
    fclose(f);
    return temp;
}

void keybagdInit(void)
{

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    void *addr = (void *)0x10000443c;
    FILE *f = fopen("/var/root/log.txt", "a");
    printf("Abriu");
    fprintf(f, "Abriu");
    fclose(f);
    while (1)
        ;
    MSHookFunction(addr, DecryptKBWithCrypto_hook, DecryptKBWithCrypto_ptr);
}