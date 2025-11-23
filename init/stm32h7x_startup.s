.syntax unified
.thumb

.section .isr_vector,"a",%progbits
.align 2
.global g_pfnVectors
g_pfnVectors:
    .word _estack
    .word Reset_Handler
    .word NMI_Handler
    .word HardFault_Handler
    .word MemManage_Handler
    .word BusFault_Handler
    .word UsageFault_Handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word SVCall_Handler
    .word DebugMonitor_Handler
    .word 0
    .word PendSV_Handler
    .word SysTick_Handler
    .word WWDG1_Handler
    .word PVD_PVM_Handler
    .word RTC_TAMP_STAMP_CSS_LSE_Handler
    .word RTC_WKUP_Handler
    .word FLASH_Handler
    .word RCC_Handler
    .word EXTI0_Handler
    .word EXTI1_Handler
    .word EXTI2_Handler
    .word EXTI3_Handler
    .word EXTI4_Handler
    .word DMA1_STR0_Handler
    .word DMA1_STR1_Handler
    .word DMA1_STR2_Handler
    .word DMA1_STR3_Handler
    .word DMA1_STR4_Handler
    .word DMA1_STR5_Handler
    .word DMA1_STR6_Handler
    .word ADC1_2_Handler
    .word FDCAN1_IT0_Handler
    .word FDCAN2_IT0_Handler
    .word FDCAN1_IT1_Handler
    .word FDCAN2_IT1_Handler
    .word EXTI9_5_Handler
    .word TIM1_BRK_Handler
    .word TIM1_UP_Handler
    .word TIM1_TRG_CO_M_Handler
    .word TIM1_CC_Handler
    .word TIM2_Handler
    .word TIM3_Handler
    .word TIM4_Handler
    .word I2C1_EV_Handler
    .word I2C1_ER_Handler
    .word I2C2_EV_Handler
    .word I2C2_ER_Handler
    .word SPI1_Handler
    .word SPI2_Handler
    .word USART1_Handler
    .word USART2_Handler
    .word USART3_Handler
    .word EXTI15_10_Handler
    .word RTC_ALARM_Handler
    .word 0
    .word TIM8_BRK_TIM12_Handler
    .word TIM8_UP_TIM13_Handler
    .word TIM8_TRG_COM_TIM14_Handler
    .word TIM8_CC_Handler
    .word DMA1_STR7_Handler
    .word FMC_Handler
    .word SDMMC1_Handler
    .word TIM5_Handler
    .word SPI3_Handler
    .word UART4_Handler
    .word UART5_Handler
    .word TIM6_DAC_Handler
    .word TIM7_Handler
    .word DMA2_STR0_Handler
    .word DMA2_STR1_Handler
    .word DMA2_STR2_Handler
    .word DMA2_STR3_Handler
    .word DMA2_STR4_Handler
    .word ETH_Handler
    .word ETH_WKUP_Handler
    .word FDCAN_CAL_Handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word DMA2_STR5_Handler
    .word DMA2_STR6_Handler
    .word DMA2_STR7_Handler
    .word USART6_Handler
    .word I2C3_EV_Handler
    .word I2C3_ER_Handler
    .word OTG_HS_EP1_OUT_Handler
    .word OTG_HS_EP1_IN_Handler
    .word OTG_HS_WKUP_Handler
    .word OTG_HS_Handler
    .word DCMI_PSSI_Handler
    .word CRYP_Handler
    .word HASH_RNG_Handler
    .word FPU_Handler
    .word UART7_Handler
    .word UART8_Handler
    .word SPI4_Handler
    .word SPI5_Handler
    .word SPI6_Handler
    .word SAI1_Handler
    .word LTDC_Handler
    .word LTDC_ERR_Handler
    .word DMA2D_Handler
    .word 0
    .word OCTOSPI1_Handler
    .word LPTIM1_Handler
    .word CEC_Handler
    .word I2C4_EV_Handler
    .word I2C4_ER_Handler
    .word SPDIF_Handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word DMAMUX1_OV_Handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word DFSDM1_FLT0_Handler
    .word DFSDM1_FLT1_Handler
    .word DFSDM1_FLT2_Handler
    .word DFSDM1_FLT3_Handler
    .word 0
    .word SWPMI1_Handler
    .word TIM15_Handler
    .word TIM16_Handler
    .word TIM17_Handler
    .word MDIOS_WKUP_Handler
    .word MDIOS_Handler
    .word 0
    .word MDMA_Handler
    .word 0
    .word SDMMC2_Handler
    .word HSEM0_Handler
    .word 0
    .word ADC3_Handler
    .word DMAMUX2_OVR_Handler
    .word BDMA_CH0_Handler
    .word BDMA_CH1_Handler
    .word BDMA_CH2_Handler
    .word BDMA_CH3_Handler
    .word BDMA_CH4_Handler
    .word BDMA_CH5_Handler
    .word BDMA_CH6_Handler
    .word BDMA_CH7_Handler
    .word COMP_Handler
    .word LPTIM2_Handler
    .word LPTIM3_Handler
    .word LPTIM4_Handler
    .word LPTIM5_Handler
    .word LPUART_Handler
    .word 0
    .word CRS_Handler
    .word ECC_DIAG_IT_Handler
    .word SAI4_Handler
    .word TEMP_IT_Handler
    .word 0
    .word WKUP_Handler
    .word OCTOSPI2_Handler
    .word OTFDEC1_Handler
    .word OTFDEC2_Handler
    .word FMAC_Handler
    .word CORDIC_IT_Handler
    .word UART9_Handler
    .word USART10_Handler
    .word I2C5_EV_Handler
    .word I2C5_ER_Handler
    .word FDCAN3_IT0_Handler
    .word FDCAN3_IT1_Handler
    .word TIM23_Handler
    .word TIM24_Handler

.text
.thumb
.align 1
Default_Handler:
    b Default_Handler

.weak NMI_Handler
.thumb_set NMI_Handler, Default_Handler
.weak HardFault_Handler
.thumb_set HardFault_Handler, Default_Handler
.weak MemManage_Handler
.thumb_set MemManage_Handler, Default_Handler
.weak BusFault_Handler
.thumb_set BusFault_Handler, Default_Handler
.weak UsageFault_Handler
.thumb_set UsageFault_Handler, Default_Handler
.weak SVCall_Handler
.thumb_set SVCall_Handler, Default_Handler
.weak DebugMonitor_Handler
.thumb_set DebugMonitor_Handler, Default_Handler
.weak PendSV_Handler
.thumb_set PendSV_Handler, Default_Handler
.weak SysTick_Handler
.thumb_set SysTick_Handler, Default_Handler
.weak WWDG1_Handler
.thumb_set WWDG1_Handler, Default_Handler
.weak PVD_PVM_Handler
.thumb_set PVD_PVM_Handler, Default_Handler
.weak RTC_TAMP_STAMP_CSS_LSE_Handler
.thumb_set RTC_TAMP_STAMP_CSS_LSE_Handler, Default_Handler
.weak RTC_WKUP_Handler
.thumb_set RTC_WKUP_Handler, Default_Handler
.weak FLASH_Handler
.thumb_set FLASH_Handler, Default_Handler
.weak RCC_Handler
.thumb_set RCC_Handler, Default_Handler
.weak EXTI0_Handler
.thumb_set EXTI0_Handler, Default_Handler
.weak EXTI1_Handler
.thumb_set EXTI1_Handler, Default_Handler
.weak EXTI2_Handler
.thumb_set EXTI2_Handler, Default_Handler
.weak EXTI3_Handler
.thumb_set EXTI3_Handler, Default_Handler
.weak EXTI4_Handler
.thumb_set EXTI4_Handler, Default_Handler
.weak DMA1_STR0_Handler
.thumb_set DMA1_STR0_Handler, Default_Handler
.weak DMA1_STR1_Handler
.thumb_set DMA1_STR1_Handler, Default_Handler
.weak DMA1_STR2_Handler
.thumb_set DMA1_STR2_Handler, Default_Handler
.weak DMA1_STR3_Handler
.thumb_set DMA1_STR3_Handler, Default_Handler
.weak DMA1_STR4_Handler
.thumb_set DMA1_STR4_Handler, Default_Handler
.weak DMA1_STR5_Handler
.thumb_set DMA1_STR5_Handler, Default_Handler
.weak DMA1_STR6_Handler
.thumb_set DMA1_STR6_Handler, Default_Handler
.weak ADC1_2_Handler
.thumb_set ADC1_2_Handler, Default_Handler
.weak FDCAN1_IT0_Handler
.thumb_set FDCAN1_IT0_Handler, Default_Handler
.weak FDCAN2_IT0_Handler
.thumb_set FDCAN2_IT0_Handler, Default_Handler
.weak FDCAN1_IT1_Handler
.thumb_set FDCAN1_IT1_Handler, Default_Handler
.weak FDCAN2_IT1_Handler
.thumb_set FDCAN2_IT1_Handler, Default_Handler
.weak EXTI9_5_Handler
.thumb_set EXTI9_5_Handler, Default_Handler
.weak TIM1_BRK_Handler
.thumb_set TIM1_BRK_Handler, Default_Handler
.weak TIM1_UP_Handler
.thumb_set TIM1_UP_Handler, Default_Handler
.weak TIM1_TRG_CO_M_Handler
.thumb_set TIM1_TRG_CO_M_Handler, Default_Handler
.weak TIM1_CC_Handler
.thumb_set TIM1_CC_Handler, Default_Handler
.weak TIM2_Handler
.thumb_set TIM2_Handler, Default_Handler
.weak TIM3_Handler
.thumb_set TIM3_Handler, Default_Handler
.weak TIM4_Handler
.thumb_set TIM4_Handler, Default_Handler
.weak I2C1_EV_Handler
.thumb_set I2C1_EV_Handler, Default_Handler
.weak I2C1_ER_Handler
.thumb_set I2C1_ER_Handler, Default_Handler
.weak I2C2_EV_Handler
.thumb_set I2C2_EV_Handler, Default_Handler
.weak I2C2_ER_Handler
.thumb_set I2C2_ER_Handler, Default_Handler
.weak SPI1_Handler
.thumb_set SPI1_Handler, Default_Handler
.weak SPI2_Handler
.thumb_set SPI2_Handler, Default_Handler
.weak USART1_Handler
.thumb_set USART1_Handler, Default_Handler
.weak USART2_Handler
.thumb_set USART2_Handler, Default_Handler
.weak USART3_Handler
.thumb_set USART3_Handler, Default_Handler
.weak EXTI15_10_Handler
.thumb_set EXTI15_10_Handler, Default_Handler
.weak RTC_ALARM_Handler
.thumb_set RTC_ALARM_Handler, Default_Handler
.weak TIM8_BRK_TIM12_Handler
.thumb_set TIM8_BRK_TIM12_Handler, Default_Handler
.weak TIM8_UP_TIM13_Handler
.thumb_set TIM8_UP_TIM13_Handler, Default_Handler
.weak TIM8_TRG_COM_TIM14_Handler
.thumb_set TIM8_TRG_COM_TIM14_Handler, Default_Handler
.weak TIM8_CC_Handler
.thumb_set TIM8_CC_Handler, Default_Handler
.weak DMA1_STR7_Handler
.thumb_set DMA1_STR7_Handler, Default_Handler
.weak FMC_Handler
.thumb_set FMC_Handler, Default_Handler
.weak SDMMC1_Handler
.thumb_set SDMMC1_Handler, Default_Handler
.weak TIM5_Handler
.thumb_set TIM5_Handler, Default_Handler
.weak SPI3_Handler
.thumb_set SPI3_Handler, Default_Handler
.weak UART4_Handler
.thumb_set UART4_Handler, Default_Handler
.weak UART5_Handler
.thumb_set UART5_Handler, Default_Handler
.weak TIM6_DAC_Handler
.thumb_set TIM6_DAC_Handler, Default_Handler
.weak TIM7_Handler
.thumb_set TIM7_Handler, Default_Handler
.weak DMA2_STR0_Handler
.thumb_set DMA2_STR0_Handler, Default_Handler
.weak DMA2_STR1_Handler
.thumb_set DMA2_STR1_Handler, Default_Handler
.weak DMA2_STR2_Handler
.thumb_set DMA2_STR2_Handler, Default_Handler
.weak DMA2_STR3_Handler
.thumb_set DMA2_STR3_Handler, Default_Handler
.weak DMA2_STR4_Handler
.thumb_set DMA2_STR4_Handler, Default_Handler
.weak ETH_Handler
.thumb_set ETH_Handler, Default_Handler
.weak ETH_WKUP_Handler
.thumb_set ETH_WKUP_Handler, Default_Handler
.weak FDCAN_CAL_Handler
.thumb_set FDCAN_CAL_Handler, Default_Handler
.weak DMA2_STR5_Handler
.thumb_set DMA2_STR5_Handler, Default_Handler
.weak DMA2_STR6_Handler
.thumb_set DMA2_STR6_Handler, Default_Handler
.weak DMA2_STR7_Handler
.thumb_set DMA2_STR7_Handler, Default_Handler
.weak USART6_Handler
.thumb_set USART6_Handler, Default_Handler
.weak I2C3_EV_Handler
.thumb_set I2C3_EV_Handler, Default_Handler
.weak I2C3_ER_Handler
.thumb_set I2C3_ER_Handler, Default_Handler
.weak OTG_HS_EP1_OUT_Handler
.thumb_set OTG_HS_EP1_OUT_Handler, Default_Handler
.weak OTG_HS_EP1_IN_Handler
.thumb_set OTG_HS_EP1_IN_Handler, Default_Handler
.weak OTG_HS_WKUP_Handler
.thumb_set OTG_HS_WKUP_Handler, Default_Handler
.weak OTG_HS_Handler
.thumb_set OTG_HS_Handler, Default_Handler
.weak DCMI_PSSI_Handler
.thumb_set DCMI_PSSI_Handler, Default_Handler
.weak CRYP_Handler
.thumb_set CRYP_Handler, Default_Handler
.weak HASH_RNG_Handler
.thumb_set HASH_RNG_Handler, Default_Handler
.weak FPU_Handler
.thumb_set FPU_Handler, Default_Handler
.weak UART7_Handler
.thumb_set UART7_Handler, Default_Handler
.weak UART8_Handler
.thumb_set UART8_Handler, Default_Handler
.weak SPI4_Handler
.thumb_set SPI4_Handler, Default_Handler
.weak SPI5_Handler
.thumb_set SPI5_Handler, Default_Handler
.weak SPI6_Handler
.thumb_set SPI6_Handler, Default_Handler
.weak SAI1_Handler
.thumb_set SAI1_Handler, Default_Handler
.weak LTDC_Handler
.thumb_set LTDC_Handler, Default_Handler
.weak LTDC_ERR_Handler
.thumb_set LTDC_ERR_Handler, Default_Handler
.weak DMA2D_Handler
.thumb_set DMA2D_Handler, Default_Handler
.weak OCTOSPI1_Handler
.thumb_set OCTOSPI1_Handler, Default_Handler
.weak LPTIM1_Handler
.thumb_set LPTIM1_Handler, Default_Handler
.weak CEC_Handler
.thumb_set CEC_Handler, Default_Handler
.weak I2C4_EV_Handler
.thumb_set I2C4_EV_Handler, Default_Handler
.weak I2C4_ER_Handler
.thumb_set I2C4_ER_Handler, Default_Handler
.weak SPDIF_Handler
.thumb_set SPDIF_Handler, Default_Handler
.weak DMAMUX1_OV_Handler
.thumb_set DMAMUX1_OV_Handler, Default_Handler
.weak DFSDM1_FLT0_Handler
.thumb_set DFSDM1_FLT0_Handler, Default_Handler
.weak DFSDM1_FLT1_Handler
.thumb_set DFSDM1_FLT1_Handler, Default_Handler
.weak DFSDM1_FLT2_Handler
.thumb_set DFSDM1_FLT2_Handler, Default_Handler
.weak DFSDM1_FLT3_Handler
.thumb_set DFSDM1_FLT3_Handler, Default_Handler
.weak SWPMI1_Handler
.thumb_set SWPMI1_Handler, Default_Handler
.weak TIM15_Handler
.thumb_set TIM15_Handler, Default_Handler
.weak TIM16_Handler
.thumb_set TIM16_Handler, Default_Handler
.weak TIM17_Handler
.thumb_set TIM17_Handler, Default_Handler
.weak MDIOS_WKUP_Handler
.thumb_set MDIOS_WKUP_Handler, Default_Handler
.weak MDIOS_Handler
.thumb_set MDIOS_Handler, Default_Handler
.weak MDMA_Handler
.thumb_set MDMA_Handler, Default_Handler
.weak SDMMC2_Handler
.thumb_set SDMMC2_Handler, Default_Handler
.weak HSEM0_Handler
.thumb_set HSEM0_Handler, Default_Handler
.weak ADC3_Handler
.thumb_set ADC3_Handler, Default_Handler
.weak DMAMUX2_OVR_Handler
.thumb_set DMAMUX2_OVR_Handler, Default_Handler
.weak BDMA_CH0_Handler
.thumb_set BDMA_CH0_Handler, Default_Handler
.weak BDMA_CH1_Handler
.thumb_set BDMA_CH1_Handler, Default_Handler
.weak BDMA_CH2_Handler
.thumb_set BDMA_CH2_Handler, Default_Handler
.weak BDMA_CH3_Handler
.thumb_set BDMA_CH3_Handler, Default_Handler
.weak BDMA_CH4_Handler
.thumb_set BDMA_CH4_Handler, Default_Handler
.weak BDMA_CH5_Handler
.thumb_set BDMA_CH5_Handler, Default_Handler
.weak BDMA_CH6_Handler
.thumb_set BDMA_CH6_Handler, Default_Handler
.weak BDMA_CH7_Handler
.thumb_set BDMA_CH7_Handler, Default_Handler
.weak COMP_Handler
.thumb_set COMP_Handler, Default_Handler
.weak LPTIM2_Handler
.thumb_set LPTIM2_Handler, Default_Handler
.weak LPTIM3_Handler
.thumb_set LPTIM3_Handler, Default_Handler
.weak LPTIM4_Handler
.thumb_set LPTIM4_Handler, Default_Handler
.weak LPTIM5_Handler
.thumb_set LPTIM5_Handler, Default_Handler
.weak LPUART_Handler
.thumb_set LPUART_Handler, Default_Handler
.weak CRS_Handler
.thumb_set CRS_Handler, Default_Handler
.weak ECC_DIAG_IT_Handler
.thumb_set ECC_DIAG_IT_Handler, Default_Handler
.weak SAI4_Handler
.thumb_set SAI4_Handler, Default_Handler
.weak TEMP_IT_Handler
.thumb_set TEMP_IT_Handler, Default_Handler
.weak WKUP_Handler
.thumb_set WKUP_Handler, Default_Handler
.weak OCTOSPI2_Handler
.thumb_set OCTOSPI2_Handler, Default_Handler
.weak OTFDEC1_Handler
.thumb_set OTFDEC1_Handler, Default_Handler
.weak OTFDEC2_Handler
.thumb_set OTFDEC2_Handler, Default_Handler
.weak FMAC_Handler
.thumb_set FMAC_Handler, Default_Handler
.weak CORDIC_IT_Handler
.thumb_set CORDIC_IT_Handler, Default_Handler
.weak UART9_Handler
.thumb_set UART9_Handler, Default_Handler
.weak USART10_Handler
.thumb_set USART10_Handler, Default_Handler
.weak I2C5_EV_Handler
.thumb_set I2C5_EV_Handler, Default_Handler
.weak I2C5_ER_Handler
.thumb_set I2C5_ER_Handler, Default_Handler
.weak FDCAN3_IT0_Handler
.thumb_set FDCAN3_IT0_Handler, Default_Handler
.weak FDCAN3_IT1_Handler
.thumb_set FDCAN3_IT1_Handler, Default_Handler
.weak TIM23_Handler
.thumb_set TIM23_Handler, Default_Handler
.weak TIM24_Handler
.thumb_set TIM24_Handler, Default_Handler

.text
.align 1
.global Reset_Handler
.type Reset_Handler, %function

Reset_Handler:
    ldr r0, =_sdata
    ldr r1, =_edata
    ldr r2, =_etext

_data:    
    cmp r0, r1
    bhs _bss
    ldr r3, [r2], #4
    str r3, [r0], #4
    b _data

_bss:
    ldr r0, =_sbss
    ldr r1, =_ebss
    mov r3, #0

_bss_loop:
    cmp r0, r1
    bhs _init
    str r3, [r0], #4
    b _bss_loop

_init:
    bl main

_fault:
    b _fault

.size Reset_Handler, . - Reset_Handler
