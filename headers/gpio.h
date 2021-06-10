#define PORT_OUT *( (uint32_t*) 0x41008110) // Direct write to PC18 
#define PORT_DIR_SET *( (uint32_t*) 0x41008108) // Direction set for PC18
#define PORT_PIN_FUNCTION *( (uint32_t*) 0x41008110) // Mode register for PORT C
//uint32_t *pcclear = 0x4100800;


// Simple Delay Function
void delay (unsigned int time);