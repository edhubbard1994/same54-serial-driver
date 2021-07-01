#ifndef _SETUP_H
#define _SETUP_H

#include <stdint.h>


//Vector Table index definitions
//===============================
#define STACK_PTR 0
#define PROGRAM_COUNTER 1
//================================


extern _estack; // stack pointer reference from linker


typedef struct { // define vector table type 
    uint32_t*       stack_ptr // initialize stack pointer

} VectorTable;


// create the vector table and link it to .vectors section of memory
static uint32_t* vector_array[64] __attribute__ ((section(".vectors")));

// static const VectorTable vectors = {
//     .stack_ptr = &_estack
//};


void stack_begin();

#endif