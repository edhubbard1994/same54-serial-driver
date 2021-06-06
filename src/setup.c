#include "setup.h"


void init_board() {
    //*RESET_VECTOR_ARR[0] = &_estack;

    asm("mov r0,0\n"
        "ldr r0,[r0]\n"
        "mov sp,r0\n");
}