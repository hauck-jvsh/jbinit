#include <Security/Security.h>
#include <substrate.h>
#include <stdio.h>
#include <stdint.h>
#include <IOKit/IOMessage.h>
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
void ListIOResources();
void dumpMenBin(const char *fname, uint8_t *addr, uint64_t size);

void dumpMem(FILE *f, uint8_t *addr, uint64_t tam);

void *IOHIDEventSystemClientCreate(void *allocator);

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
    FILE *f = fopen("/var/root/log_hidd.txt", "a");
    fprintf(f, "Tipo evento %s\n", IOHIDEventGetTypeString(tipo));
    fclose(f);
    ListIOResources();
}

void HIDSystemCallback(void *refcon, io_service_t service, natural_t messageType, void *messageArgument)
{
    FILE *f = fopen("/var/root/log_hidd.txt", "a");
    if (f == NULL)
        return;
    fprintf(f, "Message %d\n", messageType);
    fprintf(f, "Argument 0x%x\n", messageArgument);
    dumpMem(f, messageArgument, 0x100);
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
    FILE *f = fopen("/var/root/log_hidd.txt", "a");
    fprintf(f, "chegou no hook\n");
    ListIOResources();

    bool temp = IOHIDEventSystemOpen_ptr(system, keyPressed, target, refcon, unused);
    fprintf(f, "Temp %d\n", temp);
    fclose(f);

    return temp;
}

void hiddInit(void)
{

    FILE *f = fopen("/var/root/log_hidd.txt", "a");
    fprintf(f, "Chegou no init hiddInit\n");
    MSImageRef image = MSGetImageByName("/usr/libexec/hidd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);
    void *addr_IOHIDEventSystemOpen = (void *)image + (0x100003d50 - 0x100000000);
    fprintf(f, "Pegou o addr  %x \n", (uint64_t)addr_IOHIDEventSystemOpen);
    // dumpMem(f, (uint8_t *)addr_IOHIDEventSystemOpen, 0x100);
    MSHookFunction(addr_IOHIDEventSystemOpen, (void *)&IOHIDEventSystemOpen, (void **)&IOHIDEventSystemOpen_ptr);
    fclose(f);
}
void printServicePath(FILE *f, io_registry_entry_t service)
{
    char path[1024];
    kern_return_t kr = IORegistryEntryGetPath(service, kIOServicePlane, path);
    if (kr == KERN_SUCCESS)
    {
        fprintf(f, "Service Path: %s\n", path);
    }
    else
    {
        fprintf(f, "Failed to get service path\n");
    }
}

void ListIOResources()
{
    FILE *f = fopen("/var/root/list_resources.txt", "w");
    fprintf(f, "Inicio da lista\n");
    io_registry_entry_t rootEntry = IORegistryEntryFromPath(kIOMasterPortDefault, kIOServicePlane ":/IOResources");
    if (!rootEntry)
    {
        fprintf(f, "Unable to access IOResources\n");
        return;
    }
    printServicePath(f, rootEntry);
    io_iterator_t iterator;
    kern_return_t kr = IORegistryEntryGetChildIterator(rootEntry, kIOServicePlane, &iterator);
    if (kr != KERN_SUCCESS)
    {
        fprintf(f, "Unable to get child iterator\n");
        IOObjectRelease(rootEntry);
        return;
    }

    io_registry_entry_t service;
    while ((service = IOIteratorNext(iterator)) != 0)
    {
        CFStringRef name = IORegistryEntryCreateCFProperty(service, CFSTR("IOName"), kCFAllocatorDefault, 0);
        if (name)
        {
            char nameBuffer[256];
            CFStringGetCString(name, nameBuffer, sizeof(nameBuffer), kCFStringEncodingUTF8);
            fprintf(f, "Service: %s\n", nameBuffer);
            CFRelease(name);
        }
        else
        {
            fprintf(f, "Service: (unknown)\n");
        }
        printServicePath(f, service);
        IOObjectRelease(service);
    }

    IOObjectRelease(iterator);
    IOObjectRelease(rootEntry);
    fclose(f);
}
