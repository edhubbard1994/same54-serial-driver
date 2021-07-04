#include "setup.h"


void stack_begin() {
    
    vector_array[STACK_PTR] = &_estack;
    
    asm("mov r0,0\n"
        "ldr r0,[r0]\n"
        "mov sp,r0\n");
}