#include "clock.h"

uint32_t* PCHCTRL47 = (uint32_t*) 0x40001C80; //47 indicies to set periphrial linking
uint32_t* PCHCTRL0 = (uint32_t*) 0x40001C20; //11 generator selections

void init_clock() { 



    uint32_t *generator0 = &PCHCTRL0; //Set generator0 settings
    uint32_t *sercom0 = &PCHCTRL47[7]; //get register for SERCOM0
    
    sercom0 = 0x00; //Set generator clock source to clock 0
    *generator0 |= 0x800; //output enable
    *generator0 |= 0x100; //generator enable
    *generator0 |= 0x04; // generator source OSCULP32K



}