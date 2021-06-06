#include <stdint.h>
//#include "atmel_start.h"

//#include "setup.h"
extern _estack;

__attribute__ ((section(".vectors")))
uint32_t RESET_VECTOR_ARR[64];

#define PORT_OUT *( (uint32_t*) 0x41008110)
#define PORT_DIR_SET *( (uint32_t*) 0x41008108)
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110)
//uint32_t *pcclear = 0x4100800;

void delay (unsigned int time) {
    for ( int k =0; k < time; k++) {
        asm("nop");
    }
}


int main(void){
    //system_init();
    //init_board();
    PORT_OUT = (1 << 18);
    PORT_DIR_SET = (1 << 18);
    for(;;){
        
        delay(2000);
        PORT_OUT =  (0 << 18);
        delay(2000);
        PORT_OUT = (1 << 18);
        //0x41008000
        //0x41008010
    }
}



void Reset_Handler() {
    uint32_t *stack_start;
    stack_start = &RESET_VECTOR_ARR[0];
    stack_start = &_estack;

    asm("mov r0,0\n"
        "ldr r0,[r0]\n"
        "mov sp,r0\n");
    main();

}