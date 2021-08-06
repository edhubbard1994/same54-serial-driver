#ifndef _SETUP_H
#define _SETUP_H

#include <stdint.h>


//Vector Table index definitions
//===============================
#define STACK_PTR 0
#define PROGRAM_COUNTER 1
//================================

void Dummy_Handler(void){};

/* Cortex-M4 core handlers */
void NMI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemManage_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMon_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void PM_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCLK_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* OSCCTRL_XOSCFAIL_0, OSCCTRL_XOSCRDY_0 */
void OSCCTRL_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* OSCCTRL_XOSCFAIL_1, OSCCTRL_XOSCRDY_1 */
void OSCCTRL_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* OSCCTRL_DFLLLOCKC, OSCCTRL_DFLLLOCKF, OSCCTRL_DFLLOOB, OSCCTRL_DFLLRCS, OSCCTRL_DFLLRDY */
void OSCCTRL_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* OSCCTRL_DPLLLCKF_0, OSCCTRL_DPLLLCKR_0, OSCCTRL_DPLLLDRTO_0, OSCCTRL_DPLLLTO_0 */
void OSCCTRL_4_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* OSCCTRL_DPLLLCKF_1, OSCCTRL_DPLLLCKR_1, OSCCTRL_DPLLLDRTO_1, OSCCTRL_DPLLLTO_1 */
void OSC32KCTRL_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SUPC_B12SRDY, SUPC_B33SRDY, SUPC_BOD12RDY, SUPC_BOD33RDY, SUPC_VCORERDY, SUPC_VREGRDY */
void SUPC_1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SUPC_BOD12DET, SUPC_BOD33DET */
void WDT_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_0 */
void EIC_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_1 */
void EIC_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_2 */
void EIC_3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_3 */
void EIC_4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_4 */
void EIC_5_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_5 */
void EIC_6_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_6 */
void EIC_7_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_7 */
void EIC_8_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_8 */
void EIC_9_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_9 */
void EIC_10_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_10 */
void EIC_11_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_11 */
void EIC_12_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_12 */
void EIC_13_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_13 */
void EIC_14_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_14 */
void EIC_15_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_EXTINT_15 */
void FREQM_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVMCTRL_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* NVMCTRL_0, NVMCTRL_1, NVMCTRL_2, NVMCTRL_3, NVMCTRL_4, NVMCTRL_5, NVMCTRL_6, NVMCTRL_7 */
void NVMCTRL_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* NVMCTRL_10, NVMCTRL_8, NVMCTRL_9 */
void DMAC_0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* DMAC_SUSP_0, DMAC_TCMPL_0, DMAC_TERR_0 */
void DMAC_1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* DMAC_SUSP_1, DMAC_TCMPL_1, DMAC_TERR_1 */
void DMAC_2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* DMAC_SUSP_2, DMAC_TCMPL_2, DMAC_TERR_2 */
void DMAC_3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* DMAC_SUSP_3, DMAC_TCMPL_3, DMAC_TERR_3 */
void DMAC_4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* DMAC_SUSP_10, DMAC_SUSP_11, DMAC_SUSP_12, DMAC_SUSP_13, DMAC_SUSP_14, DMAC_SUSP_15, DMAC_SUSP_16, DMAC_SUSP_17, DMAC_SUSP_18, DMAC_SUSP_19, DMAC_SUSP_20, DMAC_SUSP_21, DMAC_SUSP_22, DMAC_SUSP_23, DMAC_SUSP_24, DMAC_SUSP_25, DMAC_SUSP_26, DMAC_SUSP_27, DMAC_SUSP_28, DMAC_SUSP_29, DMAC_SUSP_30, DMAC_SUSP_31, DMAC_SUSP_4, DMAC_SUSP_5, DMAC_SUSP_6, DMAC_SUSP_7, DMAC_SUSP_8, DMAC_SUSP_9, DMAC_TCMPL_10, DMAC_TCMPL_11, DMAC_TCMPL_12, DMAC_TCMPL_13, DMAC_TCMPL_14, DMAC_TCMPL_15, DMAC_TCMPL_16, DMAC_TCMPL_17, DMAC_TCMPL_18, DMAC_TCMPL_19, DMAC_TCMPL_20, DMAC_TCMPL_21, DMAC_TCMPL_22, DMAC_TCMPL_23, DMAC_TCMPL_24, DMAC_TCMPL_25, DMAC_TCMPL_26, DMAC_TCMPL_27, DMAC_TCMPL_28, DMAC_TCMPL_29, DMAC_TCMPL_30, DMAC_TCMPL_31, DMAC_TCMPL_4, DMAC_TCMPL_5, DMAC_TCMPL_6, DMAC_TCMPL_7, DMAC_TCMPL_8, DMAC_TCMPL_9, DMAC_TERR_10, DMAC_TERR_11, DMAC_TERR_12, DMAC_TERR_13, DMAC_TERR_14, DMAC_TERR_15, DMAC_TERR_16, DMAC_TERR_17, DMAC_TERR_18, DMAC_TERR_19, DMAC_TERR_20, DMAC_TERR_21, DMAC_TERR_22, DMAC_TERR_23, DMAC_TERR_24, DMAC_TERR_25, DMAC_TERR_26, DMAC_TERR_27, DMAC_TERR_28, DMAC_TERR_29, DMAC_TERR_30, DMAC_TERR_31, DMAC_TERR_4, DMAC_TERR_5, DMAC_TERR_6, DMAC_TERR_7, DMAC_TERR_8, DMAC_TERR_9 */
void EVSYS_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EVSYS_EVD_0, EVSYS_OVR_0 */
void EVSYS_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EVSYS_EVD_1, EVSYS_OVR_1 */
void EVSYS_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EVSYS_EVD_2, EVSYS_OVR_2 */
void EVSYS_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EVSYS_EVD_3, EVSYS_OVR_3 */
void EVSYS_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EVSYS_EVD_10, EVSYS_EVD_11, EVSYS_EVD_4, EVSYS_EVD_5, EVSYS_EVD_6, EVSYS_EVD_7, EVSYS_EVD_8, EVSYS_EVD_9, EVSYS_OVR_10, EVSYS_OVR_11, EVSYS_OVR_4, EVSYS_OVR_5, EVSYS_OVR_6, EVSYS_OVR_7, EVSYS_OVR_8, EVSYS_OVR_9 */
void PAC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TAL_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TAL_BRK */
void TAL_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TAL_IPS_0, TAL_IPS_1 */
void RAMECC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM0_0 */
void SERCOM0_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM0_1 */
void SERCOM0_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM0_2 */
void SERCOM0_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM0_3, SERCOM0_4, SERCOM0_5, SERCOM0_6 */
void SERCOM1_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM1_0 */
void SERCOM1_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM1_1 */
void SERCOM1_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM1_2 */
void SERCOM1_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM1_3, SERCOM1_4, SERCOM1_5, SERCOM1_6 */
void SERCOM2_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM2_0 */
void SERCOM2_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM2_1 */
void SERCOM2_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM2_2 */
void SERCOM2_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM2_3, SERCOM2_4, SERCOM2_5, SERCOM2_6 */
void SERCOM3_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM3_0 */
void SERCOM3_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM3_1 */
void SERCOM3_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM3_2 */
void SERCOM3_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* SERCOM3_3, SERCOM3_4, SERCOM3_5, SERCOM3_6 */



extern _estack; // stack pointer reference from linker


typedef struct { // define vector table type 
    uint32_t*       stack_ptr; // initialize stack pointer
    void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pfnMemManage_Handler;
  void* pfnBusFault_Handler;
  void* pfnUsageFault_Handler;
  void* pvReservedM9;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pfnDebugMon_Handler;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnPM_Handler;                    /*  0 Power Manager */
  void* pfnMCLK_Handler;                  /*  1 Main Clock */
  void* pfnOSCCTRL_0_Handler;             /*  2 Oscillators Control IRQ 0 */
  void* pfnOSCCTRL_1_Handler;             /*  3 Oscillators Control IRQ 1 */
  void* pfnOSCCTRL_2_Handler;             /*  4 Oscillators Control IRQ 2 */
  void* pfnOSCCTRL_3_Handler;             /*  5 Oscillators Control IRQ 3 */
  void* pfnOSCCTRL_4_Handler;             /*  6 Oscillators Control IRQ 4 */
  void* pfnOSC32KCTRL_Handler;            /*  7 32kHz Oscillators Control */
  void* pfnSUPC_0_Handler;                /*  8 Supply Controller IRQ 0 */
  void* pfnSUPC_1_Handler;                /*  9 Supply Controller IRQ 1 */
  void* pfnWDT_Handler;                   /* 10 Watchdog Timer */
  void* pfnRTC_Handler;                   /* 11 Real-Time Counter */
  void* pfnEIC_0_Handler;                 /* 12 External Interrupt Controller IRQ 0 */
  void* pfnEIC_1_Handler;                 /* 13 External Interrupt Controller IRQ 1 */
  void* pfnEIC_2_Handler;                 /* 14 External Interrupt Controller IRQ 2 */
  void* pfnEIC_3_Handler;                 /* 15 External Interrupt Controller IRQ 3 */
  void* pfnEIC_4_Handler;                 /* 16 External Interrupt Controller IRQ 4 */
  void* pfnEIC_5_Handler;                 /* 17 External Interrupt Controller IRQ 5 */
  void* pfnEIC_6_Handler;                 /* 18 External Interrupt Controller IRQ 6 */
  void* pfnEIC_7_Handler;                 /* 19 External Interrupt Controller IRQ 7 */
  void* pfnEIC_8_Handler;                 /* 20 External Interrupt Controller IRQ 8 */
  void* pfnEIC_9_Handler;                 /* 21 External Interrupt Controller IRQ 9 */
  void* pfnEIC_10_Handler;                /* 22 External Interrupt Controller IRQ 10 */
  void* pfnEIC_11_Handler;                /* 23 External Interrupt Controller IRQ 11 */
  void* pfnEIC_12_Handler;                /* 24 External Interrupt Controller IRQ 12 */
  void* pfnEIC_13_Handler;                /* 25 External Interrupt Controller IRQ 13 */
  void* pfnEIC_14_Handler;                /* 26 External Interrupt Controller IRQ 14 */
  void* pfnEIC_15_Handler;                /* 27 External Interrupt Controller IRQ 15 */
  void* pfnFREQM_Handler;                 /* 28 Frequency Meter */
  void* pfnNVMCTRL_0_Handler;             /* 29 Non-Volatile Memory Controller IRQ 0 */
  void* pfnNVMCTRL_1_Handler;             /* 30 Non-Volatile Memory Controller IRQ 1 */
  void* pfnDMAC_0_Handler;                /* 31 Direct Memory Access Controller IRQ 0 */
  void* pfnDMAC_1_Handler;                /* 32 Direct Memory Access Controller IRQ 1 */
  void* pfnDMAC_2_Handler;                /* 33 Direct Memory Access Controller IRQ 2 */
  void* pfnDMAC_3_Handler;                /* 34 Direct Memory Access Controller IRQ 3 */
  void* pfnDMAC_4_Handler;                /* 35 Direct Memory Access Controller IRQ 4 */
  void* pfnEVSYS_0_Handler;               /* 36 Event System Interface IRQ 0 */
  void* pfnEVSYS_1_Handler;               /* 37 Event System Interface IRQ 1 */
  void* pfnEVSYS_2_Handler;               /* 38 Event System Interface IRQ 2 */
  void* pfnEVSYS_3_Handler;               /* 39 Event System Interface IRQ 3 */
  void* pfnEVSYS_4_Handler;               /* 40 Event System Interface IRQ 4 */
  void* pfnPAC_Handler;                   /* 41 Peripheral Access Controller */
  void* pfnTAL_0_Handler;                 /* 42 Trigger Allocator IRQ 0 */
  void* pfnTAL_1_Handler;                 /* 43 Trigger Allocator IRQ 1 */
  void* pvReserved44;
  void* pfnRAMECC_Handler;                /* 45 RAM ECC */
  void* pfnSERCOM0_0_Handler;             /* 46 Serial Communication Interface 0 IRQ 0 */
  void* pfnSERCOM0_1_Handler;             /* 47 Serial Communication Interface 0 IRQ 1 */
  void* pfnSERCOM0_2_Handler;             /* 48 Serial Communication Interface 0 IRQ 2 */
  void* pfnSERCOM0_3_Handler;             /* 49 Serial Communication Interface 0 IRQ 3 */
  void* pfnSERCOM1_0_Handler;             /* 50 Serial Communication Interface 1 IRQ 0 */
  void* pfnSERCOM1_1_Handler;             /* 51 Serial Communication Interface 1 IRQ 1 */
  void* pfnSERCOM1_2_Handler;             /* 52 Serial Communication Interface 1 IRQ 2 */
  void* pfnSERCOM1_3_Handler;             /* 53 Serial Communication Interface 1 IRQ 3 */
  void* pfnSERCOM2_0_Handler;             /* 54 Serial Communication Interface 2 IRQ 0 */
  void* pfnSERCOM2_1_Handler;             /* 55 Serial Communication Interface 2 IRQ 1 */
  void* pfnSERCOM2_2_Handler;             /* 56 Serial Communication Interface 2 IRQ 2 */
  void* pfnSERCOM2_3_Handler;             /* 57 Serial Communication Interface 2 IRQ 3 */
  void* pfnSERCOM3_0_Handler;             /* 58 Serial Communication Interface 3 IRQ 0 */
  void* pfnSERCOM3_1_Handler;             /* 59 Serial Communication Interface 3 IRQ 1 */
  void* pfnSERCOM3_2_Handler;             /* 60 Serial Communication Interface 3 IRQ 2 */
  void* pfnSERCOM3_3_Handler;             /* 61 Serial Communication Interface 3 IRQ 3 */
  void* pfnSERCOM4_0_Handler;             /* 62 Serial Communication Interface 4 IRQ 0 */
  void* pfnSERCOM4_1_Handler;             /* 63 Serial Communication Interface 4 IRQ 1 */
  void* pfnSERCOM4_2_Handler;             /* 64 Serial Communication Interface 4 IRQ 2 */
  void* pfnSERCOM4_3_Handler;             /* 65 Serial Communication Interface 4 IRQ 3 */
  void* pfnSERCOM5_0_Handler;             /* 66 Serial Communication Interface 5 IRQ 0 */
  void* pfnSERCOM5_1_Handler;             /* 67 Serial Communication Interface 5 IRQ 1 */
  void* pfnSERCOM5_2_Handler;             /* 68 Serial Communication Interface 5 IRQ 2 */
  void* pfnSERCOM5_3_Handler;             /* 69 Serial Communication Interface 5 IRQ 3 */
  void* pvReserved70;
  void* pvReserved71;
  void* pvReserved72;
  void* pvReserved73;
  void* pvReserved74;
  void* pvReserved75;
  void* pvReserved76;
  void* pvReserved77;
  void* pvReserved78;
  void* pvReserved79;
  void* pfnUSB_0_Handler;                 /* 80 Universal Serial Bus IRQ 0 */
  void* pfnUSB_1_Handler;                 /* 81 Universal Serial Bus IRQ 1 */
  void* pfnUSB_2_Handler;                 /* 82 Universal Serial Bus IRQ 2 */
  void* pfnUSB_3_Handler;                 /* 83 Universal Serial Bus IRQ 3 */
  void* pvReserved84;
  void* pfnTCC0_0_Handler;                /* 85 Timer Counter Control 0 IRQ 0 */
  void* pfnTCC0_1_Handler;                /* 86 Timer Counter Control 0 IRQ 1 */
  void* pfnTCC0_2_Handler;                /* 87 Timer Counter Control 0 IRQ 2 */
  void* pfnTCC0_3_Handler;                /* 88 Timer Counter Control 0 IRQ 3 */
  void* pfnTCC0_4_Handler;                /* 89 Timer Counter Control 0 IRQ 4 */
  void* pfnTCC0_5_Handler;                /* 90 Timer Counter Control 0 IRQ 5 */
  void* pfnTCC0_6_Handler;                /* 91 Timer Counter Control 0 IRQ 6 */
  void* pfnTCC1_0_Handler;                /* 92 Timer Counter Control 1 IRQ 0 */
  void* pfnTCC1_1_Handler;                /* 93 Timer Counter Control 1 IRQ 1 */
  void* pfnTCC1_2_Handler;                /* 94 Timer Counter Control 1 IRQ 2 */
  void* pfnTCC1_3_Handler;                /* 95 Timer Counter Control 1 IRQ 3 */
  void* pfnTCC1_4_Handler;                /* 96 Timer Counter Control 1 IRQ 4 */
  void* pfnTCC2_0_Handler;                /* 97 Timer Counter Control 2 IRQ 0 */
  void* pfnTCC2_1_Handler;                /* 98 Timer Counter Control 2 IRQ 1 */
  void* pfnTCC2_2_Handler;                /* 99 Timer Counter Control 2 IRQ 2 */
  void* pfnTCC2_3_Handler;                /* 100 Timer Counter Control 2 IRQ 3 */
  void* pvReserved101;
  void* pvReserved102;
  void* pvReserved103;
  void* pvReserved104;
  void* pvReserved105;
  void* pvReserved106;
  void* pfnTC0_Handler;                   /* 107 Basic Timer Counter 0 */
  void* pfnTC1_Handler;                   /* 108 Basic Timer Counter 1 */
  void* pfnTC2_Handler;                   /* 109 Basic Timer Counter 2 */
  void* pfnTC3_Handler;                   /* 110 Basic Timer Counter 3 */
  void* pvReserved111;
  void* pvReserved112;
  void* pvReserved113;
  void* pvReserved114;
  void* pfnPDEC_0_Handler;                /* 115 Quadrature Decodeur IRQ 0 */
  void* pfnPDEC_1_Handler;                /* 116 Quadrature Decodeur IRQ 1 */
  void* pfnPDEC_2_Handler;                /* 117 Quadrature Decodeur IRQ 2 */
  void* pfnADC0_0_Handler;                /* 118 Analog Digital Converter 0 IRQ 0 */
  void* pfnADC0_1_Handler;                /* 119 Analog Digital Converter 0 IRQ 1 */
  void* pfnADC1_0_Handler;                /* 120 Analog Digital Converter 1 IRQ 0 */
  void* pfnADC1_1_Handler;                /* 121 Analog Digital Converter 1 IRQ 1 */
  void* pfnAC_Handler;                    /* 122 Analog Comparators */
  void* pfnDAC_0_Handler;                 /* 123 Digital-to-Analog Converter IRQ 0 */
  void* pfnDAC_1_Handler;                 /* 124 Digital-to-Analog Converter IRQ 1 */
  void* pfnDAC_2_Handler;                 /* 125 Digital-to-Analog Converter IRQ 2 */
  void* pfnDAC_3_Handler;                 /* 126 Digital-to-Analog Converter IRQ 3 */
  void* pfnDAC_4_Handler;                 /* 127 Digital-to-Analog Converter IRQ 4 */
  void* pvReserved128;
  void* pfnPCC_Handler;                   /* 129 Parallel Capture Controller */
  void* pfnAES_Handler;                   /* 130 Advanced Encryption Standard */
  void* pfnTRNG_Handler;                  /* 131 True Random Generator */
  void* pfnICM_Handler;                   /* 132 Integrity Check Monitor */
  void* pfnPUKCC_Handler;                 /* 133 PUblic-Key Cryptography Controller */
  void* pfnQSPI_Handler;                  /* 134 Quad SPI interface */
  void* pfnSDHC0_Handler;                 /* 135 SD/MMC Host Controller 0 */
  void* pvReserved136;
} VectorTable;


// create the vector table and link it to .vectors section of memory
//static uint32_t* vector_array[64] __attribute__ ((section(".vectors")));

__attribute__ ((section(".vectors")))
 static const VectorTable vectors = {
     .stack_ptr = &_estack,
        .pfnReset_Handler       = 0,//(void*) Reset_Handler,
        .pfnNMI_Handler         = (void*) NMI_Handler,
        .pfnHardFault_Handler   = (void*) HardFault_Handler,
        .pfnMemManage_Handler   = (void*) MemManage_Handler,
        .pfnBusFault_Handler    = (void*) BusFault_Handler,
        .pfnUsageFault_Handler  = (void*) UsageFault_Handler,
        .pvReservedM9           = (void*) (0UL), /* Reserved */
        .pvReservedM8           = (void*) (0UL), /* Reserved */
        .pvReservedM7           = (void*) (0UL), /* Reserved */
        .pvReservedM6           = (void*) (0UL), /* Reserved */
        .pfnSVC_Handler         = (void*) SVC_Handler,
        .pfnDebugMon_Handler    = (void*) DebugMon_Handler,
        .pvReservedM3           = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler      = (void*) PendSV_Handler,
        .pfnSysTick_Handler     = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnPM_Handler          = (void*) PM_Handler,             /*  0 Power Manager */
        .pfnMCLK_Handler        = (void*) MCLK_Handler,           /*  1 Main Clock */
        .pfnOSCCTRL_0_Handler   = (void*) OSCCTRL_0_Handler,      /*  2 OSCCTRL_XOSCFAIL_0, OSCCTRL_XOSCRDY_0 */
        .pfnOSCCTRL_1_Handler   = (void*) OSCCTRL_1_Handler,      /*  3 OSCCTRL_XOSCFAIL_1, OSCCTRL_XOSCRDY_1 */
        .pfnOSCCTRL_2_Handler   = (void*) OSCCTRL_2_Handler,      /*  4 OSCCTRL_DFLLLOCKC, OSCCTRL_DFLLLOCKF, OSCCTRL_DFLLOOB, OSCCTRL_DFLLRCS, OSCCTRL_DFLLRDY */
        .pfnOSCCTRL_3_Handler   = (void*) OSCCTRL_3_Handler,      /*  5 OSCCTRL_DPLLLCKF_0, OSCCTRL_DPLLLCKR_0, OSCCTRL_DPLLLDRTO_0, OSCCTRL_DPLLLTO_0 */
        .pfnOSCCTRL_4_Handler   = (void*) OSCCTRL_4_Handler,      /*  6 OSCCTRL_DPLLLCKF_1, OSCCTRL_DPLLLCKR_1, OSCCTRL_DPLLLDRTO_1, OSCCTRL_DPLLLTO_1 */
        .pfnOSC32KCTRL_Handler  = (void*) OSC32KCTRL_Handler,     /*  7 32kHz Oscillators Control */
        .pfnSUPC_0_Handler      = (void*) SUPC_0_Handler,         /*  8 SUPC_B12SRDY, SUPC_B33SRDY, SUPC_BOD12RDY, SUPC_BOD33RDY, SUPC_VCORERDY, SUPC_VREGRDY */
        .pfnSUPC_1_Handler      = (void*) SUPC_1_Handler,         /*  9 SUPC_BOD12DET, SUPC_BOD33DET */
        .pfnWDT_Handler         = (void*) WDT_Handler,            /* 10 Watchdog Timer */
        .pfnRTC_Handler         = (void*) RTC_Handler,            /* 11 Real-Time Counter */
        .pfnEIC_0_Handler       = (void*) EIC_0_Handler,          /* 12 EIC_EXTINT_0 */
        .pfnEIC_1_Handler       = (void*) EIC_1_Handler,          /* 13 EIC_EXTINT_1 */
        .pfnEIC_2_Handler       = (void*) EIC_2_Handler,          /* 14 EIC_EXTINT_2 */
        .pfnEIC_3_Handler       = (void*) EIC_3_Handler,          /* 15 EIC_EXTINT_3 */
        .pfnEIC_4_Handler       = (void*) EIC_4_Handler,          /* 16 EIC_EXTINT_4 */
        .pfnEIC_5_Handler       = (void*) EIC_5_Handler,          /* 17 EIC_EXTINT_5 */
        .pfnEIC_6_Handler       = (void*) EIC_6_Handler,          /* 18 EIC_EXTINT_6 */
        .pfnEIC_7_Handler       = (void*) EIC_7_Handler,          /* 19 EIC_EXTINT_7 */
        .pfnEIC_8_Handler       = (void*) EIC_8_Handler,          /* 20 EIC_EXTINT_8 */
        .pfnEIC_9_Handler       = (void*) EIC_9_Handler,          /* 21 EIC_EXTINT_9 */
        .pfnEIC_10_Handler      = (void*) EIC_10_Handler,         /* 22 EIC_EXTINT_10 */
        .pfnEIC_11_Handler      = (void*) EIC_11_Handler,         /* 23 EIC_EXTINT_11 */
        .pfnEIC_12_Handler      = (void*) EIC_12_Handler,         /* 24 EIC_EXTINT_12 */
        .pfnEIC_13_Handler      = (void*) EIC_13_Handler,         /* 25 EIC_EXTINT_13 */
        .pfnEIC_14_Handler      = (void*) EIC_14_Handler,         /* 26 EIC_EXTINT_14 */
        .pfnEIC_15_Handler      = (void*) EIC_15_Handler,         /* 27 EIC_EXTINT_15 */
        .pfnFREQM_Handler       = (void*) FREQM_Handler,          /* 28 Frequency Meter */
        .pfnNVMCTRL_0_Handler   = (void*) NVMCTRL_0_Handler,      /* 29 NVMCTRL_0, NVMCTRL_1, NVMCTRL_2, NVMCTRL_3, NVMCTRL_4, NVMCTRL_5, NVMCTRL_6, NVMCTRL_7 */
        .pfnNVMCTRL_1_Handler   = (void*) NVMCTRL_1_Handler,      /* 30 NVMCTRL_10, NVMCTRL_8, NVMCTRL_9 */
        .pfnDMAC_0_Handler      = (void*) DMAC_0_Handler,         /* 31 DMAC_SUSP_0, DMAC_TCMPL_0, DMAC_TERR_0 */
        .pfnDMAC_1_Handler      = (void*) DMAC_1_Handler,         /* 32 DMAC_SUSP_1, DMAC_TCMPL_1, DMAC_TERR_1 */
        .pfnDMAC_2_Handler      = (void*) DMAC_2_Handler,         /* 33 DMAC_SUSP_2, DMAC_TCMPL_2, DMAC_TERR_2 */
        .pfnDMAC_3_Handler      = (void*) DMAC_3_Handler,         /* 34 DMAC_SUSP_3, DMAC_TCMPL_3, DMAC_TERR_3 */
        .pfnDMAC_4_Handler      = (void*) DMAC_4_Handler,         /* 35 DMAC_SUSP_10, DMAC_SUSP_11, DMAC_SUSP_12, DMAC_SUSP_13, DMAC_SUSP_14, DMAC_SUSP_15, DMAC_SUSP_16, DMAC_SUSP_17, DMAC_SUSP_18, DMAC_SUSP_19, DMAC_SUSP_20, DMAC_SUSP_21, DMAC_SUSP_22, DMAC_SUSP_23, DMAC_SUSP_24, DMAC_SUSP_25, DMAC_SUSP_26, DMAC_SUSP_27, DMAC_SUSP_28, DMAC_SUSP_29, DMAC_SUSP_30, DMAC_SUSP_31, DMAC_SUSP_4, DMAC_SUSP_5, DMAC_SUSP_6, DMAC_SUSP_7, DMAC_SUSP_8, DMAC_SUSP_9, DMAC_TCMPL_10, DMAC_TCMPL_11, DMAC_TCMPL_12, DMAC_TCMPL_13, DMAC_TCMPL_14, DMAC_TCMPL_15, DMAC_TCMPL_16, DMAC_TCMPL_17, DMAC_TCMPL_18, DMAC_TCMPL_19, DMAC_TCMPL_20, DMAC_TCMPL_21, DMAC_TCMPL_22, DMAC_TCMPL_23, DMAC_TCMPL_24, DMAC_TCMPL_25, DMAC_TCMPL_26, DMAC_TCMPL_27, DMAC_TCMPL_28, DMAC_TCMPL_29, DMAC_TCMPL_30, DMAC_TCMPL_31, DMAC_TCMPL_4, DMAC_TCMPL_5, DMAC_TCMPL_6, DMAC_TCMPL_7, DMAC_TCMPL_8, DMAC_TCMPL_9, DMAC_TERR_10, DMAC_TERR_11, DMAC_TERR_12, DMAC_TERR_13, DMAC_TERR_14, DMAC_TERR_15, DMAC_TERR_16, DMAC_TERR_17, DMAC_TERR_18, DMAC_TERR_19, DMAC_TERR_20, DMAC_TERR_21, DMAC_TERR_22, DMAC_TERR_23, DMAC_TERR_24, DMAC_TERR_25, DMAC_TERR_26, DMAC_TERR_27, DMAC_TERR_28, DMAC_TERR_29, DMAC_TERR_30, DMAC_TERR_31, DMAC_TERR_4, DMAC_TERR_5, DMAC_TERR_6, DMAC_TERR_7, DMAC_TERR_8, DMAC_TERR_9 */
        .pfnEVSYS_0_Handler     = (void*) EVSYS_0_Handler,        /* 36 EVSYS_EVD_0, EVSYS_OVR_0 */
        .pfnEVSYS_1_Handler     = (void*) EVSYS_1_Handler,        /* 37 EVSYS_EVD_1, EVSYS_OVR_1 */
        .pfnEVSYS_2_Handler     = (void*) EVSYS_2_Handler,        /* 38 EVSYS_EVD_2, EVSYS_OVR_2 */
        .pfnEVSYS_3_Handler     = (void*) EVSYS_3_Handler,        /* 39 EVSYS_EVD_3, EVSYS_OVR_3 */
        .pfnEVSYS_4_Handler     = (void*) EVSYS_4_Handler,        /* 40 EVSYS_EVD_10, EVSYS_EVD_11, EVSYS_EVD_4, EVSYS_EVD_5, EVSYS_EVD_6, EVSYS_EVD_7, EVSYS_EVD_8, EVSYS_EVD_9, EVSYS_OVR_10, EVSYS_OVR_11, EVSYS_OVR_4, EVSYS_OVR_5, EVSYS_OVR_6, EVSYS_OVR_7, EVSYS_OVR_8, EVSYS_OVR_9 */
        .pfnPAC_Handler         = (void*) PAC_Handler,            /* 41 Peripheral Access Controller */
        .pfnTAL_0_Handler       = (void*) TAL_0_Handler,          /* 42 TAL_BRK */
        .pfnTAL_1_Handler       = (void*) TAL_1_Handler,          /* 43 TAL_IPS_0, TAL_IPS_1 */
        .pvReserved44           = (void*) (0UL),                  /* 44 Reserved */
        .pfnRAMECC_Handler      = (void*) RAMECC_Handler,         /* 45 RAM ECC */
        .pfnSERCOM0_0_Handler   = (void*) SERCOM0_0_Handler,      /* 46 SERCOM0_0 */
        .pfnSERCOM0_1_Handler   = (void*) SERCOM0_1_Handler,      /* 47 SERCOM0_1 */
        .pfnSERCOM0_2_Handler   = (void*) SERCOM0_2_Handler,      /* 48 SERCOM0_2 */
        .pfnSERCOM0_3_Handler   = (void*) SERCOM0_3_Handler,      /* 49 SERCOM0_3, SERCOM0_4, SERCOM0_5, SERCOM0_6 */
        .pfnSERCOM1_0_Handler   = (void*) SERCOM1_0_Handler,      /* 50 SERCOM1_0 */
        .pfnSERCOM1_1_Handler   = (void*) SERCOM1_1_Handler,      /* 51 SERCOM1_1 */
        .pfnSERCOM1_2_Handler   = (void*) SERCOM1_2_Handler,      /* 52 SERCOM1_2 */
        .pfnSERCOM1_3_Handler   = (void*) SERCOM1_3_Handler,      /* 53 SERCOM1_3, SERCOM1_4, SERCOM1_5, SERCOM1_6 */
        .pfnSERCOM2_0_Handler   = (void*) SERCOM2_0_Handler,      /* 54 SERCOM2_0 */
        .pfnSERCOM2_1_Handler   = (void*) SERCOM2_1_Handler,      /* 55 SERCOM2_1 */
        .pfnSERCOM2_2_Handler   = (void*) SERCOM2_2_Handler,      /* 56 SERCOM2_2 */
        .pfnSERCOM2_3_Handler   = (void*) SERCOM2_3_Handler,      /* 57 SERCOM2_3, SERCOM2_4, SERCOM2_5, SERCOM2_6 */
        .pfnSERCOM3_0_Handler   = (void*) SERCOM3_0_Handler,      /* 58 SERCOM3_0 */
        .pfnSERCOM3_1_Handler   = (void*) SERCOM3_1_Handler,      /* 59 SERCOM3_1 */
        .pfnSERCOM3_2_Handler   = (void*) SERCOM3_2_Handler,      /* 60 SERCOM3_2 */
        .pfnSERCOM3_3_Handler   = (void*) SERCOM3_3_Handler,      /* 61 SERCOM3_3, SERCOM3_4, SERCOM3_5, SERCOM3_6 */
};


void stack_begin();

#endif