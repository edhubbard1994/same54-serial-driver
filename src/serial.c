#include "serial.h"

#include <stdint.h>
#include <string.h>


void serial_setup() {

    CTRLA0 = 0x01; // Reset all bits
    CTRLA0 |= 0x02; // enable 
    CTRLA0 |= 0x04; // internal clock
    CTRLA0 |= 0x10000000; //asyncronous (UART) mode

    CTRLB0 |= 0x100; //collision detection
    CTRLB0 |= 0x10000; //tx enable
    CTRLB0 |= 0x20000; //rx enable

}


void serial_write(const char *message){
    // Step 1, set Data Register
    // Step 2, Write a value to it
    
}



const char *serial_read() {
    
    return DATA0;
}