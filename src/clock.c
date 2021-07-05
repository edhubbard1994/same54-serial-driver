#include "clock.h"


void init_clock() { 

    uint32_t *generator0 = PCHCTRL0[0]; //Set generator0 settings
    uint32_t *sercom0 = PCHCTRL47[7]; //get register for SERCOM0
    
    sercom0 = 0x00; //Set generator clock source to clock 0
    generator0 |= 0x800;

}