#ifndef __SERIAL_H
#define __SERIAL_H

#include <stdint.h>

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

void setup_serial();

void serial_write(const char *message);

const char *serial_read();



#endif