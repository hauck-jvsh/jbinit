#include <Security/Security.h>
#include <substrate.h>
#include <stdio.h>
#include <stdint.h>
#include <IOKit/IOMessage.h>
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
void ListIOResources();
void dump_memory(FILE log, mach_port_t task, mach_vm_address_t start, mach_vm_size_t size, const char *output_file);
void startdump();

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
    startdump();
}

void printServiceInfo(io_registry_entry_t service, int indentLevel, FILE *f)
{
    // Get the service name
    CFStringRef name = IORegistryEntryCreateCFProperty(
        service,
        CFSTR("IOName"),
        kCFAllocatorDefault,
        0);

    // Get the service path
    char path[1024];
    kern_return_t kr = IORegistryEntryGetPath(service, kIOServicePlane, path);

    // Indentation for hierarchy
    for (int i = 0; i < indentLevel; i++)
    {
        fprintf(f, "  ");
    }

    // Print the service info
    if (kr == KERN_SUCCESS)
    {
        if (name)
        {
            char nameBuffer[256];
            CFStringGetCString(name, nameBuffer, sizeof(nameBuffer), kCFStringEncodingUTF8);
            fprintf(f, "Service Name: %s, Path: %s\n", nameBuffer, path);
        }
        else
        {
            fprintf(f, "Service Name: (unknown), Path: %s\n", path);
        }
    }
    else
    {
        fprintf(f, "Failed to get service path\n");
    }

    if (name)
    {
        CFRelease(name);
    }
}

void recursivelyPrintServices(io_registry_entry_t service, int indentLevel, FILE *f)
{
    // Print the current service's info
    printServiceInfo(service, indentLevel, f);

    // Get the iterator for child services
    io_iterator_t iterator;
    kern_return_t kr = IORegistryEntryGetChildIterator(service, kIOServicePlane, &iterator);
    if (kr != KERN_SUCCESS)
    {
        // Unable to get child iterator
        return;
    }

    io_registry_entry_t child;
    while ((child = IOIteratorNext(iterator)) != 0)
    {
        // Recursively print the child services
        recursivelyPrintServices(child, indentLevel + 1, f);

        // Release the child service when done
        IOObjectRelease(child);
    }

    // Release the iterator
    IOObjectRelease(iterator);
}

void dump_memory(FILE log, mach_port_t task, mach_vm_address_t start, mach_vm_size_t size, const char *output_file)
{
    FILE *fp = fopen(output_file, "wb");
    if (!fp)
    {
        fprintf(log, "Error: Unable to open file %s for writing.\n", output_file);
        return;
    }

    mach_vm_address_t address = start;
    mach_vm_size_t chunk_size = 0x1000; // 4 KB per chunk (or choose another suitable size)
    mach_vm_size_t data_size = 0;
    kern_return_t kr;
    uint8_t buffer[chunk_size];

    while (address < start + size)
    {
        // Read memory from the kernel task
        kr = mach_vm_read_overwrite(task, address, chunk_size, (mach_vm_address_t)buffer, &data_size);

        if (kr != KERN_SUCCESS)
        {
            fprintf(log, "Error reading memory at 0x%llx: %s\n", address, mach_error_string(kr));
            break;
        }

        // Write the data to the file
        fwrite(buffer, 1, data_size, fp);

        address += data_size; // Move to the next chunk
    }

    fclose(fp);
    fprintf(log, "Memory dump complete. Saved to %s.\n", output_file);
}

void startdump()
{
    FILE *f = fopen("/var/root/logdump.txt", "w");
    fprintf(f, "Inicio do dump de memoria\n");
    mach_port_t tfp0;
    kern_return_t kr;

    // Attempt to get tfp0 (kernel task port)
    kr = task_for_pid(mach_task_self(), 0, &tfp0);

    if (kr != KERN_SUCCESS)
    {
        fprintf(f, "Failed to get tfp0: %s\n", mach_error_string(kr));
        return;
    }

    fprintf(f, "Successfully obtained tfp0.\n");

    // Define the start and size of the memory region to dump
    mach_vm_address_t start_address = 0x0;   // Start of memory (0x0 for full dump)
    mach_vm_size_t memory_size = 0x10000000; // 256 MB (change this depending on how much you want to dump)

    // Call the dump memory function
    dump_memory(tfp0, start_address, memory_size, "/var/root/memory_dump.bin");
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
    recursivelyPrintServices(rootEntry, 0, f);

    fclose(f);
}
