#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

#include "types.h"

typedef unsigned int pin_num_t;

#define PORT_BASE_VALUE 0x41008000

#define PORT_OUT *( (uint32_t*) 0x41008110) // Direct write to PC18 
#define PORT_DIR_SET *( (uint32_t*) 0x41008108) // Direction set for PC18
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110) // Mode register for PORT C
//uint32_t *pcclear = 0x4100800;

void pin_setup();

void pin_write(const pin_num_t pin, binary_state state);


#endif