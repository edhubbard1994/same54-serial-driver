#include <stdint.h>

#include "setup.h"
#include "utils.h"
#include "gpio.h"


void test_led_flash() {
    pin_setup();

    for(;;){
        
        delay(2000000);
        pin_write(18, ON);

        delay(2000000);
        pin_write(18, OFF);

        //0x41008000
        //0x41008010
    }
}

int main(void){
    //test_led_flash();

}



void Reset_Handler() {
    stack_begin();
    main();

}