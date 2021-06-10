#include <stdint.h>

#include "setup.h"
#include "utils.h"
#include "gpio.h"



int main(void){

    pin_setup();

    for(;;){
        
        delay(200000);
        pin_write(18, ON);

        delay(200000);
        pin_write(18, OFF);

        //0x41008000
        //0x41008010
    }
}



void Reset_Handler() {
    stack_begin();
    main();

}