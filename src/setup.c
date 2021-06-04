#include "headers/setup.h"


void system_init(void) {
    asm("mov r0,0\n"
        "ldr r0,[r0]\n"
        "mov sp,r0\n");
}