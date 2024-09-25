#include <stdint.h>
#include <stdio.h>
#include <substrate.h>

uint64_t (*DecryptKBWithCrypto_ptr)(char *kebagPath, uint8_t **kbOut);

void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size)
{
    FILE *fb = fopen(fname, "wb");

    fwrite(addr, sizeof(uint8_t), size, fb);
    fclose(fb);
}

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

void keybagdInit(void)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);
    dumpMem(f, (uint8_t *)image, 0x100);

    void *addr = (void *)image + (0x10000443c - 0x100000000);
    fprintf(f, "Pegou o addr %x \n", (uint64_t)addr);

    dumpMem(f, (uint8_t *)addr, 0x100);
    // addr += 0x123D4;
    MSHookFunction(addr, (void *)&DecryptKBWithCrypto_hook, (void **)&DecryptKBWithCrypto_ptr);

    fclose(f);
}