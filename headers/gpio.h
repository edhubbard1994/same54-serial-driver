#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

#include "types.h"

typedef unsigned int pin_num_t;

#define PORT_BASE_VALUE 0x41008000


//TODO: all of these definitions for PC18. Make all of these generic offset values 

#define PORT_OUT *( (uint32_t*) 0x41008110) // Direct write to PC18 
#define PORT_DIR_SET *( (uint32_t*) 0x41008108) // Direction set for PC18
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110) // Mode register for PORT C
#define PINPMUX *( (uint32_t*) 0x41008130)
#define PINCFG0 *( (uint32_t*) 0x41008140)
#define PINCFG31 *( (uint32_t*) 0x4100815f) // completely irrelevant 

//New Dynamic Port Config
#define PORT_A  *( (uint32_t*) 0x41008000)
#define PORT_B  *( (uint32_t*) 0x41008080)
#define PORT_C  *( (uint32_t*) 0x41008100)
#define PORT_D  *( (uint32_t*) 0x41008180)

#define PIN_DIRECTION(port,pin) *(port + 0x08) |= (0x1 << pin)
#define PIN_WRITE(port,pin,state) *(port + 0x10) |= (state << pin)
#define PIN_CONFIG(port,pin,state)  *(port + 0x140 + pin) |= (state)


//uint32_t *pcclear = 0x4100800;

void pin_setup();

void pin_num_setup(pin_num_t pin);

void pin_write(const pin_num_t pin, binary_state state);

void pin_serial();


#endif