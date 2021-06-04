#include <stdint.h>




__attribute__ ((section(".vectors")))
uint32_t *RESET_VECTOR[64];


void system_init(void);