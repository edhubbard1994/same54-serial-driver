#include "gpio.h"


//New Dynamic Port Config
#define PORT_A  *( (uint32_t*) 0x41008000)
#define PORT_B  *( (uint32_t*) 0x41008080)
#define PORT_C  *( (uint32_t*) 0x41008100)
#define PORT_D  *( (uint32_t*) 0x41008180)

#define PIN_DIRECTION(port,pin) *( (uint32_t*) &port + 0x08) |= (0x1 << pin)
#define PIN_WRITE(port,pin,state) *( (uint32_t*) &port + 0x10) |= (state << pin)
#define PIN_CONFIG(port,pin,state)  *( (uint32_t*) &port + 0x140 + pin) |= (state)


void pin_setup(){
    //TODO: make this dynamic
    PORT_OUT = (1 << 18);
    PORT_DIR_SET = (1 << 18);
}

void pin_num_setup(const pin_num_t pin) {
    PORT_OUT = (1 << pin);
}


void pin_write(const pin_num_t pin, binary_state state){
    PORT_OUT =  ((int) state << pin);
}

void pin_serial() {
    PINPMUX = 0x03; // Mode D = SERCOM0 for PC18
    PINCFG0 = 0x1; // Set enable bit (bit 0) to 1   
}

