#include <Security/Security.h>
#include <substrate.h>
#include <stdio.h>
#include <stdint.h>
#define kIOHIDDeviceKey "IOHIDDevice"

void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size);

void dumpMem(FILE *f, uint8_t *addr, uint64_t tam);

typedef void (*IOHIDEventSystemCallback)(void *target, void *refcon, void *service, void *event);

void keyPressed(void *target, void *refcon, void *service, void *event)
{
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "Tecla pressionada");
    fclose(f);
}
Boolean (*IOHIDEventSystemOpen_ptr)(void *system, IOHIDEventSystemCallback callback, void *target, void *refcon, void *unused);

Boolean IOHIDEventSystemOpen(void *system, IOHIDEventSystemCallback callback, void *target, void *refcon, void *unused)
{
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "chegou no hook");
    fclose(f);
    return IOHIDEventSystemOpen_ptr(system, keyPressed, target, refcon, unused);
}

void hiddInit(void)
{
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "Chegou no init hiddInit\n");
    MSImageRef image = MSGetImageByName("/usr/libexec/hidd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);
    void *addr_IOHIDEventSystemOpen = (void *)image + (0x100003d50 - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_IOHIDEventSystemOpen);
    dumpMem(f, (uint8_t *)addr_IOHIDEventSystemOpen, 0x100);
    MSHookFunction(addr_IOHIDEventSystemOpen, (void *)&IOHIDEventSystemOpen, (void **)&IOHIDEventSystemOpen_ptr);

    fclose(f);
}