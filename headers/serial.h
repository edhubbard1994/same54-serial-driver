#ifndef __SERIAL_H
#define __SERIAL_H

/**
 * @brief Header for the Serial Interface 
 * 
 * See Page 851 in the datasheet 
 * 
 */




//addresses for sercom functions
#define SERCOM0 0x40003000
#define SERCOM1 0x40003400


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