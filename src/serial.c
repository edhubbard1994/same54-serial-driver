#include "serial.h"
#include  "clock.h"

#include <stdint.h>
#include <string.h>


#define CTRLA(sercom) *((uint32_t *) sercom)
#define CTRLB(sercom) *((uint32_t *)sercom + 0x4)
#define CTRLC(sercom) *((uint32_t *) sercom + 0x8)
#define BAUD(sercom) *((uint32_t *) sercom +0xC)
#define LENGTH(sercom) *((uint32_t *) sercom + 0x22)
#define DATA(sercom) *((uint32_t *) sercom + 0x28)

void serial_setup_old() {
    init_clock();
    pin_serial();
    
    CTRLA0 = 0x01; // Reset all bits
    CTRLA0 |= 0x02; // enable 
    CTRLA0 |= 0x04; // internal clock
    CTRLA0 |= 0x10000000; //asyncronous (UART) mode

    CTRLB0 |= 0x100; //collision detection
    CTRLB0 |= 0x10000; //tx enable
    CTRLB0 |= 0x20000; //rx enable
    
}

void serial_init() {

}


void serial_write(const char *message, DriverNumber driver){
    // Step 1, set Data Register
    // Step 2, Write a value to it
    volatile unsigned int index =  0;

    while( message[index] != '\0' ) {
        DATA(driver) << message[index]; //shift into data register
        ++index;
    }


}



const char *serial_read(DriverNumber driver) {
    return 0;
}

void serial_setup(DriverNumber driver_number,gpio_port_t rx_port,pin_num_t rx_pin) {
    //FOR TESTING USE SERCOM1 pc22-23 / pad 0-1 in IOSet 2 
    init_clock();
    CTRLA(driver_number) |= 0x01; // Reset all bits
    CTRLA(driver_number) |= 0x02; // enable 
    CTRLA(driver_number) |= 0x04; // internal clock
    CTRLA(driver_number) |= 0x10000; // pad 1 for tx 
    CTRLA(driver_number) |= 0x10000000; //asyncronous (UART) mode

    CTRLB(driver_number)|= 0x100; //collision detection
    CTRLB(driver_number) |= 0x10000; //tx enable
    CTRLB(driver_number) |= 0x20000; //rx enable
    BAUD(driver_number) |= 0xFFF0; // bogus baud rate

    gpio_multiplex_mode(rx_port,rx_pin,D); //TEST PC22
    

}