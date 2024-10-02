#include <Security/Security.h>
#include <substrate.h>
#include <stdio.h>
#include <stdint.h>
#include <IOKit/IOMessage.h>
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>

void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size);

void dumpMem(FILE *f, uint8_t *addr, uint64_t tam);

void IOHIDEventSystemClientRegisterEventCallback(
    void *client,
    void *callback,
    void *target,
    void *refcon);

int IOHIDEventGetType(void *event);

char *IOHIDEventGetTypeString(int type);

typedef void (*IOHIDEventSystemCallback)(void *target, void *refcon, void *service, void *event);

void keyPressed(void *target, void *refcon, void *service, void *event)
{
    int tipo = IOHIDEventGetType(event);
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "Tecla pressionada %s\n", IOHIDEventGetTypeString(tipo));

    fclose(f);
}

void HIDSystemCallback(void *refcon, io_service_t service, natural_t messageType, void *messageArgument)
{
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "Message %d\n", messageType);
    fprintf(f, "Argument 0x%x\n", messageArgument);
    if (messageType == kIOMessageServiceIsTerminated)
    {
        fprintf(f, "HID system terminated.\n");
    }
    else if (messageType == kIOMessageServiceIsSuspended)
    {
        fprintf(f, "HID system suspended.\n");
    }
    else if (messageType == kIOMessageServiceIsResumed)
    {
        fprintf(f, "HID system resumed.\n");
    }
    else if (messageType == kIOMessageServiceIsRequestingClose)
    {
        fprintf(f, "HID system requesting close.\n");
    }
    fclose(f);
}

Boolean (*IOHIDEventSystemOpen_ptr)(void *system, void *callback, void *target, void *refcon, void *unused);

Boolean IOHIDEventSystemOpen(void *system, void *callback, void *target, void *refcon, void *unused)
{
    FILE *f = fopen("/cores/log_hidd.txt", "a");
    fprintf(f, "chegou no hook\n");
    fclose(f);
    // IOHIDEventSystemClientRegisterEventCallback(system, keyPressed, NULL, NULL);
    return IOHIDEventSystemOpen_ptr(system, HIDSystemCallback, target, refcon, unused);
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