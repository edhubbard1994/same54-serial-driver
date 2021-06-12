#ifndef __SERIAL_H
#define __SERIAL_H

#define SERCOMM1 0x40003000
#define SERCOMM2 0x40003400


//TODO: MAke this a configurable mode for user
typedef enum {
    UART = 0,
    I2C = 1,
    SPI = 2
} SerialMode;

void setup_serial();

void serial_write(const char *message);

const char *serial_read();



#endif