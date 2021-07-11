#ifndef __CLOCK_H
#define __CLOCK_H

#include <stdint.h>

#define OSCCTL *((uint32_t*) 0x40001000)
#define OSC32KCTRL *((uint32_t*) 0x40001400)

#define GCLK *((uint32_t*) 0x40001C00)



void init_clock();
 



#endif