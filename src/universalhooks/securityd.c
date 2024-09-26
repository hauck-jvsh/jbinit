#include <Security/Security.h>
#include <substrate.h>
#include <stdio.h>
#include <stdint.h>
void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size);

void dumpMem(FILE *f, uint8_t *addr, uint64_t tam);

bool (*aksDecryptWithKeybag_ptr)(uint64_t p1, uint64_t p2, int p3, int p4, uint64_t p5, void *p6, uint64_t p7, void *p8, uint64_t p9, void *p10);

bool aksDecryptWithKeybag(uint64_t p1, uint64_t p2, int p3, int p4, uint64_t p5, void *p6, uint64_t p7, void *p8, uint64_t p9, void *p10)
{
    FILE *f = fopen("/var/root/log_securityd.txt", "a");
    fprintf(f, "Entrou no hook aksDecryptWithKeybag\n");
    fprintf(f, "p1 %x p2 %x p3 %x p4 %x p5 %x p6 %x p7 %x p8 %x p9 %x p10 %x\n", p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    bool temp = aksDecryptWithKeybag_ptr(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);

    fprintf(f, "\nP6 dump\n");
    dumpMem(f, p6, 0x20);
    fprintf(f, "\nP8 dump\n");
    dumpMem(f, p8, 0x20);
    fprintf(f, "\nP10 dump\n");
    dumpMem(f, p10, 0x20);
    fclose(f);
    return temp;
}

//#ifdef DEV_BUILD
#if 0
bool SecIsInternalRelease(void);

bool (*orig_SecIsInternalRelease)(void);
bool new_SecIsInternalRelease(void) {
    return true;
}

#endif
void securitydInit(void)
{
//#ifdef DEV_BUILD
#if 0
    MSHookFunction(SecIsInternalRelease, (void*)new_SecIsInternalRelease, (void**)&orig_SecIsInternalRelease);
#endif

    FILE *f = fopen("/var/root/log_securityd.txt", "a");

    fprintf(f, "Init do securityd\n");
    MSImageRef image = MSGetImageByName("/usr/libexec/securityd");

    void *addr_aksDecryptWithKeybag = (void *)image + (0x100036dd - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_aksDecryptWithKeybag);
    dumpMem(f, (uint8_t *)addr_aksDecryptWithKeybag, 0x100);
    MSHookFunction(addr_aksDecryptWithKeybag, (void *)&aksDecryptWithKeybag, (void **)&aksDecryptWithKeybag_ptr);

    fclose(f);
}
