#include <stdint.h>

#include "setup.h"
#include "utils.h"
#include "gpio.h"
#include "serial.h"


void test_led_flash() {
    pin_setup();

    for(;;){
        
        delay(2000000);
        //pin_write(18, ON);

        delay(2000000);
        //pin_write(18, OFF);

        //0x41008000
        //0x41008010
    }
}

void test_serial() {
    serial_setup();
    for(;;) {

    }
}

void test_gpio_generic() {
    gpio_direction_set(PA,22,ON);
    gpio_direction_set(PB,28,ON);
    gpio_direction_set(PC,6,ON); //led
    gpio_direction_set(PD,8,ON);

    gpio_pin_write(PA,22,ON);
    gpio_pin_write(PB,28,ON);
    gpio_pin_write(PC,6,ON);
    gpio_pin_write(PD,8,ON);
    test_led_flash();

    for(;;) {

    }
}

int main(void){
    //test_led_flash();
    test_gpio_generic();
    
    //test_serial();


}



void Reset_Handler() {
    stack_begin();
    main();

}