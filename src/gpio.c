#include "gpio.h"


void pin_setup(){
    //TODO: make this dynamic
    PORT_OUT = (1 << 18);
    PORT_DIR_SET = (1 << 18);
}


void pin_write(const pin_num_t pin, binary_state state){
    PORT_OUT =  ((int) state << pin);
}

void pin_serial() {
    PINPMUX = 0x03; // Mode D = SERCOMM0 for PC18
    PINCFG0 = 0x1; // Set enable bit (bit 0) to 1   
}

