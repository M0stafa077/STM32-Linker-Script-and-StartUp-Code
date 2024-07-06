/**
 * File: startUp_code.c
 * Auther: Mostafa Asaad (https://github.com/M0stafa077)
 * Brief: The Start-Up Code for the STM32F401RCT6 dev. board.
*/

#define NULL    (void *)0

typedef unsigned int uint32_t;

extern uint32_t _estack, _etext, _sidata, _sdata, _edata, _sbss, _ebss;
extern int main();

void Reset_Handler(void);
void NMI_Handler(void) __attribute((alias ("Default_temp_Handler")));
void HardFault_Handler(void) __attribute((alias ("Default_temp_Handler")));
void MemManage_Handler(void) __attribute((alias ("Default_temp_Handler")));
void BusFault_Handler(void) __attribute((alias ("Default_temp_Handler")));
void UsageFault_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SVCall_Handler(void) __attribute((alias ("Default_temp_Handler")));
void Debug_Monitor_Handler(void) __attribute((alias ("Default_temp_Handler")));
void PendSV_Handler(void) __attribute((alias ("Default_temp_Handler")));
void Systick_Handler(void) __attribute((alias ("Default_temp_Handler")));
void WWDG_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI16_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI21_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI22_Handler(void) __attribute((alias ("Default_temp_Handler")));
void FLASH_Handler(void) __attribute((alias ("Default_temp_Handler")));
void RCC_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI0_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI1_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI3_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI4_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream0_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream1_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream3_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream4_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream5_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream6_Handler(void) __attribute((alias ("Default_temp_Handler")));
void ADC_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI9_5_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM1_BRK_TIM9_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM1_UP_TIM10_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM1_TRG_COM_TIM11_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM1_CC_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM3_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM4_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C1_EV_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C1_ER_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C2_EV_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C2_ER_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SPI1_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SPI2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void USART1_Handler(void) __attribute((alias ("Default_temp_Handler")));
void USART2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI15_10_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI17_Handler(void) __attribute((alias ("Default_temp_Handler")));
void EXTI18_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA1_Stream7_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SDIO_Handler(void) __attribute((alias ("Default_temp_Handler")));
void TIM5_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SPI3_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream0_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream1_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream2_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream3_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream4_Handler(void) __attribute((alias ("Default_temp_Handler")));
void OTG_FS_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream5_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream6_Handler(void) __attribute((alias ("Default_temp_Handler")));
void DMA2_Stream7_Handler(void) __attribute((alias ("Default_temp_Handler")));
void USART6_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C3_EV_Handler(void) __attribute((alias ("Default_temp_Handler")));
void I2C3_ER_Handler(void) __attribute((alias ("Default_temp_Handler")));
void FPU_Handler(void) __attribute((alias ("Default_temp_Handler")));
void SPI4_Handler(void) __attribute((alias ("Default_temp_Handler")));

uint32_t * const MSP_Initial_Value = (uint32_t *)&_estack;
uint32_t * vector_table[] __attribute__((section(".isr_vector"))) = {
    (uint32_t *)MSP_Initial_Value,          /* Main Stack Pointer Initial Value at => 0x0000 0000 */
    (uint32_t *)Reset_Handler,              /* The Reset Handler Vector at => 0x0000 0004 */
    (uint32_t *)NMI_Handler,                /* The Non-Maskable Interrupts Handler at => 0x0000 0008 */
    (uint32_t *)HardFault_Handler,          /* The Hard Faults Handler at => 0x0000 000C */
    (uint32_t *)MemManage_Handler,          /* The Memory Manage Handler at => 0x0000 0010 */
    (uint32_t *)BusFault_Handler,           /* The Pre-fetch fault, memory access fault Handler at => 0x0000 0014 */
    (uint32_t *)UsageFault_Handler,         /* The Undefined instruction or illegal state Handler at => 0x0000 0018 */
    (uint32_t *)0,                          /* Reserved */
    (uint32_t *)0,                          /* Reserved */
    (uint32_t *)0,                          /* Reserved */
    (uint32_t *)0,                          /* Reserved */
    (uint32_t *)SVCall_Handler,             /* The System Service call via SWI instruction Handler at => 0x0000 002C */
    (uint32_t *)Debug_Monitor_Handler,      /* The Debug Monitor Handler at => 0x0000 0030 */
    (uint32_t *)0,                          /* Reserved */
    (uint32_t *)PendSV_Handler,             /* The Pendable request for system service Handler at => 0x0000 0038 */
    (uint32_t *)Systick_Handler,            /* The System Tick Timer Interrupt Handler at => 0x0000 003C */
    (uint32_t *)WWDG_Handler,               /* The Window Watchdog interrupt Handler at => 0x0000 0040 */
    (uint32_t *)EXTI16_Handler,             /* EXTI Line 16 interrupt / PVD through EXTI line detection interrupt Handler at => 0x0000 0048 */
    (uint32_t *)EXTI21_Handler,             /* EXTI Line 21 interrupt / Tamper and TimeStamp through EXTI line detection interrupt Handler at => 0x0000 004C */
    (uint32_t *)EXTI22_Handler,             /* EXTI Line 22 interrupt / RTC Wakeup interrupt through the EXTI line */
    (uint32_t *)FLASH_Handler,              /* Flash global interrupt */
    (uint32_t *)RCC_Handler,                /* RCC global interrupt */
    (uint32_t *)EXTI0_Handler,              /* EXTI Line0 interrupt */
    (uint32_t *)EXTI1_Handler,              /* EXTI Line1 interrupt */
    (uint32_t *)EXTI2_Handler,              /* EXTI Line2 interrupt */
    (uint32_t *)EXTI3_Handler,              /* EXTI Line3 interrupt */
    (uint32_t *)EXTI4_Handler,              /* EXTI Line4 interrupt */
    (uint32_t *)DMA1_Stream0_Handler,       /* DMA1 Stream0 global interrupt */
    (uint32_t *)DMA1_Stream1_Handler,       /* DMA1 Stream1 global interrupt */
    (uint32_t *)DMA1_Stream2_Handler,       /* DMA1 Stream2 global interrupt */
    (uint32_t *)DMA1_Stream3_Handler,       /* DMA1 Stream3 global interrupt */
    (uint32_t *)DMA1_Stream4_Handler,       /* DMA1 Stream4 global interrupt */
    (uint32_t *)DMA1_Stream5_Handler,       /* DMA1 Stream5 global interrupt */
    (uint32_t *)DMA1_Stream6_Handler,       /* DMA1 Stream6 global interrupt */
    (uint32_t *)ADC_Handler,                /* ADC1 global interrupts */
    (uint32_t *)EXTI9_5_Handler,            /* EXTI Line[9:5] interrupts */
    (uint32_t *)TIM1_BRK_TIM9_Handler,      /* TIM1 Break interrupt and TIM9 global interrupt */
    (uint32_t *)TIM1_UP_TIM10_Handler,      /* TIM1 Update interrupt and TIM10 global interrupt */
    (uint32_t *)TIM1_TRG_COM_TIM11_Handler, /* TIM1 Trigger and Commutation interrupts and TIM11 global interrupt */
    (uint32_t *)TIM1_CC_Handler,            /* TIM1 Capture Compare interrupt */
    (uint32_t *)TIM2_Handler,               /* TIM2 global interrupt */
    (uint32_t *)TIM3_Handler,               /* TIM3 global interrupt */
    (uint32_t *)TIM4_Handler,               /* TIM4 global interrupt */
    (uint32_t *)I2C1_EV_Handler,            /* I2C1 event interrupt */
    (uint32_t *)I2C1_ER_Handler,            /* I2C1 error interrupt */
    (uint32_t *)I2C2_EV_Handler,            /* I2C2 event interrupt */
    (uint32_t *)I2C2_ER_Handler,            /* I2C2 error interrupt */
    (uint32_t *)SPI1_Handler,               /* SPI1 global interrupt */
    (uint32_t *)SPI2_Handler,               /* SPI2 global interrupt */
    (uint32_t *)USART1_Handler,             /* USART1 global interrupt */
    (uint32_t *)USART2_Handler,             /* USART2 global interrupt */
    (uint32_t *)EXTI15_10_Handler,          /* EXTI Line[15:10] interrupts */
    (uint32_t *)EXTI17_Handler,             /* EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt */
    (uint32_t *)EXTI18_Handler,             /* EXTI Line 18 interrupt / USB On-The-Go FS Wakeup through EXTI line interrupt */
    (uint32_t *)DMA1_Stream7_Handler,       /* DMA1 Stream7 global interrupt */
    (uint32_t *)SDIO_Handler,               /* SDIO global interrupt */
    (uint32_t *)TIM5_Handler,               /* TIM5 global interrupt */
    (uint32_t *)SPI3_Handler,               /* SPI3 global interrupt */
    (uint32_t *)DMA2_Stream0_Handler,       /* DMA2 Stream0 global interrupt */
    (uint32_t *)DMA2_Stream1_Handler,       /* DMA2 Stream1 global interrupt */
    (uint32_t *)DMA2_Stream2_Handler,       /* DMA2 Stream2 global interrupt */
    (uint32_t *)DMA2_Stream3_Handler,       /* DMA2 Stream3 global interrupt */
    (uint32_t *)DMA2_Stream4_Handler,       /* DMA2 Stream4 global interrupt */
    (uint32_t *)OTG_FS_Handler,             /* USB On-The-Go FS global interrupt */
    (uint32_t *)DMA2_Stream5_Handler,       /* DMA2 Stream5 global interrupt */
    (uint32_t *)DMA2_Stream6_Handler,       /* DMA2 Stream6 global interrupt */
    (uint32_t *)DMA2_Stream7_Handler,       /* DMA2 Stream7 global interrupt */
    (uint32_t *)USART6_Handler,             /* USART6 global interrupt */
    (uint32_t *)I2C3_EV_Handler,            /* I2C3 event interrupt */
    (uint32_t *)I2C3_ER_Handler,            /* I2C3 error interrupt */
    (uint32_t *)FPU_Handler,                /* FPU global interrupt */
    (uint32_t *)SPI4_Handler,               /* SPI4 global interrupt */
};

static void system_initialize(void)
{

}

void Reset_Handler(void)
{
    uint32_t *source_address = NULL;
    uint32_t *dist_address = NULL;
    uint32_t copy_size = 0;
    int main_error_state = 0;
    
    /* Copy .data segment from FLASH memory to RAM memory */
    source_address = &_sidata;
    dist_address = &_sdata;
    copy_size = &_edata - &_sdata;
    for(uint32_t counter = 0; counter < copy_size; ++counter)
    {
        *dist_address++ = *source_address++;
    }

    /* Initialize the .bss memory segment with zeros */
    dist_address = &_sbss;
    copy_size = &_ebss - &_sbss;
    for(uint32_t counter = 0; counter < copy_size; ++counter)
    {
        *dist_address++ = 0;
    }

    /* Call the system Initialization function */
    system_initialize();

    /* Call the main function */
    main_error_state = main();
}

void Default_temp_Handler(void)
{
    /* !! This is a temporary function for compile-time usage only !! */
}