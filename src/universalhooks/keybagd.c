#include <stdint.h>
#include <stdio.h>
#include <substrate.h>

void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size)
{
    FILE *fb = fopen(fname, "wb");

    fwrite(addr, sizeof(uint8_t), size, fb);
    fclose(fb);
}

void dumpMem(FILE *f, uint8_t *addr, uint64_t tam)
{
    uint64_t i;
    fprintf(f, "Memdump\n");
    for (i = 0; i < tam; i++)
    {
        if (i % 0x10 == 0)
            fprintf(f, "\n%x ", (addr + i));

        fprintf(f, " %02x ", addr[i]);
    }
    fprintf(f, "\n");
}

uint64_t (*DecryptKBWithCrypto_ptr)(char *kebagPath, uint8_t **kbOut);

uint64_t DecryptKBWithCrypto_hook(char *kebagPath, uint8_t **kbOut)
{
    uint64_t i;
    FILE *f = fopen("/var/root/log.txt", "a");

    fprintf(f, "Chegou no hook \n");
    fprintf(f, "arquivo cifrado %s\n", kebagPath);
    fprintf(f, "kbOut antes %x %x", (uint64_t)kbOut, (uint64_t)*kbOut);

    uint64_t temp = DecryptKBWithCrypto_ptr(kebagPath, kbOut);

    fprintf(f, "kbOut depois %x %x", (uint64_t)kbOut, (uint64_t)*kbOut);
    fclose(f);

    dumpMenBin("/var/root/kout0.bin", (uint8_t *)kbOut, 1024 * 10);
    dumpMenBin("/var/root/kout1.bin", (uint8_t *)*kbOut, 1024 * 10);
    dumpMenBin("/var/root/kout2.bin", (uint8_t *)**kbOut, 1024 * 10);

    return temp;
}

uint64_t (*LoadUserBag_ptr)(__int64 a1);

void *LoadUserBag(__int64 a1)
{
    uint8_t *MutableCopy = LoadUserBag_ptr(a1);
    FILE *f = fopen("/var/root/log.txt", "a");

    fprintf(f, "Chegou no hook LoadUserBag\n");
    fprintf(f, "Parametro a1 %x addr ret %x\n", a1, MutableCopy);
    fclose(f);

    dumpMenBin("/var/root/MutableCopy.bin", MutableCopy, 1024 * 10);

    return (void *)MutableCopy;
}

void keybagdInit(void)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);
    dumpMem(f, (uint8_t *)image, 0x100);

    void *addr_DecryptKBWithCrypto = (void *)image + (0x10000443c - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_DecryptKBWithCrypto);
    dumpMem(f, (uint8_t *)addr_DecryptKBWithCrypto, 0x100);
    MSHookFunction(addr_DecryptKBWithCrypto, (void *)&DecryptKBWithCrypto_hook, (void **)&DecryptKBWithCrypto_ptr);

    void *addr_LoadUserBag = (void *)image + (0x10000285C - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_LoadUserBag);
    dumpMem(f, (uint8_t *)addr_LoadUserBag, 0x100);
    MSHookFunction(addr_LoadUserBag, (void *)&LoadUserBag, (void **)&LoadUserBag_ptr);

    fclose(f);
}