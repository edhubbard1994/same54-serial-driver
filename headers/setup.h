#ifndef _SETUP_H
#define _SETUP_H

#include <stdint.h>

extern _estack; // stack pointer reference from linker


typedef struct { // define vector table type 
    uint32_t*       stack_ptr // initialize stack pointer

} VectorTable;


// create the vector table and link it to .vectors section of memory
__attribute__ ((section(".vectors")))
static const VectorTable vectors = {
    .stack_ptr = &_estack
};

void stack_begin();

#endif