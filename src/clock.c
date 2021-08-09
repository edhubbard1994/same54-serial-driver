#include "clock.h"

uint32_t* PCHCTRL47 = (uint32_t*) 0x40001C80; //47 indicies to set periphrial linking
uint32_t*  PCHCTRL0 =  ( uint32_t*) 0x40001C20; //11 generator selections

void init_clock() { 



    uint32_t *generator0 = ( uint32_t*) 0x40001C28; //Set generator0 settings

    //TODO: need to get the address of this index correctly
    //uint32_t *sercom0 = &PCHCTRL47[8]; //get register for SERCOM1
    
   
    *generator0 |= (uint32_t) 0x800; //output enable
    *generator0 |= (uint32_t) 0x100; //generator enable
    //*generator0 |= (uint32_t) 0x0; // generator source XOSC0
    *generator0 |= (uint32_t) 0x10000; // set division factor to 1 (raw clock input)

    //*generator0 |= (uint32_t) 0x00; //Set generator clock source to clock 0
    *generator0 |= (uint32_t) 0x40; //enabel the periphrial channel



}