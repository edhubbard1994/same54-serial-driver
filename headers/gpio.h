#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

#include "types.h"


#define PORT_OUT *( (uint32_t*) 0x41008110) // Direct write to PC18 
#define PORT_DIR_SET *( (uint32_t*) 0x41008108) // Direction set for PC18
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110) // Mode register for PORT C
#define PINPMUX *( (uint32_t*) 0x41008130)
#define PINCFG0 *( (uint32_t*) 0x41008140)
#define PINCFG31 *( (uint32_t*) 0x4100815f) // completely irrelevant 


typedef unsigned int pin_num_t;

typedef enum {
 //type to represent port address values

    PA = 0x41008000,
    PB = 0x41008080,
    PC = 0x41008100,
    PD = 0x41008180  
} gpio_port_t;


typedef enum {
//Multiplexing functions for pins see datasheet for individual pin defs

    A = 0x0,
    B = 0x1,
    C = 0x2,
    D = 0x3,
    E = 0x4,
    F = 0x5,
    G = 0x6,
    H = 0x7,
    I = 0x8,
    J = 0x9,
    K = 0xA,
    L = 0xB,
    M = 0xC,
    N = 0xD
} gpio_multiplex_mode_t;





//old test functions

void pin_setup();

void pin_num_setup(pin_num_t pin);

void pin_write(const pin_num_t pin, binary_state state);

void pin_serial();

//new dynamic gpio functions
void gpio_direction_set(gpio_port_t port ,pin_num_t pin, binary_state state );
void gpio_pin_write(gpio_port_t port ,pin_num_t pin, binary_state state );
void gpio_multiplex_mode(gpio_port_t port ,pin_num_t pin, gpio_multiplex_mode_t state );


#endif