#include "serial.h"

#include <stdint.h>


void serial_setup() {
    uint32_t *ctrl_a = *((u_int32_t *) SERCOMM1);
    ctrl_a = 0x01;
    

}


void serial_write(const char *message){
    // Step 1, set Data Register
    // Step 2, Write a value to it
}



const char *serial_read() {
    return (char *) 0;
}