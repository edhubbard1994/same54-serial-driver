#include <stdint.h>

#include "setup.h"
#include "utils.h"
//#include "gpio.h"
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

int main(void){
    //test_led_flash();
    test_serial();


}



void Reset_Handler() {
    stack_begin();
    main();

}