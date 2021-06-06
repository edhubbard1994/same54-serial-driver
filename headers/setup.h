#ifndef _SETUP_H
#define _SETUP_H

#include <stdint.h>

extern _estack;

void init_board();

__attribute__ ((section(".vectors")))
uint32_t *RESET_VECTOR_ARR[64];

#endif