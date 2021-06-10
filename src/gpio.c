#include "gpio.h"


void pin_setup(){
    //TODO: make this dynamic
    PORT_OUT = (1 << 18);
    PORT_DIR_SET = (1 << 18);
}


void pin_write(const pin_num_t pin, binary_state state){
    PORT_OUT =  ((int) state << pin);
}

