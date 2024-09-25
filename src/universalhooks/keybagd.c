#include <stdint.h>
#include <stdio.h>
#include <substrate.h>

size_t (*_write_hook_org_ptr)(int param_1, void *param_2, size_t param_3);

uint64_t (*DecryptKBWithCrypto_ptr)(char *kebagPath, uint8_t *kbOut);

uint64_t DecryptKBWithCrypto_hook(char *kebagPath, uint8_t *kbOut)
{

    FILE *f = fopen("/var/root/log.txt", "a");

    fprintf(f, "Chegou no hook \n");
    fclose(f);
    uint64_t temp = DecryptKBWithCrypto_ptr(kebagPath, kbOut);

    return temp;
}

size_t _write_hook(int param_1, void *param_2, size_t param_3)
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no hook \n");
    fclose(f);
    return _write_hook_org_ptr(param_1, param_2, param_3);
}

void keybagdInit(void)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);

    void *addr = MSFindSymbol(image, "s_initWithFormat");
    fprintf(f, "Pegou o addr %x \n", (uint64_t)addr);
    // addr += 0x123D4;
    MSHookFunction(addr, (void *)&_write_hook, (void **)&_write_hook_org_ptr);

    fclose(f);
}