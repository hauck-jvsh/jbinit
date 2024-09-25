#include <stdint.h>
#include <stdio.h>
#include <substrate.h>
#include <CoreFoundation/CoreFoundation.h>
#include <dirent.h>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <objc/runtime.h>
#include <os/log.h>

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

void *(*LoadUserBag_ptr)(int64_t a1);

void *LoadUserBag(int64_t a1)
{
    uint8_t *MutableCopy = LoadUserBag_ptr(a1);
    FILE *f = fopen("/var/root/log.txt", "a");

    fprintf(f, "Chegou no hook LoadUserBag\n");
    fprintf(f, "Parametro a1 %x addr ret %x\n", a1, MutableCopy);
    fclose(f);

    dumpMenBin("/var/root/MutableCopy.bin", MutableCopy, 1024 * 10);

    void *kbkeys = CFDictionaryGetValue(MutableCopy, CFSTR("KeyBagKeys"));
    dumpMenBin("/var/root/kbkeys.bin", kbkeys, 1024 * 10);

    return (void *)MutableCopy;
}

uint64_t (*LoadBag_ptr)(const void *a1, int a2, void **a3);

uint64_t LoadBag(const void *BytePtr, int Length, void **saida)
{
    dumpMenBin("/var/root/byteptr.bin", BytePtr, Length);
    uint64_t retorno = LoadBag_ptr(BytePtr, Length, saida);
    FILE *f = fopen("/var/root/log.txt", "a");

    fprintf(f, "Chegou no hook LoadBag\n");
    fprintf(f, "BytePtr %x len %d saida %x \n", BytePtr, Length, saida);
    fclose(f);
    dumpMenBin("/var/root/LoadBag.bin", (void *)*saida, 1024 * 10);
    return retorno;
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

    void *addr_LoadBag = (void *)image + (0x100012698 - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_LoadBag);
    dumpMem(f, (uint8_t *)addr_LoadBag, 0x100);
    MSHookFunction(addr_LoadBag, (void *)&LoadBag, (void **)&LoadBag_ptr);

    fclose(f);
}