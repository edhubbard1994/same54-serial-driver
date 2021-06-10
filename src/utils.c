#include "utils.h"


void delay (unsigned int time) {
    for ( int k =0; k < time; k++) {
        asm("nop");
    }
}