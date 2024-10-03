#include <stdint.h>
#include <stdio.h>
#include <substrate.h>
#include <CoreFoundation/CoreFoundation.h>
#include <dirent.h>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <objc/runtime.h>
#include <os/log.h>

#define BASEADDR 0x100000000


void FUN_1000021ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000021ec called\n");
    fclose(f);
}

void FUN_10000231c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000231c called\n");
    fclose(f);
}

void FUN_100003bc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003bc0 called\n");
    fclose(f);
}

void FUN_100003c84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003c84 called\n");
    fclose(f);
}

void FUN_100003e80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100003e80 called\n");
    fclose(f);
}

void FUN_10000400c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000400c called\n");
    fclose(f);
}

void FUN_100004a60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004a60 called\n");
    fclose(f);
}

void FUN_100004b2c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004b2c called\n");
    fclose(f);
}

void FUN_100004b38_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004b38 called\n");
    fclose(f);
}

void FUN_100004c48_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100004c48 called\n");
    fclose(f);
}

void FUN_100005240_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005240 called\n");
    fclose(f);
}

void FUN_100005250_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005250 called\n");
    fclose(f);
}

void FUN_100005258_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005258 called\n");
    fclose(f);
}

void FUN_10000541c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000541c called\n");
    fclose(f);
}

void FUN_100005470_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005470 called\n");
    fclose(f);
}

void FUN_100005a04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005a04 called\n");
    fclose(f);
}

void FUN_100005b58_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005b58 called\n");
    fclose(f);
}

void FUN_100005ba4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100005ba4 called\n");
    fclose(f);
}

void FUN_100007500_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007500 called\n");
    fclose(f);
}

void FUN_100007a28_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007a28 called\n");
    fclose(f);
}

void FUN_100007a6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007a6c called\n");
    fclose(f);
}

void FUN_100007be8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007be8 called\n");
    fclose(f);
}

void FUN_100007c8c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007c8c called\n");
    fclose(f);
}

void FUN_100007c9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007c9c called\n");
    fclose(f);
}

void FUN_100007e0c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100007e0c called\n");
    fclose(f);
}

void FUN_1000082a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000082a0 called\n");
    fclose(f);
}

void FUN_1000082ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000082ec called\n");
    fclose(f);
}

void FUN_1000084a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000084a0 called\n");
    fclose(f);
}

void FUN_100008548_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008548 called\n");
    fclose(f);
}

void FUN_10000857c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000857c called\n");
    fclose(f);
}

void FUN_100008720_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008720 called\n");
    fclose(f);
}

void FUN_100008940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008940 called\n");
    fclose(f);
}

void FUN_100008b60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008b60 called\n");
    fclose(f);
}

void FUN_100008dd0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100008dd0 called\n");
    fclose(f);
}

void FUN_100009244_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009244 called\n");
    fclose(f);
}

void FUN_1000094a8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000094a8 called\n");
    fclose(f);
}

void FUN_10000954c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000954c called\n");
    fclose(f);
}

void FUN_100009588_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009588 called\n");
    fclose(f);
}

void FUN_1000095bc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000095bc called\n");
    fclose(f);
}

void FUN_100009728_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009728 called\n");
    fclose(f);
}

void FUN_1000098c4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098c4 called\n");
    fclose(f);
}

void FUN_1000098cc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098cc called\n");
    fclose(f);
}

void FUN_1000098dc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000098dc called\n");
    fclose(f);
}

void FUN_100009940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009940 called\n");
    fclose(f);
}

void FUN_1000099a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000099a0 called\n");
    fclose(f);
}

void FUN_100009a00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009a00 called\n");
    fclose(f);
}

void FUN_100009a9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009a9c called\n");
    fclose(f);
}

void FUN_100009ab0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009ab0 called\n");
    fclose(f);
}

void FUN_100009aec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009aec called\n");
    fclose(f);
}

void FUN_100009bec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009bec called\n");
    fclose(f);
}

void FUN_100009c90_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009c90 called\n");
    fclose(f);
}

void FUN_100009d30_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100009d30 called\n");
    fclose(f);
}

void FUN_10000a4d0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a4d0 called\n");
    fclose(f);
}

void FUN_10000a4f0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a4f0 called\n");
    fclose(f);
}

void FUN_10000a510_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a510 called\n");
    fclose(f);
}

void FUN_10000a530_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a530 called\n");
    fclose(f);
}

void FUN_10000a590_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a590 called\n");
    fclose(f);
}

void FUN_10000a620_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a620 called\n");
    fclose(f);
}

void FUN_10000a67c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a67c called\n");
    fclose(f);
}

void FUN_10000a708_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a708 called\n");
    fclose(f);
}

void FUN_10000a954_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a954 called\n");
    fclose(f);
}

void FUN_10000a95c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a95c called\n");
    fclose(f);
}

void FUN_10000a9a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000a9a4 called\n");
    fclose(f);
}

void FUN_10000ab68_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ab68 called\n");
    fclose(f);
}

void FUN_10000ace8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ace8 called\n");
    fclose(f);
}

void FUN_10000adac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000adac called\n");
    fclose(f);
}

void FUN_10000ae88_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ae88 called\n");
    fclose(f);
}

void FUN_10000af5c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000af5c called\n");
    fclose(f);
}

void FUN_10000afe8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000afe8 called\n");
    fclose(f);
}

void FUN_10000b088_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b088 called\n");
    fclose(f);
}

void FUN_10000b100_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b100 called\n");
    fclose(f);
}

void FUN_10000b200_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b200 called\n");
    fclose(f);
}

void FUN_10000b238_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b238 called\n");
    fclose(f);
}

void FUN_10000b278_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b278 called\n");
    fclose(f);
}

void FUN_10000b2c4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b2c4 called\n");
    fclose(f);
}

void FUN_10000b450_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b450 called\n");
    fclose(f);
}

void FUN_10000b4c8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b4c8 called\n");
    fclose(f);
}

void FUN_10000b61c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b61c called\n");
    fclose(f);
}

void FUN_10000b624_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b624 called\n");
    fclose(f);
}

void FUN_10000b884_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b884 called\n");
    fclose(f);
}

void FUN_10000b8d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b8d8 called\n");
    fclose(f);
}

void FUN_10000b91c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b91c called\n");
    fclose(f);
}

void FUN_10000b958_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000b958 called\n");
    fclose(f);
}

void FUN_10000bc28_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bc28 called\n");
    fclose(f);
}

void FUN_10000bcb0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bcb0 called\n");
    fclose(f);
}

void FUN_10000bd70_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bd70 called\n");
    fclose(f);
}

void FUN_10000be4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000be4c called\n");
    fclose(f);
}

void FUN_10000bfa4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfa4 called\n");
    fclose(f);
}

void FUN_10000bfb4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfb4 called\n");
    fclose(f);
}

void FUN_10000bfc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000bfc0 called\n");
    fclose(f);
}

void FUN_10000c040_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c040 called\n");
    fclose(f);
}

void FUN_10000c198_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c198 called\n");
    fclose(f);
}

void FUN_10000c218_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c218 called\n");
    fclose(f);
}

void FUN_10000c5d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c5d8 called\n");
    fclose(f);
}

void FUN_10000c63c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c63c called\n");
    fclose(f);
}

void FUN_10000c918_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000c918 called\n");
    fclose(f);
}

void FUN_10000cacc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cacc called\n");
    fclose(f);
}

void FUN_10000cad8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cad8 called\n");
    fclose(f);
}

void FUN_10000cb6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb6c called\n");
    fclose(f);
}

void FUN_10000cb7c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb7c called\n");
    fclose(f);
}

void FUN_10000cb88_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cb88 called\n");
    fclose(f);
}

void FUN_10000cbac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cbac called\n");
    fclose(f);
}

void FUN_10000cd14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cd14 called\n");
    fclose(f);
}

void FUN_10000cf68_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000cf68 called\n");
    fclose(f);
}

void FUN_10000d094_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d094 called\n");
    fclose(f);
}

void FUN_10000d1c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d1c0 called\n");
    fclose(f);
}

void FUN_10000d2ec_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d2ec called\n");
    fclose(f);
}

void FUN_10000d4a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000d4a4 called\n");
    fclose(f);
}

void FUN_10000db5c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000db5c called\n");
    fclose(f);
}

void FUN_10000ddf8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ddf8 called\n");
    fclose(f);
}

void FUN_10000de00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000de00 called\n");
    fclose(f);
}

void FUN_10000decc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000decc called\n");
    fclose(f);
}

void FUN_10000e140_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e140 called\n");
    fclose(f);
}

void FUN_10000e424_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e424 called\n");
    fclose(f);
}

void FUN_10000e6a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e6a0 called\n");
    fclose(f);
}

void FUN_10000e774_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000e774 called\n");
    fclose(f);
}

void FUN_10000ef4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ef4c called\n");
    fclose(f);
}

void FUN_10000f07c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f07c called\n");
    fclose(f);
}

void FUN_10000f2b4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f2b4 called\n");
    fclose(f);
}

void FUN_10000f3cc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f3cc called\n");
    fclose(f);
}

void FUN_10000f45c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000f45c called\n");
    fclose(f);
}

void FUN_10000fa38_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fa38 called\n");
    fclose(f);
}

void FUN_10000fc6c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fc6c called\n");
    fclose(f);
}

void FUN_10000fccc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fccc called\n");
    fclose(f);
}

void FUN_10000fd0c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fd0c called\n");
    fclose(f);
}

void FUN_10000fd7c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fd7c called\n");
    fclose(f);
}

void FUN_10000fde4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fde4 called\n");
    fclose(f);
}

void FUN_10000fdf8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fdf8 called\n");
    fclose(f);
}

void FUN_10000fee0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000fee0 called\n");
    fclose(f);
}

void FUN_10000ff04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10000ff04 called\n");
    fclose(f);
}

void FUN_100010204_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010204 called\n");
    fclose(f);
}

void FUN_10001033c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001033c called\n");
    fclose(f);
}

void FUN_1000103d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000103d8 called\n");
    fclose(f);
}

void FUN_100010484_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010484 called\n");
    fclose(f);
}

void FUN_100010780_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010780 called\n");
    fclose(f);
}

void FUN_1000109d8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000109d8 called\n");
    fclose(f);
}

void FUN_100010c04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010c04 called\n");
    fclose(f);
}

void FUN_100010dd0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010dd0 called\n");
    fclose(f);
}

void FUN_100010fe0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100010fe0 called\n");
    fclose(f);
}

void FUN_10001101c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001101c called\n");
    fclose(f);
}

void FUN_10001104c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001104c called\n");
    fclose(f);
}

void FUN_1000110fc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000110fc called\n");
    fclose(f);
}

void FUN_100011180_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011180 called\n");
    fclose(f);
}

void FUN_100011214_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011214 called\n");
    fclose(f);
}

void FUN_10001126c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001126c called\n");
    fclose(f);
}

void FUN_10001137c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001137c called\n");
    fclose(f);
}

void FUN_10001141c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001141c called\n");
    fclose(f);
}

void FUN_100011468_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011468 called\n");
    fclose(f);
}

void FUN_1000114a4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000114a4 called\n");
    fclose(f);
}

void FUN_100011544_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011544 called\n");
    fclose(f);
}

void FUN_10001176c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001176c called\n");
    fclose(f);
}

void FUN_100011824_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011824 called\n");
    fclose(f);
}

void FUN_1000118d0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000118d0 called\n");
    fclose(f);
}

void FUN_100011968_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011968 called\n");
    fclose(f);
}

void FUN_1000119a8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000119a8 called\n");
    fclose(f);
}

void FUN_100011a34_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011a34 called\n");
    fclose(f);
}

void FUN_100011a70_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011a70 called\n");
    fclose(f);
}

void FUN_100011c04_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011c04 called\n");
    fclose(f);
}

void FUN_100011da4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011da4 called\n");
    fclose(f);
}

void FUN_100011e30_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011e30 called\n");
    fclose(f);
}

void FUN_100011fb4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011fb4 called\n");
    fclose(f);
}

void FUN_100011ff0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100011ff0 called\n");
    fclose(f);
}

void FUN_100012018_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012018 called\n");
    fclose(f);
}

void FUN_100012318_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012318 called\n");
    fclose(f);
}

void FUN_100012370_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012370 called\n");
    fclose(f);
}

void FUN_100012450_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012450 called\n");
    fclose(f);
}

void FUN_100012564_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012564 called\n");
    fclose(f);
}

void FUN_100012580_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012580 called\n");
    fclose(f);
}

void FUN_100012758_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012758 called\n");
    fclose(f);
}

void FUN_100012a9c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012a9c called\n");
    fclose(f);
}

void FUN_100012ad8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012ad8 called\n");
    fclose(f);
}

void FUN_100012e84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012e84 called\n");
    fclose(f);
}

void FUN_100012e98_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100012e98 called\n");
    fclose(f);
}

void FUN_100013104_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013104 called\n");
    fclose(f);
}

void FUN_100013624_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013624 called\n");
    fclose(f);
}

void FUN_100013820_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013820 called\n");
    fclose(f);
}

void FUN_100013bfc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013bfc called\n");
    fclose(f);
}

void FUN_100013cf4_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013cf4 called\n");
    fclose(f);
}

void FUN_100013e14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013e14 called\n");
    fclose(f);
}

void FUN_100013fa0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013fa0 called\n");
    fclose(f);
}

void FUN_100013fcc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100013fcc called\n");
    fclose(f);
}

void FUN_10001410c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001410c called\n");
    fclose(f);
}

void FUN_1000141b8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000141b8 called\n");
    fclose(f);
}

void FUN_1000142dc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000142dc called\n");
    fclose(f);
}

void FUN_1000144f0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000144f0 called\n");
    fclose(f);
}

void FUN_100014578_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014578 called\n");
    fclose(f);
}

void FUN_100014c44_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014c44 called\n");
    fclose(f);
}

void FUN_100014d08_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014d08 called\n");
    fclose(f);
}

void FUN_100014e00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014e00 called\n");
    fclose(f);
}

void FUN_100014ed0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014ed0 called\n");
    fclose(f);
}

void FUN_100014fac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100014fac called\n");
    fclose(f);
}

void FUN_100015034_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015034 called\n");
    fclose(f);
}

void FUN_1000150ac_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000150ac called\n");
    fclose(f);
}

void FUN_100015214_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015214 called\n");
    fclose(f);
}

void FUN_1000153b8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000153b8 called\n");
    fclose(f);
}

void FUN_1000154f8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000154f8 called\n");
    fclose(f);
}

void FUN_100015630_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015630 called\n");
    fclose(f);
}

void FUN_1000157fc_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000157fc called\n");
    fclose(f);
}

void FUN_10001580c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_10001580c called\n");
    fclose(f);
}

void FUN_100015a84_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015a84 called\n");
    fclose(f);
}

void FUN_100015b10_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015b10 called\n");
    fclose(f);
}

void FUN_100015be8_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015be8 called\n");
    fclose(f);
}

void FUN_100015c4c_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015c4c called\n");
    fclose(f);
}

void FUN_100015cb0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015cb0 called\n");
    fclose(f);
}

void FUN_100015d14_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100015d14 called\n");
    fclose(f);
}

void FUN_100017440_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017440 called\n");
    fclose(f);
}

void FUN_100017460_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017460 called\n");
    fclose(f);
}

void FUN_100017480_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017480 called\n");
    fclose(f);
}

void FUN_1000174a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174a0 called\n");
    fclose(f);
}

void FUN_1000174c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174c0 called\n");
    fclose(f);
}

void FUN_1000174e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000174e0 called\n");
    fclose(f);
}

void FUN_100017500_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017500 called\n");
    fclose(f);
}

void FUN_100017520_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017520 called\n");
    fclose(f);
}

void FUN_100017540_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017540 called\n");
    fclose(f);
}

void FUN_100017560_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017560 called\n");
    fclose(f);
}

void FUN_100017580_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017580 called\n");
    fclose(f);
}

void FUN_1000175a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175a0 called\n");
    fclose(f);
}

void FUN_1000175c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175c0 called\n");
    fclose(f);
}

void FUN_1000175e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000175e0 called\n");
    fclose(f);
}

void FUN_100017600_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017600 called\n");
    fclose(f);
}

void FUN_100017620_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017620 called\n");
    fclose(f);
}

void FUN_100017640_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017640 called\n");
    fclose(f);
}

void FUN_100017660_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017660 called\n");
    fclose(f);
}

void FUN_100017680_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017680 called\n");
    fclose(f);
}

void FUN_1000176a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176a0 called\n");
    fclose(f);
}

void FUN_1000176c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176c0 called\n");
    fclose(f);
}

void FUN_1000176e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000176e0 called\n");
    fclose(f);
}

void FUN_100017700_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017700 called\n");
    fclose(f);
}

void FUN_100017720_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017720 called\n");
    fclose(f);
}

void FUN_100017740_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017740 called\n");
    fclose(f);
}

void FUN_100017760_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017760 called\n");
    fclose(f);
}

void FUN_100017780_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017780 called\n");
    fclose(f);
}

void FUN_1000177a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177a0 called\n");
    fclose(f);
}

void FUN_1000177c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177c0 called\n");
    fclose(f);
}

void FUN_1000177e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000177e0 called\n");
    fclose(f);
}

void FUN_100017800_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017800 called\n");
    fclose(f);
}

void FUN_100017820_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017820 called\n");
    fclose(f);
}

void FUN_100017840_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017840 called\n");
    fclose(f);
}

void FUN_100017860_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017860 called\n");
    fclose(f);
}

void FUN_100017880_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017880 called\n");
    fclose(f);
}

void FUN_1000178a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178a0 called\n");
    fclose(f);
}

void FUN_1000178c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178c0 called\n");
    fclose(f);
}

void FUN_1000178e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000178e0 called\n");
    fclose(f);
}

void FUN_100017900_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017900 called\n");
    fclose(f);
}

void FUN_100017920_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017920 called\n");
    fclose(f);
}

void FUN_100017940_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017940 called\n");
    fclose(f);
}

void FUN_100017960_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017960 called\n");
    fclose(f);
}

void FUN_100017980_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017980 called\n");
    fclose(f);
}

void FUN_1000179a0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179a0 called\n");
    fclose(f);
}

void FUN_1000179c0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179c0 called\n");
    fclose(f);
}

void FUN_1000179e0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_1000179e0 called\n");
    fclose(f);
}

void FUN_100017a00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a00 called\n");
    fclose(f);
}

void FUN_100017a20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a20 called\n");
    fclose(f);
}

void FUN_100017a40_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a40 called\n");
    fclose(f);
}

void FUN_100017a60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a60 called\n");
    fclose(f);
}

void FUN_100017a80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017a80 called\n");
    fclose(f);
}

void FUN_100017aa0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017aa0 called\n");
    fclose(f);
}

void FUN_100017ac0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ac0 called\n");
    fclose(f);
}

void FUN_100017ae0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ae0 called\n");
    fclose(f);
}

void FUN_100017b00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b00 called\n");
    fclose(f);
}

void FUN_100017b20_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b20 called\n");
    fclose(f);
}

void FUN_100017b40_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b40 called\n");
    fclose(f);
}

void FUN_100017b60_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b60 called\n");
    fclose(f);
}

void FUN_100017b80_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017b80 called\n");
    fclose(f);
}

void FUN_100017ba0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017ba0 called\n");
    fclose(f);
}

void FUN_100017bc0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017bc0 called\n");
    fclose(f);
}

void FUN_100017be0_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017be0 called\n");
    fclose(f);
}

void FUN_100017c00_instrument()
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "FUN_100017c00 called\n");
    fclose(f);
}

void keybagdInit(void)
{
    FILE *f = fopen("/var/root/log.txt", "a");
    fprintf(f, "Chegou no init keybagdInit\n");

    // Get the image reference for keybagd
    MSImageRef image = MSGetImageByName("/usr/libexec/keybagd");
    fprintf(f, "Pegou o MSImageRef %x \n", (uint64_t)image);

    // Calculate and hook into FUN_1000021ec
    void *addr_FUN_1000021ec = (void *)image + (0x1000021ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000021ec  %x \n", (uint64_t)addr_FUN_1000021ec);
    MSInstrumentFunction(addr_FUN_1000021ec, (void *)&FUN_1000021ec_instrument);

    // Calculate and hook into FUN_10000231c
    void *addr_FUN_10000231c = (void *)image + (0x10000231c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000231c  %x \n", (uint64_t)addr_FUN_10000231c);
    MSInstrumentFunction(addr_FUN_10000231c, (void *)&FUN_10000231c_instrument);

    // Calculate and hook into FUN_100003bc0
    void *addr_FUN_100003bc0 = (void *)image + (0x100003bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003bc0  %x \n", (uint64_t)addr_FUN_100003bc0);
    MSInstrumentFunction(addr_FUN_100003bc0, (void *)&FUN_100003bc0_instrument);

    // Calculate and hook into FUN_100003c84
    void *addr_FUN_100003c84 = (void *)image + (0x100003c84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003c84  %x \n", (uint64_t)addr_FUN_100003c84);
    MSInstrumentFunction(addr_FUN_100003c84, (void *)&FUN_100003c84_instrument);

    // Calculate and hook into FUN_100003e80
    void *addr_FUN_100003e80 = (void *)image + (0x100003e80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100003e80  %x \n", (uint64_t)addr_FUN_100003e80);
    MSInstrumentFunction(addr_FUN_100003e80, (void *)&FUN_100003e80_instrument);

    // Calculate and hook into FUN_10000400c
    void *addr_FUN_10000400c = (void *)image + (0x10000400c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000400c  %x \n", (uint64_t)addr_FUN_10000400c);
    MSInstrumentFunction(addr_FUN_10000400c, (void *)&FUN_10000400c_instrument);

    // Calculate and hook into FUN_100004a60
    void *addr_FUN_100004a60 = (void *)image + (0x100004a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004a60  %x \n", (uint64_t)addr_FUN_100004a60);
    MSInstrumentFunction(addr_FUN_100004a60, (void *)&FUN_100004a60_instrument);

    // Calculate and hook into FUN_100004b2c
    void *addr_FUN_100004b2c = (void *)image + (0x100004b2c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b2c  %x \n", (uint64_t)addr_FUN_100004b2c);
    MSInstrumentFunction(addr_FUN_100004b2c, (void *)&FUN_100004b2c_instrument);

    // Calculate and hook into FUN_100004b38
    void *addr_FUN_100004b38 = (void *)image + (0x100004b38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004b38  %x \n", (uint64_t)addr_FUN_100004b38);
    MSInstrumentFunction(addr_FUN_100004b38, (void *)&FUN_100004b38_instrument);

    // Calculate and hook into FUN_100004c48
    void *addr_FUN_100004c48 = (void *)image + (0x100004c48 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100004c48  %x \n", (uint64_t)addr_FUN_100004c48);
    MSInstrumentFunction(addr_FUN_100004c48, (void *)&FUN_100004c48_instrument);

    // Calculate and hook into FUN_100005240
    void *addr_FUN_100005240 = (void *)image + (0x100005240 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005240  %x \n", (uint64_t)addr_FUN_100005240);
    MSInstrumentFunction(addr_FUN_100005240, (void *)&FUN_100005240_instrument);

    // Calculate and hook into FUN_100005250
    void *addr_FUN_100005250 = (void *)image + (0x100005250 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005250  %x \n", (uint64_t)addr_FUN_100005250);
    MSInstrumentFunction(addr_FUN_100005250, (void *)&FUN_100005250_instrument);

    // Calculate and hook into FUN_100005258
    void *addr_FUN_100005258 = (void *)image + (0x100005258 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005258  %x \n", (uint64_t)addr_FUN_100005258);
    MSInstrumentFunction(addr_FUN_100005258, (void *)&FUN_100005258_instrument);

    // Calculate and hook into FUN_10000541c
    void *addr_FUN_10000541c = (void *)image + (0x10000541c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000541c  %x \n", (uint64_t)addr_FUN_10000541c);
    MSInstrumentFunction(addr_FUN_10000541c, (void *)&FUN_10000541c_instrument);

    // Calculate and hook into FUN_100005470
    void *addr_FUN_100005470 = (void *)image + (0x100005470 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005470  %x \n", (uint64_t)addr_FUN_100005470);
    MSInstrumentFunction(addr_FUN_100005470, (void *)&FUN_100005470_instrument);

    // Calculate and hook into FUN_100005a04
    void *addr_FUN_100005a04 = (void *)image + (0x100005a04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005a04  %x \n", (uint64_t)addr_FUN_100005a04);
    MSInstrumentFunction(addr_FUN_100005a04, (void *)&FUN_100005a04_instrument);

    // Calculate and hook into FUN_100005b58
    void *addr_FUN_100005b58 = (void *)image + (0x100005b58 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005b58  %x \n", (uint64_t)addr_FUN_100005b58);
    MSInstrumentFunction(addr_FUN_100005b58, (void *)&FUN_100005b58_instrument);

    // Calculate and hook into FUN_100005ba4
    void *addr_FUN_100005ba4 = (void *)image + (0x100005ba4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100005ba4  %x \n", (uint64_t)addr_FUN_100005ba4);
    MSInstrumentFunction(addr_FUN_100005ba4, (void *)&FUN_100005ba4_instrument);

    // Calculate and hook into FUN_100007500
    void *addr_FUN_100007500 = (void *)image + (0x100007500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007500  %x \n", (uint64_t)addr_FUN_100007500);
    MSInstrumentFunction(addr_FUN_100007500, (void *)&FUN_100007500_instrument);

    // Calculate and hook into FUN_100007a28
    void *addr_FUN_100007a28 = (void *)image + (0x100007a28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a28  %x \n", (uint64_t)addr_FUN_100007a28);
    MSInstrumentFunction(addr_FUN_100007a28, (void *)&FUN_100007a28_instrument);

    // Calculate and hook into FUN_100007a6c
    void *addr_FUN_100007a6c = (void *)image + (0x100007a6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007a6c  %x \n", (uint64_t)addr_FUN_100007a6c);
    MSInstrumentFunction(addr_FUN_100007a6c, (void *)&FUN_100007a6c_instrument);

    // Calculate and hook into FUN_100007be8
    void *addr_FUN_100007be8 = (void *)image + (0x100007be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007be8  %x \n", (uint64_t)addr_FUN_100007be8);
    MSInstrumentFunction(addr_FUN_100007be8, (void *)&FUN_100007be8_instrument);

    // Calculate and hook into FUN_100007c8c
    void *addr_FUN_100007c8c = (void *)image + (0x100007c8c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c8c  %x \n", (uint64_t)addr_FUN_100007c8c);
    MSInstrumentFunction(addr_FUN_100007c8c, (void *)&FUN_100007c8c_instrument);

    // Calculate and hook into FUN_100007c9c
    void *addr_FUN_100007c9c = (void *)image + (0x100007c9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007c9c  %x \n", (uint64_t)addr_FUN_100007c9c);
    MSInstrumentFunction(addr_FUN_100007c9c, (void *)&FUN_100007c9c_instrument);

    // Calculate and hook into FUN_100007e0c
    void *addr_FUN_100007e0c = (void *)image + (0x100007e0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100007e0c  %x \n", (uint64_t)addr_FUN_100007e0c);
    MSInstrumentFunction(addr_FUN_100007e0c, (void *)&FUN_100007e0c_instrument);

    // Calculate and hook into FUN_1000082a0
    void *addr_FUN_1000082a0 = (void *)image + (0x1000082a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082a0  %x \n", (uint64_t)addr_FUN_1000082a0);
    MSInstrumentFunction(addr_FUN_1000082a0, (void *)&FUN_1000082a0_instrument);

    // Calculate and hook into FUN_1000082ec
    void *addr_FUN_1000082ec = (void *)image + (0x1000082ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000082ec  %x \n", (uint64_t)addr_FUN_1000082ec);
    MSInstrumentFunction(addr_FUN_1000082ec, (void *)&FUN_1000082ec_instrument);

    // Calculate and hook into FUN_1000084a0
    void *addr_FUN_1000084a0 = (void *)image + (0x1000084a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000084a0  %x \n", (uint64_t)addr_FUN_1000084a0);
    MSInstrumentFunction(addr_FUN_1000084a0, (void *)&FUN_1000084a0_instrument);

    // Calculate and hook into FUN_100008548
    void *addr_FUN_100008548 = (void *)image + (0x100008548 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008548  %x \n", (uint64_t)addr_FUN_100008548);
    MSInstrumentFunction(addr_FUN_100008548, (void *)&FUN_100008548_instrument);

    // Calculate and hook into FUN_10000857c
    void *addr_FUN_10000857c = (void *)image + (0x10000857c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000857c  %x \n", (uint64_t)addr_FUN_10000857c);
    MSInstrumentFunction(addr_FUN_10000857c, (void *)&FUN_10000857c_instrument);

    // Calculate and hook into FUN_100008720
    void *addr_FUN_100008720 = (void *)image + (0x100008720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008720  %x \n", (uint64_t)addr_FUN_100008720);
    MSInstrumentFunction(addr_FUN_100008720, (void *)&FUN_100008720_instrument);

    // Calculate and hook into FUN_100008940
    void *addr_FUN_100008940 = (void *)image + (0x100008940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008940  %x \n", (uint64_t)addr_FUN_100008940);
    MSInstrumentFunction(addr_FUN_100008940, (void *)&FUN_100008940_instrument);

    // Calculate and hook into FUN_100008b60
    void *addr_FUN_100008b60 = (void *)image + (0x100008b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008b60  %x \n", (uint64_t)addr_FUN_100008b60);
    MSInstrumentFunction(addr_FUN_100008b60, (void *)&FUN_100008b60_instrument);

    // Calculate and hook into FUN_100008dd0
    void *addr_FUN_100008dd0 = (void *)image + (0x100008dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100008dd0  %x \n", (uint64_t)addr_FUN_100008dd0);
    MSInstrumentFunction(addr_FUN_100008dd0, (void *)&FUN_100008dd0_instrument);

    // Calculate and hook into FUN_100009244
    void *addr_FUN_100009244 = (void *)image + (0x100009244 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009244  %x \n", (uint64_t)addr_FUN_100009244);
    MSInstrumentFunction(addr_FUN_100009244, (void *)&FUN_100009244_instrument);

    // Calculate and hook into FUN_1000094a8
    void *addr_FUN_1000094a8 = (void *)image + (0x1000094a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000094a8  %x \n", (uint64_t)addr_FUN_1000094a8);
    MSInstrumentFunction(addr_FUN_1000094a8, (void *)&FUN_1000094a8_instrument);

    // Calculate and hook into FUN_10000954c
    void *addr_FUN_10000954c = (void *)image + (0x10000954c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000954c  %x \n", (uint64_t)addr_FUN_10000954c);
    MSInstrumentFunction(addr_FUN_10000954c, (void *)&FUN_10000954c_instrument);

    // Calculate and hook into FUN_100009588
    void *addr_FUN_100009588 = (void *)image + (0x100009588 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009588  %x \n", (uint64_t)addr_FUN_100009588);
    MSInstrumentFunction(addr_FUN_100009588, (void *)&FUN_100009588_instrument);

    // Calculate and hook into FUN_1000095bc
    void *addr_FUN_1000095bc = (void *)image + (0x1000095bc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000095bc  %x \n", (uint64_t)addr_FUN_1000095bc);
    MSInstrumentFunction(addr_FUN_1000095bc, (void *)&FUN_1000095bc_instrument);

    // Calculate and hook into FUN_100009728
    void *addr_FUN_100009728 = (void *)image + (0x100009728 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009728  %x \n", (uint64_t)addr_FUN_100009728);
    MSInstrumentFunction(addr_FUN_100009728, (void *)&FUN_100009728_instrument);

    // Calculate and hook into FUN_1000098c4
    void *addr_FUN_1000098c4 = (void *)image + (0x1000098c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098c4  %x \n", (uint64_t)addr_FUN_1000098c4);
    MSInstrumentFunction(addr_FUN_1000098c4, (void *)&FUN_1000098c4_instrument);

    // Calculate and hook into FUN_1000098cc
    void *addr_FUN_1000098cc = (void *)image + (0x1000098cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098cc  %x \n", (uint64_t)addr_FUN_1000098cc);
    MSInstrumentFunction(addr_FUN_1000098cc, (void *)&FUN_1000098cc_instrument);

    // Calculate and hook into FUN_1000098dc
    void *addr_FUN_1000098dc = (void *)image + (0x1000098dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000098dc  %x \n", (uint64_t)addr_FUN_1000098dc);
    MSInstrumentFunction(addr_FUN_1000098dc, (void *)&FUN_1000098dc_instrument);

    // Calculate and hook into FUN_100009940
    void *addr_FUN_100009940 = (void *)image + (0x100009940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009940  %x \n", (uint64_t)addr_FUN_100009940);
    MSInstrumentFunction(addr_FUN_100009940, (void *)&FUN_100009940_instrument);

    // Calculate and hook into FUN_1000099a0
    void *addr_FUN_1000099a0 = (void *)image + (0x1000099a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000099a0  %x \n", (uint64_t)addr_FUN_1000099a0);
    MSInstrumentFunction(addr_FUN_1000099a0, (void *)&FUN_1000099a0_instrument);

    // Calculate and hook into FUN_100009a00
    void *addr_FUN_100009a00 = (void *)image + (0x100009a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a00  %x \n", (uint64_t)addr_FUN_100009a00);
    MSInstrumentFunction(addr_FUN_100009a00, (void *)&FUN_100009a00_instrument);

    // Calculate and hook into FUN_100009a9c
    void *addr_FUN_100009a9c = (void *)image + (0x100009a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009a9c  %x \n", (uint64_t)addr_FUN_100009a9c);
    MSInstrumentFunction(addr_FUN_100009a9c, (void *)&FUN_100009a9c_instrument);

    // Calculate and hook into FUN_100009ab0
    void *addr_FUN_100009ab0 = (void *)image + (0x100009ab0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009ab0  %x \n", (uint64_t)addr_FUN_100009ab0);
    MSInstrumentFunction(addr_FUN_100009ab0, (void *)&FUN_100009ab0_instrument);

    // Calculate and hook into FUN_100009aec
    void *addr_FUN_100009aec = (void *)image + (0x100009aec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009aec  %x \n", (uint64_t)addr_FUN_100009aec);
    MSInstrumentFunction(addr_FUN_100009aec, (void *)&FUN_100009aec_instrument);

    // Calculate and hook into FUN_100009bec
    void *addr_FUN_100009bec = (void *)image + (0x100009bec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009bec  %x \n", (uint64_t)addr_FUN_100009bec);
    MSInstrumentFunction(addr_FUN_100009bec, (void *)&FUN_100009bec_instrument);

    // Calculate and hook into FUN_100009c90
    void *addr_FUN_100009c90 = (void *)image + (0x100009c90 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009c90  %x \n", (uint64_t)addr_FUN_100009c90);
    MSInstrumentFunction(addr_FUN_100009c90, (void *)&FUN_100009c90_instrument);

    // Calculate and hook into FUN_100009d30
    void *addr_FUN_100009d30 = (void *)image + (0x100009d30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100009d30  %x \n", (uint64_t)addr_FUN_100009d30);
    MSInstrumentFunction(addr_FUN_100009d30, (void *)&FUN_100009d30_instrument);

    // Calculate and hook into FUN_10000a4d0
    void *addr_FUN_10000a4d0 = (void *)image + (0x10000a4d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4d0  %x \n", (uint64_t)addr_FUN_10000a4d0);
    MSInstrumentFunction(addr_FUN_10000a4d0, (void *)&FUN_10000a4d0_instrument);

    // Calculate and hook into FUN_10000a4f0
    void *addr_FUN_10000a4f0 = (void *)image + (0x10000a4f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a4f0  %x \n", (uint64_t)addr_FUN_10000a4f0);
    MSInstrumentFunction(addr_FUN_10000a4f0, (void *)&FUN_10000a4f0_instrument);

    // Calculate and hook into FUN_10000a510
    void *addr_FUN_10000a510 = (void *)image + (0x10000a510 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a510  %x \n", (uint64_t)addr_FUN_10000a510);
    MSInstrumentFunction(addr_FUN_10000a510, (void *)&FUN_10000a510_instrument);

    // Calculate and hook into FUN_10000a530
    void *addr_FUN_10000a530 = (void *)image + (0x10000a530 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a530  %x \n", (uint64_t)addr_FUN_10000a530);
    MSInstrumentFunction(addr_FUN_10000a530, (void *)&FUN_10000a530_instrument);

    // Calculate and hook into FUN_10000a590
    void *addr_FUN_10000a590 = (void *)image + (0x10000a590 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a590  %x \n", (uint64_t)addr_FUN_10000a590);
    MSInstrumentFunction(addr_FUN_10000a590, (void *)&FUN_10000a590_instrument);

    // Calculate and hook into FUN_10000a620
    void *addr_FUN_10000a620 = (void *)image + (0x10000a620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a620  %x \n", (uint64_t)addr_FUN_10000a620);
    MSInstrumentFunction(addr_FUN_10000a620, (void *)&FUN_10000a620_instrument);

    // Calculate and hook into FUN_10000a67c
    void *addr_FUN_10000a67c = (void *)image + (0x10000a67c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a67c  %x \n", (uint64_t)addr_FUN_10000a67c);
    MSInstrumentFunction(addr_FUN_10000a67c, (void *)&FUN_10000a67c_instrument);

    // Calculate and hook into FUN_10000a708
    void *addr_FUN_10000a708 = (void *)image + (0x10000a708 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a708  %x \n", (uint64_t)addr_FUN_10000a708);
    MSInstrumentFunction(addr_FUN_10000a708, (void *)&FUN_10000a708_instrument);

    // Calculate and hook into FUN_10000a954
    void *addr_FUN_10000a954 = (void *)image + (0x10000a954 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a954  %x \n", (uint64_t)addr_FUN_10000a954);
    MSInstrumentFunction(addr_FUN_10000a954, (void *)&FUN_10000a954_instrument);

    // Calculate and hook into FUN_10000a95c
    void *addr_FUN_10000a95c = (void *)image + (0x10000a95c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a95c  %x \n", (uint64_t)addr_FUN_10000a95c);
    MSInstrumentFunction(addr_FUN_10000a95c, (void *)&FUN_10000a95c_instrument);

    // Calculate and hook into FUN_10000a9a4
    void *addr_FUN_10000a9a4 = (void *)image + (0x10000a9a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000a9a4  %x \n", (uint64_t)addr_FUN_10000a9a4);
    MSInstrumentFunction(addr_FUN_10000a9a4, (void *)&FUN_10000a9a4_instrument);

    // Calculate and hook into FUN_10000ab68
    void *addr_FUN_10000ab68 = (void *)image + (0x10000ab68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ab68  %x \n", (uint64_t)addr_FUN_10000ab68);
    MSInstrumentFunction(addr_FUN_10000ab68, (void *)&FUN_10000ab68_instrument);

    // Calculate and hook into FUN_10000ace8
    void *addr_FUN_10000ace8 = (void *)image + (0x10000ace8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ace8  %x \n", (uint64_t)addr_FUN_10000ace8);
    MSInstrumentFunction(addr_FUN_10000ace8, (void *)&FUN_10000ace8_instrument);

    // Calculate and hook into FUN_10000adac
    void *addr_FUN_10000adac = (void *)image + (0x10000adac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000adac  %x \n", (uint64_t)addr_FUN_10000adac);
    MSInstrumentFunction(addr_FUN_10000adac, (void *)&FUN_10000adac_instrument);

    // Calculate and hook into FUN_10000ae88
    void *addr_FUN_10000ae88 = (void *)image + (0x10000ae88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ae88  %x \n", (uint64_t)addr_FUN_10000ae88);
    MSInstrumentFunction(addr_FUN_10000ae88, (void *)&FUN_10000ae88_instrument);

    // Calculate and hook into FUN_10000af5c
    void *addr_FUN_10000af5c = (void *)image + (0x10000af5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000af5c  %x \n", (uint64_t)addr_FUN_10000af5c);
    MSInstrumentFunction(addr_FUN_10000af5c, (void *)&FUN_10000af5c_instrument);

    // Calculate and hook into FUN_10000afe8
    void *addr_FUN_10000afe8 = (void *)image + (0x10000afe8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000afe8  %x \n", (uint64_t)addr_FUN_10000afe8);
    MSInstrumentFunction(addr_FUN_10000afe8, (void *)&FUN_10000afe8_instrument);

    // Calculate and hook into FUN_10000b088
    void *addr_FUN_10000b088 = (void *)image + (0x10000b088 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b088  %x \n", (uint64_t)addr_FUN_10000b088);
    MSInstrumentFunction(addr_FUN_10000b088, (void *)&FUN_10000b088_instrument);

    // Calculate and hook into FUN_10000b100
    void *addr_FUN_10000b100 = (void *)image + (0x10000b100 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b100  %x \n", (uint64_t)addr_FUN_10000b100);
    MSInstrumentFunction(addr_FUN_10000b100, (void *)&FUN_10000b100_instrument);

    // Calculate and hook into FUN_10000b200
    void *addr_FUN_10000b200 = (void *)image + (0x10000b200 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b200  %x \n", (uint64_t)addr_FUN_10000b200);
    MSInstrumentFunction(addr_FUN_10000b200, (void *)&FUN_10000b200_instrument);

    // Calculate and hook into FUN_10000b238
    void *addr_FUN_10000b238 = (void *)image + (0x10000b238 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b238  %x \n", (uint64_t)addr_FUN_10000b238);
    MSInstrumentFunction(addr_FUN_10000b238, (void *)&FUN_10000b238_instrument);

    // Calculate and hook into FUN_10000b278
    void *addr_FUN_10000b278 = (void *)image + (0x10000b278 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b278  %x \n", (uint64_t)addr_FUN_10000b278);
    MSInstrumentFunction(addr_FUN_10000b278, (void *)&FUN_10000b278_instrument);

    // Calculate and hook into FUN_10000b2c4
    void *addr_FUN_10000b2c4 = (void *)image + (0x10000b2c4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b2c4  %x \n", (uint64_t)addr_FUN_10000b2c4);
    MSInstrumentFunction(addr_FUN_10000b2c4, (void *)&FUN_10000b2c4_instrument);

    // Calculate and hook into FUN_10000b450
    void *addr_FUN_10000b450 = (void *)image + (0x10000b450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b450  %x \n", (uint64_t)addr_FUN_10000b450);
    MSInstrumentFunction(addr_FUN_10000b450, (void *)&FUN_10000b450_instrument);

    // Calculate and hook into FUN_10000b4c8
    void *addr_FUN_10000b4c8 = (void *)image + (0x10000b4c8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b4c8  %x \n", (uint64_t)addr_FUN_10000b4c8);
    MSInstrumentFunction(addr_FUN_10000b4c8, (void *)&FUN_10000b4c8_instrument);

    // Calculate and hook into FUN_10000b61c
    void *addr_FUN_10000b61c = (void *)image + (0x10000b61c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b61c  %x \n", (uint64_t)addr_FUN_10000b61c);
    MSInstrumentFunction(addr_FUN_10000b61c, (void *)&FUN_10000b61c_instrument);

    // Calculate and hook into FUN_10000b624
    void *addr_FUN_10000b624 = (void *)image + (0x10000b624 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b624  %x \n", (uint64_t)addr_FUN_10000b624);
    MSInstrumentFunction(addr_FUN_10000b624, (void *)&FUN_10000b624_instrument);

    // Calculate and hook into FUN_10000b884
    void *addr_FUN_10000b884 = (void *)image + (0x10000b884 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b884  %x \n", (uint64_t)addr_FUN_10000b884);
    MSInstrumentFunction(addr_FUN_10000b884, (void *)&FUN_10000b884_instrument);

    // Calculate and hook into FUN_10000b8d8
    void *addr_FUN_10000b8d8 = (void *)image + (0x10000b8d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b8d8  %x \n", (uint64_t)addr_FUN_10000b8d8);
    MSInstrumentFunction(addr_FUN_10000b8d8, (void *)&FUN_10000b8d8_instrument);

    // Calculate and hook into FUN_10000b91c
    void *addr_FUN_10000b91c = (void *)image + (0x10000b91c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b91c  %x \n", (uint64_t)addr_FUN_10000b91c);
    MSInstrumentFunction(addr_FUN_10000b91c, (void *)&FUN_10000b91c_instrument);

    // Calculate and hook into FUN_10000b958
    void *addr_FUN_10000b958 = (void *)image + (0x10000b958 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000b958  %x \n", (uint64_t)addr_FUN_10000b958);
    MSInstrumentFunction(addr_FUN_10000b958, (void *)&FUN_10000b958_instrument);

    // Calculate and hook into FUN_10000bc28
    void *addr_FUN_10000bc28 = (void *)image + (0x10000bc28 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bc28  %x \n", (uint64_t)addr_FUN_10000bc28);
    MSInstrumentFunction(addr_FUN_10000bc28, (void *)&FUN_10000bc28_instrument);

    // Calculate and hook into FUN_10000bcb0
    void *addr_FUN_10000bcb0 = (void *)image + (0x10000bcb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bcb0  %x \n", (uint64_t)addr_FUN_10000bcb0);
    MSInstrumentFunction(addr_FUN_10000bcb0, (void *)&FUN_10000bcb0_instrument);

    // Calculate and hook into FUN_10000bd70
    void *addr_FUN_10000bd70 = (void *)image + (0x10000bd70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bd70  %x \n", (uint64_t)addr_FUN_10000bd70);
    MSInstrumentFunction(addr_FUN_10000bd70, (void *)&FUN_10000bd70_instrument);

    // Calculate and hook into FUN_10000be4c
    void *addr_FUN_10000be4c = (void *)image + (0x10000be4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000be4c  %x \n", (uint64_t)addr_FUN_10000be4c);
    MSInstrumentFunction(addr_FUN_10000be4c, (void *)&FUN_10000be4c_instrument);

    // Calculate and hook into FUN_10000bfa4
    void *addr_FUN_10000bfa4 = (void *)image + (0x10000bfa4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfa4  %x \n", (uint64_t)addr_FUN_10000bfa4);
    MSInstrumentFunction(addr_FUN_10000bfa4, (void *)&FUN_10000bfa4_instrument);

    // Calculate and hook into FUN_10000bfb4
    void *addr_FUN_10000bfb4 = (void *)image + (0x10000bfb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfb4  %x \n", (uint64_t)addr_FUN_10000bfb4);
    MSInstrumentFunction(addr_FUN_10000bfb4, (void *)&FUN_10000bfb4_instrument);

    // Calculate and hook into FUN_10000bfc0
    void *addr_FUN_10000bfc0 = (void *)image + (0x10000bfc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000bfc0  %x \n", (uint64_t)addr_FUN_10000bfc0);
    MSInstrumentFunction(addr_FUN_10000bfc0, (void *)&FUN_10000bfc0_instrument);

    // Calculate and hook into FUN_10000c040
    void *addr_FUN_10000c040 = (void *)image + (0x10000c040 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c040  %x \n", (uint64_t)addr_FUN_10000c040);
    MSInstrumentFunction(addr_FUN_10000c040, (void *)&FUN_10000c040_instrument);

    // Calculate and hook into FUN_10000c198
    void *addr_FUN_10000c198 = (void *)image + (0x10000c198 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c198  %x \n", (uint64_t)addr_FUN_10000c198);
    MSInstrumentFunction(addr_FUN_10000c198, (void *)&FUN_10000c198_instrument);

    // Calculate and hook into FUN_10000c218
    void *addr_FUN_10000c218 = (void *)image + (0x10000c218 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c218  %x \n", (uint64_t)addr_FUN_10000c218);
    MSInstrumentFunction(addr_FUN_10000c218, (void *)&FUN_10000c218_instrument);

    // Calculate and hook into FUN_10000c5d8
    void *addr_FUN_10000c5d8 = (void *)image + (0x10000c5d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c5d8  %x \n", (uint64_t)addr_FUN_10000c5d8);
    MSInstrumentFunction(addr_FUN_10000c5d8, (void *)&FUN_10000c5d8_instrument);

    // Calculate and hook into FUN_10000c63c
    void *addr_FUN_10000c63c = (void *)image + (0x10000c63c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c63c  %x \n", (uint64_t)addr_FUN_10000c63c);
    MSInstrumentFunction(addr_FUN_10000c63c, (void *)&FUN_10000c63c_instrument);

    // Calculate and hook into FUN_10000c918
    void *addr_FUN_10000c918 = (void *)image + (0x10000c918 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000c918  %x \n", (uint64_t)addr_FUN_10000c918);
    MSInstrumentFunction(addr_FUN_10000c918, (void *)&FUN_10000c918_instrument);

    // Calculate and hook into FUN_10000cacc
    void *addr_FUN_10000cacc = (void *)image + (0x10000cacc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cacc  %x \n", (uint64_t)addr_FUN_10000cacc);
    MSInstrumentFunction(addr_FUN_10000cacc, (void *)&FUN_10000cacc_instrument);

    // Calculate and hook into FUN_10000cad8
    void *addr_FUN_10000cad8 = (void *)image + (0x10000cad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cad8  %x \n", (uint64_t)addr_FUN_10000cad8);
    MSInstrumentFunction(addr_FUN_10000cad8, (void *)&FUN_10000cad8_instrument);

    // Calculate and hook into FUN_10000cb6c
    void *addr_FUN_10000cb6c = (void *)image + (0x10000cb6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb6c  %x \n", (uint64_t)addr_FUN_10000cb6c);
    MSInstrumentFunction(addr_FUN_10000cb6c, (void *)&FUN_10000cb6c_instrument);

    // Calculate and hook into FUN_10000cb7c
    void *addr_FUN_10000cb7c = (void *)image + (0x10000cb7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb7c  %x \n", (uint64_t)addr_FUN_10000cb7c);
    MSInstrumentFunction(addr_FUN_10000cb7c, (void *)&FUN_10000cb7c_instrument);

    // Calculate and hook into FUN_10000cb88
    void *addr_FUN_10000cb88 = (void *)image + (0x10000cb88 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cb88  %x \n", (uint64_t)addr_FUN_10000cb88);
    MSInstrumentFunction(addr_FUN_10000cb88, (void *)&FUN_10000cb88_instrument);

    // Calculate and hook into FUN_10000cbac
    void *addr_FUN_10000cbac = (void *)image + (0x10000cbac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cbac  %x \n", (uint64_t)addr_FUN_10000cbac);
    MSInstrumentFunction(addr_FUN_10000cbac, (void *)&FUN_10000cbac_instrument);

    // Calculate and hook into FUN_10000cd14
    void *addr_FUN_10000cd14 = (void *)image + (0x10000cd14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cd14  %x \n", (uint64_t)addr_FUN_10000cd14);
    MSInstrumentFunction(addr_FUN_10000cd14, (void *)&FUN_10000cd14_instrument);

    // Calculate and hook into FUN_10000cf68
    void *addr_FUN_10000cf68 = (void *)image + (0x10000cf68 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000cf68  %x \n", (uint64_t)addr_FUN_10000cf68);
    MSInstrumentFunction(addr_FUN_10000cf68, (void *)&FUN_10000cf68_instrument);

    // Calculate and hook into FUN_10000d094
    void *addr_FUN_10000d094 = (void *)image + (0x10000d094 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d094  %x \n", (uint64_t)addr_FUN_10000d094);
    MSInstrumentFunction(addr_FUN_10000d094, (void *)&FUN_10000d094_instrument);

    // Calculate and hook into FUN_10000d1c0
    void *addr_FUN_10000d1c0 = (void *)image + (0x10000d1c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d1c0  %x \n", (uint64_t)addr_FUN_10000d1c0);
    MSInstrumentFunction(addr_FUN_10000d1c0, (void *)&FUN_10000d1c0_instrument);

    // Calculate and hook into FUN_10000d2ec
    void *addr_FUN_10000d2ec = (void *)image + (0x10000d2ec - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d2ec  %x \n", (uint64_t)addr_FUN_10000d2ec);
    MSInstrumentFunction(addr_FUN_10000d2ec, (void *)&FUN_10000d2ec_instrument);

    // Calculate and hook into FUN_10000d4a4
    void *addr_FUN_10000d4a4 = (void *)image + (0x10000d4a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000d4a4  %x \n", (uint64_t)addr_FUN_10000d4a4);
    MSInstrumentFunction(addr_FUN_10000d4a4, (void *)&FUN_10000d4a4_instrument);

    // Calculate and hook into FUN_10000db5c
    void *addr_FUN_10000db5c = (void *)image + (0x10000db5c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000db5c  %x \n", (uint64_t)addr_FUN_10000db5c);
    MSInstrumentFunction(addr_FUN_10000db5c, (void *)&FUN_10000db5c_instrument);

    // Calculate and hook into FUN_10000ddf8
    void *addr_FUN_10000ddf8 = (void *)image + (0x10000ddf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ddf8  %x \n", (uint64_t)addr_FUN_10000ddf8);
    MSInstrumentFunction(addr_FUN_10000ddf8, (void *)&FUN_10000ddf8_instrument);

    // Calculate and hook into FUN_10000de00
    void *addr_FUN_10000de00 = (void *)image + (0x10000de00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000de00  %x \n", (uint64_t)addr_FUN_10000de00);
    MSInstrumentFunction(addr_FUN_10000de00, (void *)&FUN_10000de00_instrument);

    // Calculate and hook into FUN_10000decc
    void *addr_FUN_10000decc = (void *)image + (0x10000decc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000decc  %x \n", (uint64_t)addr_FUN_10000decc);
    MSInstrumentFunction(addr_FUN_10000decc, (void *)&FUN_10000decc_instrument);

    // Calculate and hook into FUN_10000e140
    void *addr_FUN_10000e140 = (void *)image + (0x10000e140 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e140  %x \n", (uint64_t)addr_FUN_10000e140);
    MSInstrumentFunction(addr_FUN_10000e140, (void *)&FUN_10000e140_instrument);

    // Calculate and hook into FUN_10000e424
    void *addr_FUN_10000e424 = (void *)image + (0x10000e424 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e424  %x \n", (uint64_t)addr_FUN_10000e424);
    MSInstrumentFunction(addr_FUN_10000e424, (void *)&FUN_10000e424_instrument);

    // Calculate and hook into FUN_10000e6a0
    void *addr_FUN_10000e6a0 = (void *)image + (0x10000e6a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e6a0  %x \n", (uint64_t)addr_FUN_10000e6a0);
    MSInstrumentFunction(addr_FUN_10000e6a0, (void *)&FUN_10000e6a0_instrument);

    // Calculate and hook into FUN_10000e774
    void *addr_FUN_10000e774 = (void *)image + (0x10000e774 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000e774  %x \n", (uint64_t)addr_FUN_10000e774);
    MSInstrumentFunction(addr_FUN_10000e774, (void *)&FUN_10000e774_instrument);

    // Calculate and hook into FUN_10000ef4c
    void *addr_FUN_10000ef4c = (void *)image + (0x10000ef4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ef4c  %x \n", (uint64_t)addr_FUN_10000ef4c);
    MSInstrumentFunction(addr_FUN_10000ef4c, (void *)&FUN_10000ef4c_instrument);

    // Calculate and hook into FUN_10000f07c
    void *addr_FUN_10000f07c = (void *)image + (0x10000f07c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f07c  %x \n", (uint64_t)addr_FUN_10000f07c);
    MSInstrumentFunction(addr_FUN_10000f07c, (void *)&FUN_10000f07c_instrument);

    // Calculate and hook into FUN_10000f2b4
    void *addr_FUN_10000f2b4 = (void *)image + (0x10000f2b4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f2b4  %x \n", (uint64_t)addr_FUN_10000f2b4);
    MSInstrumentFunction(addr_FUN_10000f2b4, (void *)&FUN_10000f2b4_instrument);

    // Calculate and hook into FUN_10000f3cc
    void *addr_FUN_10000f3cc = (void *)image + (0x10000f3cc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f3cc  %x \n", (uint64_t)addr_FUN_10000f3cc);
    MSInstrumentFunction(addr_FUN_10000f3cc, (void *)&FUN_10000f3cc_instrument);

    // Calculate and hook into FUN_10000f45c
    void *addr_FUN_10000f45c = (void *)image + (0x10000f45c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000f45c  %x \n", (uint64_t)addr_FUN_10000f45c);
    MSInstrumentFunction(addr_FUN_10000f45c, (void *)&FUN_10000f45c_instrument);

    // Calculate and hook into FUN_10000fa38
    void *addr_FUN_10000fa38 = (void *)image + (0x10000fa38 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fa38  %x \n", (uint64_t)addr_FUN_10000fa38);
    MSInstrumentFunction(addr_FUN_10000fa38, (void *)&FUN_10000fa38_instrument);

    // Calculate and hook into FUN_10000fc6c
    void *addr_FUN_10000fc6c = (void *)image + (0x10000fc6c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fc6c  %x \n", (uint64_t)addr_FUN_10000fc6c);
    MSInstrumentFunction(addr_FUN_10000fc6c, (void *)&FUN_10000fc6c_instrument);

    // Calculate and hook into FUN_10000fccc
    void *addr_FUN_10000fccc = (void *)image + (0x10000fccc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fccc  %x \n", (uint64_t)addr_FUN_10000fccc);
    MSInstrumentFunction(addr_FUN_10000fccc, (void *)&FUN_10000fccc_instrument);

    // Calculate and hook into FUN_10000fd0c
    void *addr_FUN_10000fd0c = (void *)image + (0x10000fd0c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd0c  %x \n", (uint64_t)addr_FUN_10000fd0c);
    MSInstrumentFunction(addr_FUN_10000fd0c, (void *)&FUN_10000fd0c_instrument);

    // Calculate and hook into FUN_10000fd7c
    void *addr_FUN_10000fd7c = (void *)image + (0x10000fd7c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fd7c  %x \n", (uint64_t)addr_FUN_10000fd7c);
    MSInstrumentFunction(addr_FUN_10000fd7c, (void *)&FUN_10000fd7c_instrument);

    // Calculate and hook into FUN_10000fde4
    void *addr_FUN_10000fde4 = (void *)image + (0x10000fde4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fde4  %x \n", (uint64_t)addr_FUN_10000fde4);
    MSInstrumentFunction(addr_FUN_10000fde4, (void *)&FUN_10000fde4_instrument);

    // Calculate and hook into FUN_10000fdf8
    void *addr_FUN_10000fdf8 = (void *)image + (0x10000fdf8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fdf8  %x \n", (uint64_t)addr_FUN_10000fdf8);
    MSInstrumentFunction(addr_FUN_10000fdf8, (void *)&FUN_10000fdf8_instrument);

    // Calculate and hook into FUN_10000fee0
    void *addr_FUN_10000fee0 = (void *)image + (0x10000fee0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000fee0  %x \n", (uint64_t)addr_FUN_10000fee0);
    MSInstrumentFunction(addr_FUN_10000fee0, (void *)&FUN_10000fee0_instrument);

    // Calculate and hook into FUN_10000ff04
    void *addr_FUN_10000ff04 = (void *)image + (0x10000ff04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10000ff04  %x \n", (uint64_t)addr_FUN_10000ff04);
    MSInstrumentFunction(addr_FUN_10000ff04, (void *)&FUN_10000ff04_instrument);

    // Calculate and hook into FUN_100010204
    void *addr_FUN_100010204 = (void *)image + (0x100010204 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010204  %x \n", (uint64_t)addr_FUN_100010204);
    MSInstrumentFunction(addr_FUN_100010204, (void *)&FUN_100010204_instrument);

    // Calculate and hook into FUN_10001033c
    void *addr_FUN_10001033c = (void *)image + (0x10001033c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001033c  %x \n", (uint64_t)addr_FUN_10001033c);
    MSInstrumentFunction(addr_FUN_10001033c, (void *)&FUN_10001033c_instrument);

    // Calculate and hook into FUN_1000103d8
    void *addr_FUN_1000103d8 = (void *)image + (0x1000103d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000103d8  %x \n", (uint64_t)addr_FUN_1000103d8);
    MSInstrumentFunction(addr_FUN_1000103d8, (void *)&FUN_1000103d8_instrument);

    // Calculate and hook into FUN_100010484
    void *addr_FUN_100010484 = (void *)image + (0x100010484 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010484  %x \n", (uint64_t)addr_FUN_100010484);
    MSInstrumentFunction(addr_FUN_100010484, (void *)&FUN_100010484_instrument);

    // Calculate and hook into FUN_100010780
    void *addr_FUN_100010780 = (void *)image + (0x100010780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010780  %x \n", (uint64_t)addr_FUN_100010780);
    MSInstrumentFunction(addr_FUN_100010780, (void *)&FUN_100010780_instrument);

    // Calculate and hook into FUN_1000109d8
    void *addr_FUN_1000109d8 = (void *)image + (0x1000109d8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000109d8  %x \n", (uint64_t)addr_FUN_1000109d8);
    MSInstrumentFunction(addr_FUN_1000109d8, (void *)&FUN_1000109d8_instrument);

    // Calculate and hook into FUN_100010c04
    void *addr_FUN_100010c04 = (void *)image + (0x100010c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010c04  %x \n", (uint64_t)addr_FUN_100010c04);
    MSInstrumentFunction(addr_FUN_100010c04, (void *)&FUN_100010c04_instrument);

    // Calculate and hook into FUN_100010dd0
    void *addr_FUN_100010dd0 = (void *)image + (0x100010dd0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010dd0  %x \n", (uint64_t)addr_FUN_100010dd0);
    MSInstrumentFunction(addr_FUN_100010dd0, (void *)&FUN_100010dd0_instrument);

    // Calculate and hook into FUN_100010fe0
    void *addr_FUN_100010fe0 = (void *)image + (0x100010fe0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100010fe0  %x \n", (uint64_t)addr_FUN_100010fe0);
    MSInstrumentFunction(addr_FUN_100010fe0, (void *)&FUN_100010fe0_instrument);

    // Calculate and hook into FUN_10001101c
    void *addr_FUN_10001101c = (void *)image + (0x10001101c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001101c  %x \n", (uint64_t)addr_FUN_10001101c);
    MSInstrumentFunction(addr_FUN_10001101c, (void *)&FUN_10001101c_instrument);

    // Calculate and hook into FUN_10001104c
    void *addr_FUN_10001104c = (void *)image + (0x10001104c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001104c  %x \n", (uint64_t)addr_FUN_10001104c);
    MSInstrumentFunction(addr_FUN_10001104c, (void *)&FUN_10001104c_instrument);

    // Calculate and hook into FUN_1000110fc
    void *addr_FUN_1000110fc = (void *)image + (0x1000110fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000110fc  %x \n", (uint64_t)addr_FUN_1000110fc);
    MSInstrumentFunction(addr_FUN_1000110fc, (void *)&FUN_1000110fc_instrument);

    // Calculate and hook into FUN_100011180
    void *addr_FUN_100011180 = (void *)image + (0x100011180 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011180  %x \n", (uint64_t)addr_FUN_100011180);
    MSInstrumentFunction(addr_FUN_100011180, (void *)&FUN_100011180_instrument);

    // Calculate and hook into FUN_100011214
    void *addr_FUN_100011214 = (void *)image + (0x100011214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011214  %x \n", (uint64_t)addr_FUN_100011214);
    MSInstrumentFunction(addr_FUN_100011214, (void *)&FUN_100011214_instrument);

    // Calculate and hook into FUN_10001126c
    void *addr_FUN_10001126c = (void *)image + (0x10001126c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001126c  %x \n", (uint64_t)addr_FUN_10001126c);
    MSInstrumentFunction(addr_FUN_10001126c, (void *)&FUN_10001126c_instrument);

    // Calculate and hook into FUN_10001137c
    void *addr_FUN_10001137c = (void *)image + (0x10001137c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001137c  %x \n", (uint64_t)addr_FUN_10001137c);
    MSInstrumentFunction(addr_FUN_10001137c, (void *)&FUN_10001137c_instrument);

    // Calculate and hook into FUN_10001141c
    void *addr_FUN_10001141c = (void *)image + (0x10001141c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001141c  %x \n", (uint64_t)addr_FUN_10001141c);
    MSInstrumentFunction(addr_FUN_10001141c, (void *)&FUN_10001141c_instrument);

    // Calculate and hook into FUN_100011468
    void *addr_FUN_100011468 = (void *)image + (0x100011468 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011468  %x \n", (uint64_t)addr_FUN_100011468);
    MSInstrumentFunction(addr_FUN_100011468, (void *)&FUN_100011468_instrument);

    // Calculate and hook into FUN_1000114a4
    void *addr_FUN_1000114a4 = (void *)image + (0x1000114a4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000114a4  %x \n", (uint64_t)addr_FUN_1000114a4);
    MSInstrumentFunction(addr_FUN_1000114a4, (void *)&FUN_1000114a4_instrument);

    // Calculate and hook into FUN_100011544
    void *addr_FUN_100011544 = (void *)image + (0x100011544 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011544  %x \n", (uint64_t)addr_FUN_100011544);
    MSInstrumentFunction(addr_FUN_100011544, (void *)&FUN_100011544_instrument);

    // Calculate and hook into FUN_10001176c
    void *addr_FUN_10001176c = (void *)image + (0x10001176c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001176c  %x \n", (uint64_t)addr_FUN_10001176c);
    MSInstrumentFunction(addr_FUN_10001176c, (void *)&FUN_10001176c_instrument);

    // Calculate and hook into FUN_100011824
    void *addr_FUN_100011824 = (void *)image + (0x100011824 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011824  %x \n", (uint64_t)addr_FUN_100011824);
    MSInstrumentFunction(addr_FUN_100011824, (void *)&FUN_100011824_instrument);

    // Calculate and hook into FUN_1000118d0
    void *addr_FUN_1000118d0 = (void *)image + (0x1000118d0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000118d0  %x \n", (uint64_t)addr_FUN_1000118d0);
    MSInstrumentFunction(addr_FUN_1000118d0, (void *)&FUN_1000118d0_instrument);

    // Calculate and hook into FUN_100011968
    void *addr_FUN_100011968 = (void *)image + (0x100011968 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011968  %x \n", (uint64_t)addr_FUN_100011968);
    MSInstrumentFunction(addr_FUN_100011968, (void *)&FUN_100011968_instrument);

    // Calculate and hook into FUN_1000119a8
    void *addr_FUN_1000119a8 = (void *)image + (0x1000119a8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000119a8  %x \n", (uint64_t)addr_FUN_1000119a8);
    MSInstrumentFunction(addr_FUN_1000119a8, (void *)&FUN_1000119a8_instrument);

    // Calculate and hook into FUN_100011a34
    void *addr_FUN_100011a34 = (void *)image + (0x100011a34 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a34  %x \n", (uint64_t)addr_FUN_100011a34);
    MSInstrumentFunction(addr_FUN_100011a34, (void *)&FUN_100011a34_instrument);

    // Calculate and hook into FUN_100011a70
    void *addr_FUN_100011a70 = (void *)image + (0x100011a70 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011a70  %x \n", (uint64_t)addr_FUN_100011a70);
    MSInstrumentFunction(addr_FUN_100011a70, (void *)&FUN_100011a70_instrument);

    // Calculate and hook into FUN_100011c04
    void *addr_FUN_100011c04 = (void *)image + (0x100011c04 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011c04  %x \n", (uint64_t)addr_FUN_100011c04);
    MSInstrumentFunction(addr_FUN_100011c04, (void *)&FUN_100011c04_instrument);

    // Calculate and hook into FUN_100011da4
    void *addr_FUN_100011da4 = (void *)image + (0x100011da4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011da4  %x \n", (uint64_t)addr_FUN_100011da4);
    MSInstrumentFunction(addr_FUN_100011da4, (void *)&FUN_100011da4_instrument);

    // Calculate and hook into FUN_100011e30
    void *addr_FUN_100011e30 = (void *)image + (0x100011e30 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011e30  %x \n", (uint64_t)addr_FUN_100011e30);
    MSInstrumentFunction(addr_FUN_100011e30, (void *)&FUN_100011e30_instrument);

    // Calculate and hook into FUN_100011fb4
    void *addr_FUN_100011fb4 = (void *)image + (0x100011fb4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011fb4  %x \n", (uint64_t)addr_FUN_100011fb4);
    MSInstrumentFunction(addr_FUN_100011fb4, (void *)&FUN_100011fb4_instrument);

    // Calculate and hook into FUN_100011ff0
    void *addr_FUN_100011ff0 = (void *)image + (0x100011ff0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100011ff0  %x \n", (uint64_t)addr_FUN_100011ff0);
    MSInstrumentFunction(addr_FUN_100011ff0, (void *)&FUN_100011ff0_instrument);

    // Calculate and hook into FUN_100012018
    void *addr_FUN_100012018 = (void *)image + (0x100012018 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012018  %x \n", (uint64_t)addr_FUN_100012018);
    MSInstrumentFunction(addr_FUN_100012018, (void *)&FUN_100012018_instrument);

    // Calculate and hook into FUN_100012318
    void *addr_FUN_100012318 = (void *)image + (0x100012318 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012318  %x \n", (uint64_t)addr_FUN_100012318);
    MSInstrumentFunction(addr_FUN_100012318, (void *)&FUN_100012318_instrument);

    // Calculate and hook into FUN_100012370
    void *addr_FUN_100012370 = (void *)image + (0x100012370 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012370  %x \n", (uint64_t)addr_FUN_100012370);
    MSInstrumentFunction(addr_FUN_100012370, (void *)&FUN_100012370_instrument);

    // Calculate and hook into FUN_100012450
    void *addr_FUN_100012450 = (void *)image + (0x100012450 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012450  %x \n", (uint64_t)addr_FUN_100012450);
    MSInstrumentFunction(addr_FUN_100012450, (void *)&FUN_100012450_instrument);

    // Calculate and hook into FUN_100012564
    void *addr_FUN_100012564 = (void *)image + (0x100012564 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012564  %x \n", (uint64_t)addr_FUN_100012564);
    MSInstrumentFunction(addr_FUN_100012564, (void *)&FUN_100012564_instrument);

    // Calculate and hook into FUN_100012580
    void *addr_FUN_100012580 = (void *)image + (0x100012580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012580  %x \n", (uint64_t)addr_FUN_100012580);
    MSInstrumentFunction(addr_FUN_100012580, (void *)&FUN_100012580_instrument);

    // Calculate and hook into FUN_100012758
    void *addr_FUN_100012758 = (void *)image + (0x100012758 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012758  %x \n", (uint64_t)addr_FUN_100012758);
    MSInstrumentFunction(addr_FUN_100012758, (void *)&FUN_100012758_instrument);

    // Calculate and hook into FUN_100012a9c
    void *addr_FUN_100012a9c = (void *)image + (0x100012a9c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012a9c  %x \n", (uint64_t)addr_FUN_100012a9c);
    MSInstrumentFunction(addr_FUN_100012a9c, (void *)&FUN_100012a9c_instrument);

    // Calculate and hook into FUN_100012ad8
    void *addr_FUN_100012ad8 = (void *)image + (0x100012ad8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012ad8  %x \n", (uint64_t)addr_FUN_100012ad8);
    MSInstrumentFunction(addr_FUN_100012ad8, (void *)&FUN_100012ad8_instrument);

    // Calculate and hook into FUN_100012e84
    void *addr_FUN_100012e84 = (void *)image + (0x100012e84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e84  %x \n", (uint64_t)addr_FUN_100012e84);
    MSInstrumentFunction(addr_FUN_100012e84, (void *)&FUN_100012e84_instrument);

    // Calculate and hook into FUN_100012e98
    void *addr_FUN_100012e98 = (void *)image + (0x100012e98 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100012e98  %x \n", (uint64_t)addr_FUN_100012e98);
    MSInstrumentFunction(addr_FUN_100012e98, (void *)&FUN_100012e98_instrument);

    // Calculate and hook into FUN_100013104
    void *addr_FUN_100013104 = (void *)image + (0x100013104 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013104  %x \n", (uint64_t)addr_FUN_100013104);
    MSInstrumentFunction(addr_FUN_100013104, (void *)&FUN_100013104_instrument);

    // Calculate and hook into FUN_100013624
    void *addr_FUN_100013624 = (void *)image + (0x100013624 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013624  %x \n", (uint64_t)addr_FUN_100013624);
    MSInstrumentFunction(addr_FUN_100013624, (void *)&FUN_100013624_instrument);

    // Calculate and hook into FUN_100013820
    void *addr_FUN_100013820 = (void *)image + (0x100013820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013820  %x \n", (uint64_t)addr_FUN_100013820);
    MSInstrumentFunction(addr_FUN_100013820, (void *)&FUN_100013820_instrument);

    // Calculate and hook into FUN_100013bfc
    void *addr_FUN_100013bfc = (void *)image + (0x100013bfc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013bfc  %x \n", (uint64_t)addr_FUN_100013bfc);
    MSInstrumentFunction(addr_FUN_100013bfc, (void *)&FUN_100013bfc_instrument);

    // Calculate and hook into FUN_100013cf4
    void *addr_FUN_100013cf4 = (void *)image + (0x100013cf4 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013cf4  %x \n", (uint64_t)addr_FUN_100013cf4);
    MSInstrumentFunction(addr_FUN_100013cf4, (void *)&FUN_100013cf4_instrument);

    // Calculate and hook into FUN_100013e14
    void *addr_FUN_100013e14 = (void *)image + (0x100013e14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013e14  %x \n", (uint64_t)addr_FUN_100013e14);
    MSInstrumentFunction(addr_FUN_100013e14, (void *)&FUN_100013e14_instrument);

    // Calculate and hook into FUN_100013fa0
    void *addr_FUN_100013fa0 = (void *)image + (0x100013fa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fa0  %x \n", (uint64_t)addr_FUN_100013fa0);
    MSInstrumentFunction(addr_FUN_100013fa0, (void *)&FUN_100013fa0_instrument);

    // Calculate and hook into FUN_100013fcc
    void *addr_FUN_100013fcc = (void *)image + (0x100013fcc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100013fcc  %x \n", (uint64_t)addr_FUN_100013fcc);
    MSInstrumentFunction(addr_FUN_100013fcc, (void *)&FUN_100013fcc_instrument);

    // Calculate and hook into FUN_10001410c
    void *addr_FUN_10001410c = (void *)image + (0x10001410c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001410c  %x \n", (uint64_t)addr_FUN_10001410c);
    MSInstrumentFunction(addr_FUN_10001410c, (void *)&FUN_10001410c_instrument);

    // Calculate and hook into FUN_1000141b8
    void *addr_FUN_1000141b8 = (void *)image + (0x1000141b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000141b8  %x \n", (uint64_t)addr_FUN_1000141b8);
    MSInstrumentFunction(addr_FUN_1000141b8, (void *)&FUN_1000141b8_instrument);

    // Calculate and hook into FUN_1000142dc
    void *addr_FUN_1000142dc = (void *)image + (0x1000142dc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000142dc  %x \n", (uint64_t)addr_FUN_1000142dc);
    MSInstrumentFunction(addr_FUN_1000142dc, (void *)&FUN_1000142dc_instrument);

    // Calculate and hook into FUN_1000144f0
    void *addr_FUN_1000144f0 = (void *)image + (0x1000144f0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000144f0  %x \n", (uint64_t)addr_FUN_1000144f0);
    MSInstrumentFunction(addr_FUN_1000144f0, (void *)&FUN_1000144f0_instrument);

    // Calculate and hook into FUN_100014578
    void *addr_FUN_100014578 = (void *)image + (0x100014578 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014578  %x \n", (uint64_t)addr_FUN_100014578);
    MSInstrumentFunction(addr_FUN_100014578, (void *)&FUN_100014578_instrument);

    // Calculate and hook into FUN_100014c44
    void *addr_FUN_100014c44 = (void *)image + (0x100014c44 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014c44  %x \n", (uint64_t)addr_FUN_100014c44);
    MSInstrumentFunction(addr_FUN_100014c44, (void *)&FUN_100014c44_instrument);

    // Calculate and hook into FUN_100014d08
    void *addr_FUN_100014d08 = (void *)image + (0x100014d08 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014d08  %x \n", (uint64_t)addr_FUN_100014d08);
    MSInstrumentFunction(addr_FUN_100014d08, (void *)&FUN_100014d08_instrument);

    // Calculate and hook into FUN_100014e00
    void *addr_FUN_100014e00 = (void *)image + (0x100014e00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014e00  %x \n", (uint64_t)addr_FUN_100014e00);
    MSInstrumentFunction(addr_FUN_100014e00, (void *)&FUN_100014e00_instrument);

    // Calculate and hook into FUN_100014ed0
    void *addr_FUN_100014ed0 = (void *)image + (0x100014ed0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014ed0  %x \n", (uint64_t)addr_FUN_100014ed0);
    MSInstrumentFunction(addr_FUN_100014ed0, (void *)&FUN_100014ed0_instrument);

    // Calculate and hook into FUN_100014fac
    void *addr_FUN_100014fac = (void *)image + (0x100014fac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100014fac  %x \n", (uint64_t)addr_FUN_100014fac);
    MSInstrumentFunction(addr_FUN_100014fac, (void *)&FUN_100014fac_instrument);

    // Calculate and hook into FUN_100015034
    void *addr_FUN_100015034 = (void *)image + (0x100015034 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015034  %x \n", (uint64_t)addr_FUN_100015034);
    MSInstrumentFunction(addr_FUN_100015034, (void *)&FUN_100015034_instrument);

    // Calculate and hook into FUN_1000150ac
    void *addr_FUN_1000150ac = (void *)image + (0x1000150ac - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000150ac  %x \n", (uint64_t)addr_FUN_1000150ac);
    MSInstrumentFunction(addr_FUN_1000150ac, (void *)&FUN_1000150ac_instrument);

    // Calculate and hook into FUN_100015214
    void *addr_FUN_100015214 = (void *)image + (0x100015214 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015214  %x \n", (uint64_t)addr_FUN_100015214);
    MSInstrumentFunction(addr_FUN_100015214, (void *)&FUN_100015214_instrument);

    // Calculate and hook into FUN_1000153b8
    void *addr_FUN_1000153b8 = (void *)image + (0x1000153b8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000153b8  %x \n", (uint64_t)addr_FUN_1000153b8);
    MSInstrumentFunction(addr_FUN_1000153b8, (void *)&FUN_1000153b8_instrument);

    // Calculate and hook into FUN_1000154f8
    void *addr_FUN_1000154f8 = (void *)image + (0x1000154f8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000154f8  %x \n", (uint64_t)addr_FUN_1000154f8);
    MSInstrumentFunction(addr_FUN_1000154f8, (void *)&FUN_1000154f8_instrument);

    // Calculate and hook into FUN_100015630
    void *addr_FUN_100015630 = (void *)image + (0x100015630 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015630  %x \n", (uint64_t)addr_FUN_100015630);
    MSInstrumentFunction(addr_FUN_100015630, (void *)&FUN_100015630_instrument);

    // Calculate and hook into FUN_1000157fc
    void *addr_FUN_1000157fc = (void *)image + (0x1000157fc - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000157fc  %x \n", (uint64_t)addr_FUN_1000157fc);
    MSInstrumentFunction(addr_FUN_1000157fc, (void *)&FUN_1000157fc_instrument);

    // Calculate and hook into FUN_10001580c
    void *addr_FUN_10001580c = (void *)image + (0x10001580c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_10001580c  %x \n", (uint64_t)addr_FUN_10001580c);
    MSInstrumentFunction(addr_FUN_10001580c, (void *)&FUN_10001580c_instrument);

    // Calculate and hook into FUN_100015a84
    void *addr_FUN_100015a84 = (void *)image + (0x100015a84 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015a84  %x \n", (uint64_t)addr_FUN_100015a84);
    MSInstrumentFunction(addr_FUN_100015a84, (void *)&FUN_100015a84_instrument);

    // Calculate and hook into FUN_100015b10
    void *addr_FUN_100015b10 = (void *)image + (0x100015b10 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015b10  %x \n", (uint64_t)addr_FUN_100015b10);
    MSInstrumentFunction(addr_FUN_100015b10, (void *)&FUN_100015b10_instrument);

    // Calculate and hook into FUN_100015be8
    void *addr_FUN_100015be8 = (void *)image + (0x100015be8 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015be8  %x \n", (uint64_t)addr_FUN_100015be8);
    MSInstrumentFunction(addr_FUN_100015be8, (void *)&FUN_100015be8_instrument);

    // Calculate and hook into FUN_100015c4c
    void *addr_FUN_100015c4c = (void *)image + (0x100015c4c - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015c4c  %x \n", (uint64_t)addr_FUN_100015c4c);
    MSInstrumentFunction(addr_FUN_100015c4c, (void *)&FUN_100015c4c_instrument);

    // Calculate and hook into FUN_100015cb0
    void *addr_FUN_100015cb0 = (void *)image + (0x100015cb0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015cb0  %x \n", (uint64_t)addr_FUN_100015cb0);
    MSInstrumentFunction(addr_FUN_100015cb0, (void *)&FUN_100015cb0_instrument);

    // Calculate and hook into FUN_100015d14
    void *addr_FUN_100015d14 = (void *)image + (0x100015d14 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100015d14  %x \n", (uint64_t)addr_FUN_100015d14);
    MSInstrumentFunction(addr_FUN_100015d14, (void *)&FUN_100015d14_instrument);

    // Calculate and hook into FUN_100017440
    void *addr_FUN_100017440 = (void *)image + (0x100017440 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017440  %x \n", (uint64_t)addr_FUN_100017440);
    MSInstrumentFunction(addr_FUN_100017440, (void *)&FUN_100017440_instrument);

    // Calculate and hook into FUN_100017460
    void *addr_FUN_100017460 = (void *)image + (0x100017460 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017460  %x \n", (uint64_t)addr_FUN_100017460);
    MSInstrumentFunction(addr_FUN_100017460, (void *)&FUN_100017460_instrument);

    // Calculate and hook into FUN_100017480
    void *addr_FUN_100017480 = (void *)image + (0x100017480 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017480  %x \n", (uint64_t)addr_FUN_100017480);
    MSInstrumentFunction(addr_FUN_100017480, (void *)&FUN_100017480_instrument);

    // Calculate and hook into FUN_1000174a0
    void *addr_FUN_1000174a0 = (void *)image + (0x1000174a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174a0  %x \n", (uint64_t)addr_FUN_1000174a0);
    MSInstrumentFunction(addr_FUN_1000174a0, (void *)&FUN_1000174a0_instrument);

    // Calculate and hook into FUN_1000174c0
    void *addr_FUN_1000174c0 = (void *)image + (0x1000174c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174c0  %x \n", (uint64_t)addr_FUN_1000174c0);
    MSInstrumentFunction(addr_FUN_1000174c0, (void *)&FUN_1000174c0_instrument);

    // Calculate and hook into FUN_1000174e0
    void *addr_FUN_1000174e0 = (void *)image + (0x1000174e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000174e0  %x \n", (uint64_t)addr_FUN_1000174e0);
    MSInstrumentFunction(addr_FUN_1000174e0, (void *)&FUN_1000174e0_instrument);

    // Calculate and hook into FUN_100017500
    void *addr_FUN_100017500 = (void *)image + (0x100017500 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017500  %x \n", (uint64_t)addr_FUN_100017500);
    MSInstrumentFunction(addr_FUN_100017500, (void *)&FUN_100017500_instrument);

    // Calculate and hook into FUN_100017520
    void *addr_FUN_100017520 = (void *)image + (0x100017520 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017520  %x \n", (uint64_t)addr_FUN_100017520);
    MSInstrumentFunction(addr_FUN_100017520, (void *)&FUN_100017520_instrument);

    // Calculate and hook into FUN_100017540
    void *addr_FUN_100017540 = (void *)image + (0x100017540 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017540  %x \n", (uint64_t)addr_FUN_100017540);
    MSInstrumentFunction(addr_FUN_100017540, (void *)&FUN_100017540_instrument);

    // Calculate and hook into FUN_100017560
    void *addr_FUN_100017560 = (void *)image + (0x100017560 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017560  %x \n", (uint64_t)addr_FUN_100017560);
    MSInstrumentFunction(addr_FUN_100017560, (void *)&FUN_100017560_instrument);

    // Calculate and hook into FUN_100017580
    void *addr_FUN_100017580 = (void *)image + (0x100017580 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017580  %x \n", (uint64_t)addr_FUN_100017580);
    MSInstrumentFunction(addr_FUN_100017580, (void *)&FUN_100017580_instrument);

    // Calculate and hook into FUN_1000175a0
    void *addr_FUN_1000175a0 = (void *)image + (0x1000175a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175a0  %x \n", (uint64_t)addr_FUN_1000175a0);
    MSInstrumentFunction(addr_FUN_1000175a0, (void *)&FUN_1000175a0_instrument);

    // Calculate and hook into FUN_1000175c0
    void *addr_FUN_1000175c0 = (void *)image + (0x1000175c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175c0  %x \n", (uint64_t)addr_FUN_1000175c0);
    MSInstrumentFunction(addr_FUN_1000175c0, (void *)&FUN_1000175c0_instrument);

    // Calculate and hook into FUN_1000175e0
    void *addr_FUN_1000175e0 = (void *)image + (0x1000175e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000175e0  %x \n", (uint64_t)addr_FUN_1000175e0);
    MSInstrumentFunction(addr_FUN_1000175e0, (void *)&FUN_1000175e0_instrument);

    // Calculate and hook into FUN_100017600
    void *addr_FUN_100017600 = (void *)image + (0x100017600 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017600  %x \n", (uint64_t)addr_FUN_100017600);
    MSInstrumentFunction(addr_FUN_100017600, (void *)&FUN_100017600_instrument);

    // Calculate and hook into FUN_100017620
    void *addr_FUN_100017620 = (void *)image + (0x100017620 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017620  %x \n", (uint64_t)addr_FUN_100017620);
    MSInstrumentFunction(addr_FUN_100017620, (void *)&FUN_100017620_instrument);

    // Calculate and hook into FUN_100017640
    void *addr_FUN_100017640 = (void *)image + (0x100017640 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017640  %x \n", (uint64_t)addr_FUN_100017640);
    MSInstrumentFunction(addr_FUN_100017640, (void *)&FUN_100017640_instrument);

    // Calculate and hook into FUN_100017660
    void *addr_FUN_100017660 = (void *)image + (0x100017660 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017660  %x \n", (uint64_t)addr_FUN_100017660);
    MSInstrumentFunction(addr_FUN_100017660, (void *)&FUN_100017660_instrument);

    // Calculate and hook into FUN_100017680
    void *addr_FUN_100017680 = (void *)image + (0x100017680 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017680  %x \n", (uint64_t)addr_FUN_100017680);
    MSInstrumentFunction(addr_FUN_100017680, (void *)&FUN_100017680_instrument);

    // Calculate and hook into FUN_1000176a0
    void *addr_FUN_1000176a0 = (void *)image + (0x1000176a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176a0  %x \n", (uint64_t)addr_FUN_1000176a0);
    MSInstrumentFunction(addr_FUN_1000176a0, (void *)&FUN_1000176a0_instrument);

    // Calculate and hook into FUN_1000176c0
    void *addr_FUN_1000176c0 = (void *)image + (0x1000176c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176c0  %x \n", (uint64_t)addr_FUN_1000176c0);
    MSInstrumentFunction(addr_FUN_1000176c0, (void *)&FUN_1000176c0_instrument);

    // Calculate and hook into FUN_1000176e0
    void *addr_FUN_1000176e0 = (void *)image + (0x1000176e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000176e0  %x \n", (uint64_t)addr_FUN_1000176e0);
    MSInstrumentFunction(addr_FUN_1000176e0, (void *)&FUN_1000176e0_instrument);

    // Calculate and hook into FUN_100017700
    void *addr_FUN_100017700 = (void *)image + (0x100017700 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017700  %x \n", (uint64_t)addr_FUN_100017700);
    MSInstrumentFunction(addr_FUN_100017700, (void *)&FUN_100017700_instrument);

    // Calculate and hook into FUN_100017720
    void *addr_FUN_100017720 = (void *)image + (0x100017720 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017720  %x \n", (uint64_t)addr_FUN_100017720);
    MSInstrumentFunction(addr_FUN_100017720, (void *)&FUN_100017720_instrument);

    // Calculate and hook into FUN_100017740
    void *addr_FUN_100017740 = (void *)image + (0x100017740 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017740  %x \n", (uint64_t)addr_FUN_100017740);
    MSInstrumentFunction(addr_FUN_100017740, (void *)&FUN_100017740_instrument);

    // Calculate and hook into FUN_100017760
    void *addr_FUN_100017760 = (void *)image + (0x100017760 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017760  %x \n", (uint64_t)addr_FUN_100017760);
    MSInstrumentFunction(addr_FUN_100017760, (void *)&FUN_100017760_instrument);

    // Calculate and hook into FUN_100017780
    void *addr_FUN_100017780 = (void *)image + (0x100017780 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017780  %x \n", (uint64_t)addr_FUN_100017780);
    MSInstrumentFunction(addr_FUN_100017780, (void *)&FUN_100017780_instrument);

    // Calculate and hook into FUN_1000177a0
    void *addr_FUN_1000177a0 = (void *)image + (0x1000177a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177a0  %x \n", (uint64_t)addr_FUN_1000177a0);
    MSInstrumentFunction(addr_FUN_1000177a0, (void *)&FUN_1000177a0_instrument);

    // Calculate and hook into FUN_1000177c0
    void *addr_FUN_1000177c0 = (void *)image + (0x1000177c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177c0  %x \n", (uint64_t)addr_FUN_1000177c0);
    MSInstrumentFunction(addr_FUN_1000177c0, (void *)&FUN_1000177c0_instrument);

    // Calculate and hook into FUN_1000177e0
    void *addr_FUN_1000177e0 = (void *)image + (0x1000177e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000177e0  %x \n", (uint64_t)addr_FUN_1000177e0);
    MSInstrumentFunction(addr_FUN_1000177e0, (void *)&FUN_1000177e0_instrument);

    // Calculate and hook into FUN_100017800
    void *addr_FUN_100017800 = (void *)image + (0x100017800 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017800  %x \n", (uint64_t)addr_FUN_100017800);
    MSInstrumentFunction(addr_FUN_100017800, (void *)&FUN_100017800_instrument);

    // Calculate and hook into FUN_100017820
    void *addr_FUN_100017820 = (void *)image + (0x100017820 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017820  %x \n", (uint64_t)addr_FUN_100017820);
    MSInstrumentFunction(addr_FUN_100017820, (void *)&FUN_100017820_instrument);

    // Calculate and hook into FUN_100017840
    void *addr_FUN_100017840 = (void *)image + (0x100017840 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017840  %x \n", (uint64_t)addr_FUN_100017840);
    MSInstrumentFunction(addr_FUN_100017840, (void *)&FUN_100017840_instrument);

    // Calculate and hook into FUN_100017860
    void *addr_FUN_100017860 = (void *)image + (0x100017860 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017860  %x \n", (uint64_t)addr_FUN_100017860);
    MSInstrumentFunction(addr_FUN_100017860, (void *)&FUN_100017860_instrument);

    // Calculate and hook into FUN_100017880
    void *addr_FUN_100017880 = (void *)image + (0x100017880 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017880  %x \n", (uint64_t)addr_FUN_100017880);
    MSInstrumentFunction(addr_FUN_100017880, (void *)&FUN_100017880_instrument);

    // Calculate and hook into FUN_1000178a0
    void *addr_FUN_1000178a0 = (void *)image + (0x1000178a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178a0  %x \n", (uint64_t)addr_FUN_1000178a0);
    MSInstrumentFunction(addr_FUN_1000178a0, (void *)&FUN_1000178a0_instrument);

    // Calculate and hook into FUN_1000178c0
    void *addr_FUN_1000178c0 = (void *)image + (0x1000178c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178c0  %x \n", (uint64_t)addr_FUN_1000178c0);
    MSInstrumentFunction(addr_FUN_1000178c0, (void *)&FUN_1000178c0_instrument);

    // Calculate and hook into FUN_1000178e0
    void *addr_FUN_1000178e0 = (void *)image + (0x1000178e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000178e0  %x \n", (uint64_t)addr_FUN_1000178e0);
    MSInstrumentFunction(addr_FUN_1000178e0, (void *)&FUN_1000178e0_instrument);

    // Calculate and hook into FUN_100017900
    void *addr_FUN_100017900 = (void *)image + (0x100017900 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017900  %x \n", (uint64_t)addr_FUN_100017900);
    MSInstrumentFunction(addr_FUN_100017900, (void *)&FUN_100017900_instrument);

    // Calculate and hook into FUN_100017920
    void *addr_FUN_100017920 = (void *)image + (0x100017920 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017920  %x \n", (uint64_t)addr_FUN_100017920);
    MSInstrumentFunction(addr_FUN_100017920, (void *)&FUN_100017920_instrument);

    // Calculate and hook into FUN_100017940
    void *addr_FUN_100017940 = (void *)image + (0x100017940 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017940  %x \n", (uint64_t)addr_FUN_100017940);
    MSInstrumentFunction(addr_FUN_100017940, (void *)&FUN_100017940_instrument);

    // Calculate and hook into FUN_100017960
    void *addr_FUN_100017960 = (void *)image + (0x100017960 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017960  %x \n", (uint64_t)addr_FUN_100017960);
    MSInstrumentFunction(addr_FUN_100017960, (void *)&FUN_100017960_instrument);

    // Calculate and hook into FUN_100017980
    void *addr_FUN_100017980 = (void *)image + (0x100017980 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017980  %x \n", (uint64_t)addr_FUN_100017980);
    MSInstrumentFunction(addr_FUN_100017980, (void *)&FUN_100017980_instrument);

    // Calculate and hook into FUN_1000179a0
    void *addr_FUN_1000179a0 = (void *)image + (0x1000179a0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179a0  %x \n", (uint64_t)addr_FUN_1000179a0);
    MSInstrumentFunction(addr_FUN_1000179a0, (void *)&FUN_1000179a0_instrument);

    // Calculate and hook into FUN_1000179c0
    void *addr_FUN_1000179c0 = (void *)image + (0x1000179c0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179c0  %x \n", (uint64_t)addr_FUN_1000179c0);
    MSInstrumentFunction(addr_FUN_1000179c0, (void *)&FUN_1000179c0_instrument);

    // Calculate and hook into FUN_1000179e0
    void *addr_FUN_1000179e0 = (void *)image + (0x1000179e0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_1000179e0  %x \n", (uint64_t)addr_FUN_1000179e0);
    MSInstrumentFunction(addr_FUN_1000179e0, (void *)&FUN_1000179e0_instrument);

    // Calculate and hook into FUN_100017a00
    void *addr_FUN_100017a00 = (void *)image + (0x100017a00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a00  %x \n", (uint64_t)addr_FUN_100017a00);
    MSInstrumentFunction(addr_FUN_100017a00, (void *)&FUN_100017a00_instrument);

    // Calculate and hook into FUN_100017a20
    void *addr_FUN_100017a20 = (void *)image + (0x100017a20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a20  %x \n", (uint64_t)addr_FUN_100017a20);
    MSInstrumentFunction(addr_FUN_100017a20, (void *)&FUN_100017a20_instrument);

    // Calculate and hook into FUN_100017a40
    void *addr_FUN_100017a40 = (void *)image + (0x100017a40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a40  %x \n", (uint64_t)addr_FUN_100017a40);
    MSInstrumentFunction(addr_FUN_100017a40, (void *)&FUN_100017a40_instrument);

    // Calculate and hook into FUN_100017a60
    void *addr_FUN_100017a60 = (void *)image + (0x100017a60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a60  %x \n", (uint64_t)addr_FUN_100017a60);
    MSInstrumentFunction(addr_FUN_100017a60, (void *)&FUN_100017a60_instrument);

    // Calculate and hook into FUN_100017a80
    void *addr_FUN_100017a80 = (void *)image + (0x100017a80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017a80  %x \n", (uint64_t)addr_FUN_100017a80);
    MSInstrumentFunction(addr_FUN_100017a80, (void *)&FUN_100017a80_instrument);

    // Calculate and hook into FUN_100017aa0
    void *addr_FUN_100017aa0 = (void *)image + (0x100017aa0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017aa0  %x \n", (uint64_t)addr_FUN_100017aa0);
    MSInstrumentFunction(addr_FUN_100017aa0, (void *)&FUN_100017aa0_instrument);

    // Calculate and hook into FUN_100017ac0
    void *addr_FUN_100017ac0 = (void *)image + (0x100017ac0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ac0  %x \n", (uint64_t)addr_FUN_100017ac0);
    MSInstrumentFunction(addr_FUN_100017ac0, (void *)&FUN_100017ac0_instrument);

    // Calculate and hook into FUN_100017ae0
    void *addr_FUN_100017ae0 = (void *)image + (0x100017ae0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ae0  %x \n", (uint64_t)addr_FUN_100017ae0);
    MSInstrumentFunction(addr_FUN_100017ae0, (void *)&FUN_100017ae0_instrument);

    // Calculate and hook into FUN_100017b00
    void *addr_FUN_100017b00 = (void *)image + (0x100017b00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b00  %x \n", (uint64_t)addr_FUN_100017b00);
    MSInstrumentFunction(addr_FUN_100017b00, (void *)&FUN_100017b00_instrument);

    // Calculate and hook into FUN_100017b20
    void *addr_FUN_100017b20 = (void *)image + (0x100017b20 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b20  %x \n", (uint64_t)addr_FUN_100017b20);
    MSInstrumentFunction(addr_FUN_100017b20, (void *)&FUN_100017b20_instrument);

    // Calculate and hook into FUN_100017b40
    void *addr_FUN_100017b40 = (void *)image + (0x100017b40 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b40  %x \n", (uint64_t)addr_FUN_100017b40);
    MSInstrumentFunction(addr_FUN_100017b40, (void *)&FUN_100017b40_instrument);

    // Calculate and hook into FUN_100017b60
    void *addr_FUN_100017b60 = (void *)image + (0x100017b60 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b60  %x \n", (uint64_t)addr_FUN_100017b60);
    MSInstrumentFunction(addr_FUN_100017b60, (void *)&FUN_100017b60_instrument);

    // Calculate and hook into FUN_100017b80
    void *addr_FUN_100017b80 = (void *)image + (0x100017b80 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017b80  %x \n", (uint64_t)addr_FUN_100017b80);
    MSInstrumentFunction(addr_FUN_100017b80, (void *)&FUN_100017b80_instrument);

    // Calculate and hook into FUN_100017ba0
    void *addr_FUN_100017ba0 = (void *)image + (0x100017ba0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017ba0  %x \n", (uint64_t)addr_FUN_100017ba0);
    MSInstrumentFunction(addr_FUN_100017ba0, (void *)&FUN_100017ba0_instrument);

    // Calculate and hook into FUN_100017bc0
    void *addr_FUN_100017bc0 = (void *)image + (0x100017bc0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017bc0  %x \n", (uint64_t)addr_FUN_100017bc0);
    MSInstrumentFunction(addr_FUN_100017bc0, (void *)&FUN_100017bc0_instrument);

    // Calculate and hook into FUN_100017be0
    void *addr_FUN_100017be0 = (void *)image + (0x100017be0 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017be0  %x \n", (uint64_t)addr_FUN_100017be0);
    MSInstrumentFunction(addr_FUN_100017be0, (void *)&FUN_100017be0_instrument);

    // Calculate and hook into FUN_100017c00
    void *addr_FUN_100017c00 = (void *)image + (0x100017c00 - BASEADDR);
    fprintf(f, "Pegou o addr FUN_100017c00  %x \n", (uint64_t)addr_FUN_100017c00);
    MSInstrumentFunction(addr_FUN_100017c00, (void *)&FUN_100017c00_instrument);

    fclose(f);
}
