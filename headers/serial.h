#ifndef __SERIAL_H
#define __SERIAL_H

#include <stdint.h>

#include "gpio.h"

/**
 * @brief Header for the Serial Interface 
 * 
 * See Page 851 in the datasheet 
 * 
 */




//addresses for sercom functions
#define SERCOM0 0x40003000
#define SERCOM1 0x40003400

#define CTRLA0 *((uint32_t *) 0x40003000)
#define CTRLB0 *((uint32_t *) 0x40003004)
#define CTRLC0 *((uint32_t *) 0x40003008)
#define BAUD0 *((uint32_t *) 0x4000300C)
#define LENGTH0 *((uint32_t *) 0x40003022)
#define DATA0 *((uint32_t *) 0x40003028)

//external gclock0


//TODO: Make this a configurable mode for user
typedef enum {
    UART = 0,
    I2C = 1,
    SPI = 2
} SerialMode;

typedef enum {
    SERIAL1 = SERCOM0,
    SERIAL2 = SERCOM1,
}DriverNumber;

typedef struct {
    gpio_port_t port;
    pin_num_t pin;
}SerialPin;

void serial_setup(DriverNumber driver_number,gpio_port_t rx_port,pin_num_t rx_pin);

void serial_init();

void serial_write(const char *message, DriverNumber driver);

const char *serial_read(DriverNumber driver);



#endif