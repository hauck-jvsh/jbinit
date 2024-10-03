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
    fprintf(f, "kbOut antes %x %x\n", (uint64_t)kbOut, (uint64_t)*kbOut);

    uint64_t temp = DecryptKBWithCrypto_ptr(kebagPath, kbOut);

    fprintf(f, "kbOut depois %x %x\n", (uint64_t)kbOut, (uint64_t)*kbOut);
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

bool (*update_volume_uuid_ptr)(const void *dict, const void *kMKBUserSessionVolumeUUIDKey, uint8_t *param_out_buffer, int buffer_size);

bool update_volume_uuid(const void *dict, const void *kMKBUserSessionVolumeUUIDKey, uint8_t *param_out_buffer, int buffer_size)
{
    bool temp = update_volume_uuid_ptr(dict, kMKBUserSessionVolumeUUIDKey, param_out_buffer, buffer_size);
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no hook update_volume_uuid\n");
    fprintf(f, "kMKBUserSessionVolumeUUIDKey %s  size %d \n", kMKBUserSessionVolumeUUIDKey, buffer_size);
    fclose(f);
    char text[1024];
    sprintf(text, "/var/root/UserSessionVolumeUUIDPTR_%d", buffer_size);
    dumpMenBin(text, param_out_buffer, buffer_size);
    return temp;
}

void DecryptKBWithCrypto_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no instrument update_volume_uuid\n");
    fclose(f);
}

uint64_t (*updateofGraceperiodFORUSER_ptr)(int param_1, uint64_t param_2, int param_3, uint64_t param_4);
uint64_t updateofGraceperiodFORUSER(int param_1, uint64_t param_2, int param_3, uint64_t param_4)
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no hook updateofGraceperiodFORUSER \n");
    fprintf(f, "parametros  %x,  %x, %x, %x\n", param_1, param_2, param_3, param_4);
    fclose(f);
    return updateofGraceperiodFORUSER_ptr(param_1, param_2, param_3, param_4);
}

void keybagdInit(void)
{

    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);
    // dumpMem(f, (uint8_t *)image, 0x100);

    void *addr_DecryptKBWithCrypto = (void *)image + (0x10000443c - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_DecryptKBWithCrypto);
    // dumpMem(f, (uint8_t *)addr_DecryptKBWithCrypto, 0x100);
    // MSHookFunction(addr_DecryptKBWithCrypto, (void *)&DecryptKBWithCrypto_hook, (void **)&DecryptKBWithCrypto_ptr);
    MSInstrumentFunction(addr_DecryptKBWithCrypto, (void *)&DecryptKBWithCrypto_instrument);

    void *addr_LoadUserBag = (void *)image + (0x10000285C - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_LoadUserBag);
    // dumpMem(f, (uint8_t *)addr_LoadUserBag, 0x100);
    MSHookFunction(addr_LoadUserBag, (void *)&LoadUserBag, (void **)&LoadUserBag_ptr);

    void *addr_LoadBag = (void *)image + (0x100012698 - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_LoadBag);
    // dumpMem(f, (uint8_t *)addr_LoadBag, 0x100);
    MSHookFunction(addr_LoadBag, (void *)&LoadBag, (void **)&LoadBag_ptr);

    void *addr_update_volume_uuid = (void *)image + (0x10000B278 - 0x100000000);
    fprintf(f, "Pegou o addr update_volume_uuid %x \n", (uint64_t)addr_update_volume_uuid);
    // dumpMem(f, (uint8_t *)addr_update_volume_uuid, 0x100);
    MSHookFunction(addr_update_volume_uuid, (void *)&update_volume_uuid, (void **)&update_volume_uuid_ptr);

    void *addr_updateofGraceperiodFORUSER = (void *)image + (0x100013398 - 0x100000000);
    fprintf(f, "Pegou o addr updateofGraceperiodFORUSER %x \n", (uint64_t)addr_updateofGraceperiodFORUSER);
    dumpMem(f, (uint8_t *)addr_updateofGraceperiodFORUSER, 0x100);
    MSHookFunction(addr_updateofGraceperiodFORUSER, (void *)&updateofGraceperiodFORUSER, (void **)&updateofGraceperiodFORUSER_ptr);

    fclose(f);
}