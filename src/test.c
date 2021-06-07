#include <stdint.h>
//#include "atmel_start.h"

//#include "setup.h"


extern _estack; // stack pointer reference from linker



typedef struct { // define vector table type 
    uint32_t*       stack_ptr // initialize stack pointer

} VectorTable;


// create the vector table and link it to .vectors section of memory
__attribute__ ((section(".vectors")))
const VectorTable vectors = {
    .stack_ptr = &_estack
};


// Setup PORT register for LED flashing
#define PORT_OUT *( (uint32_t*) 0x41008110) // Direct write to PC18 
#define PORT_DIR_SET *( (uint32_t*) 0x41008108) // Direction set for PC18
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110) // Mode register for PORT C
//uint32_t *pcclear = 0x4100800;


// Simple Delay Function
void delay (unsigned int time) {
    for ( int k =0; k < time; k++) {
        asm("nop");
    }
}


int main(void){

    PORT_OUT = (1 << 18);
    PORT_DIR_SET = (1 << 18);
    for(;;){
        
        delay(200000);
        PORT_OUT =  (0 << 18);
        delay(200000);
        PORT_OUT = (1 << 18);
        //0x41008000
        //0x41008010
    }
}



void Reset_Handler() {
    
    asm("mov r0,0\n"
        "ldr r0,[r0]\n"
        "mov sp,r0\n");
    main();

}