/**
* @brief Primer startup file para mi stm32h723
*/

#include <stdint.h>
#define STACK_ADDR (0x20000000ULL)
#define STACK_SIZE (128 * 1024)
#define STACK_END (STACK_ADDR + STACK_SIZE)
#define RESERVED (0)

void reset_handler(void);
void nmi_handler(void) __attribute__((weak, alias ("default_handler")));
void hardfault_handler(void) __attribute__((weak, alias("default_handler")));
void memmanage_handler(void) __attribute__((weak, alias("default_handler")));
void busfault_handler(void) __attribute__((weak, alias("default_handler")));
void usagefault_handler(void) __attribute__((weak, alias("default_handler")));
void svcall_handler(void) __attribute__((weak, alias("default_handler")));
void debug_monitor_handler(void) __attribute__((weak, alias("default_handler")));
void pendsv_handler(void) __attribute__((weak, alias("default_handler")));
void systick_handler(void) __attribute__((weak, alias("default_handler")));
void wwdg1_handler(void) __attribute__((weak, alias("default_handler")));
void pvd_pvm_handler(void) __attribute__((weak, alias("default_handler")));
void rtc_tamp_stamp_css_lse_handler(void) __attribute__((weak, alias("default_handler")));
void rtc_wkup_handler(void) __attribute__((weak, alias("default_handler")));
void flash_handler(void) __attribute__((weak, alias("default_handler")));
void rcc_handler(void) __attribute__((weak, alias("default_handler")));
void exti0_handler(void) __attribute__((weak, alias("default_handler")));
void exti1_handler(void) __attribute__((weak, alias("default_handler")));
void exti2_handler(void) __attribute__((weak, alias("default_handler")));
void exti3_handler(void) __attribute__((weak, alias("default_handler")));
void exti4_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str0_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str1_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str2_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str3_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str4_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str5_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str6_handler(void) __attribute__((weak, alias("default_handler")));
void adc1_2_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan1_it0_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan2_it0_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan1_it1_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan2_it1_handler(void) __attribute__((weak, alias("default_handler")));
void exti9_5_handler(void) __attribute__((weak, alias("default_handler")));
void tim1_brk_handler(void) __attribute__((weak, alias("default_handler")));
void tim1_up_handler(void) __attribute__((weak, alias("default_handler")));
void tim1_trg_com_handler(void) __attribute__((weak, alias("default_handler")));
void tim1_cc_handler(void) __attribute__((weak, alias("default_handler")));
void tim2_handler(void) __attribute__((weak, alias("default_handler")));
void tim3_handler(void) __attribute__((weak, alias("default_handler")));
void tim4_handler(void) __attribute__((weak, alias("default_handler")));
void i2c1_ev_handler(void) __attribute__((weak, alias("default_handler")));
void i2c1_er_handler(void) __attribute__((weak, alias("default_handler")));
void i2c2_ev_handler(void) __attribute__((weak, alias("default_handler")));
void i2c2_er_handler(void) __attribute__((weak, alias("default_handler")));
void spi1_handler(void) __attribute__((weak, alias("default_handler")));
void spi2_handler(void) __attribute__((weak, alias("default_handler")));
void usart1_handler(void) __attribute__((weak, alias("default_handler")));
void usart2_handler(void) __attribute__((weak, alias("default_handler")));
void usart3_handler(void) __attribute__((weak, alias("default_handler")));
void exti15_10_handler(void) __attribute__((weak, alias("default_handler")));
void rtc_alarm_handler(void) __attribute__((weak, alias("default_handler")));
void tim8_brk_tim12_handler(void) __attribute__((weak, alias("default_handler")));
void tim8_brk_tim13_handler(void) __attribute__((weak, alias("default_handler")));
void tim8_brk_tim14_handler(void) __attribute__((weak, alias("default_handler")));
void tim8_cc_handler(void) __attribute__((weak, alias("default_handler")));
void dma1_str7_handler(void) __attribute__((weak, alias("default_handler")));
void fmc_handler(void) __attribute__((weak, alias("default_handler")));
void sdmmc1_handler(void) __attribute__((weak, alias("default_handler")));
void tim5_handler(void) __attribute__((weak, alias("default_handler")));
void spi3_handler(void) __attribute__((weak, alias("default_handler")));
void uart4_handler(void) __attribute__((weak, alias("default_handler")));
void uart5_handler(void) __attribute__((weak, alias("default_handler")));
void tim6_dac_handler(void) __attribute__((weak, alias("default_handler")));
void tim7_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str0_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str1_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str2_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str3_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str4_handler(void) __attribute__((weak, alias("default_handler")));
void eth_handler(void) __attribute__((weak, alias("default_handler")));
void eth_wkup_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan_cal_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str5_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str6_handler(void) __attribute__((weak, alias("default_handler")));
void dma2_str7_handler(void) __attribute__((weak, alias("default_handler")));
void usart6_handler(void) __attribute__((weak, alias("default_handler")));
void i2c3_ev_handler(void) __attribute__((weak, alias("default_handler")));
void i2c3_er_handler(void) __attribute__((weak, alias("default_handler")));
void otg_hs_ep1_out_handler(void) __attribute__((weak, alias("default_handler")));
void otg_hs_ep1_in_handler(void) __attribute__((weak, alias("default_handler")));
void otg_hs_wkup_handler(void) __attribute__((weak, alias("default_handler")));
void otg_hs_handler(void) __attribute__((weak, alias("default_handler")));
void dcmi_pssi_handler(void) __attribute__((weak, alias("default_handler")));
void cryp_handler(void) __attribute__((weak, alias("default_handler")));
void hash_rng_handler(void) __attribute__((weak, alias("default_handler")));
void fpu_handler(void) __attribute__((weak, alias("default_handler")));
void uart7_handler(void) __attribute__((weak, alias("default_handler")));
void uart8_handler(void) __attribute__((weak, alias("default_handler")));
void spi4_handler(void) __attribute__((weak, alias("default_handler")));
void spi5_handler(void) __attribute__((weak, alias("default_handler")));
void spi6_handler(void) __attribute__((weak, alias("default_handler")));
void sai1_handler(void) __attribute__((weak, alias("default_handler")));
void ltdc_handler(void) __attribute__((weak, alias("default_handler")));
void ltdc_err_handler(void) __attribute__((weak, alias("default_handler")));
void dma2d_handler(void) __attribute__((weak, alias("default_handler")));
void octospi1_handler(void) __attribute__((weak, alias("default_handler")));
void lptim1_handler(void) __attribute__((weak, alias("default_handler")));
void cec_handler(void) __attribute__((weak, alias("default_handler")));
void i2c4_ev_handler(void) __attribute__((weak, alias("default_handler")));
void i2c4_er_handler(void) __attribute__((weak, alias("default_handler")));
void spdif_handler(void) __attribute__((weak, alias("default_handler")));
void dmamux1_ov_handler(void) __attribute__((weak, alias("default_handler")));
void dfsdm1_flt0_handler(void) __attribute__((weak, alias("default_handler")));
void dfsdm1_flt1_handler(void) __attribute__((weak, alias("default_handler")));
void dfsdm1_flt2_handler(void) __attribute__((weak, alias("default_handler")));
void dfsdm1_flt3_handler(void) __attribute__((weak, alias("default_handler")));
void swpmi1_handler(void) __attribute__((weak, alias("default_handler")));
void tim15_handler(void) __attribute__((weak, alias("default_handler")));
void tim16_handler(void) __attribute__((weak, alias("default_handler")));
void tim17_handler(void) __attribute__((weak, alias("default_handler")));
void mdios_wkup_handler(void) __attribute__((weak, alias("default_handler")));
void mdios_handler(void) __attribute__((weak, alias("default_handler")));
void mdma_handler(void) __attribute__((weak, alias("default_handler")));
void sdmmc2_handler(void) __attribute__((weak, alias("default_handler")));
void hsem0_handler(void) __attribute__((weak, alias("default_handler")));
void adc3_handler(void) __attribute__((weak, alias("default_handler")));
void dmamux2_ovr_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch0_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch1_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch2_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch3_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch4_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch5_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch6_handler(void) __attribute__((weak, alias("default_handler")));
void bdma_ch7_handler(void) __attribute__((weak, alias("default_handler")));
void comp_handler(void) __attribute__((weak, alias("default_handler")));
void lptim2_handler(void) __attribute__((weak, alias("default_handler")));
void lptim3_handler(void) __attribute__((weak, alias("default_handler")));
void lptim4_handler(void) __attribute__((weak, alias("default_handler")));
void lptim5_handler(void) __attribute__((weak, alias("default_handler")));
void lpuart_handler(void) __attribute__((weak, alias("default_handler")));
void crs_handler(void) __attribute__((weak, alias("default_handler")));
void ecc_diag_it_handler(void) __attribute__((weak, alias("default_handler")));
void sai4_handler(void) __attribute__((weak, alias("default_handler")));
void temp_it_handler(void) __attribute__((weak, alias("default_handler")));
void wkup_handler(void) __attribute__((weak, alias("default_handler")));
void octospi2_handler(void) __attribute__((weak, alias("default_handler")));
void otfdec1_handler(void) __attribute__((weak, alias("default_handler")));
void otfdec2_handler(void) __attribute__((weak, alias("default_handler")));
void fmac_handler(void) __attribute__((weak, alias("default_handler")));
void cordic_it_handler(void) __attribute__((weak, alias("default_handler")));
void uart9_handler(void) __attribute__((weak, alias("default_handler")));
void usart10_handler(void) __attribute__((weak, alias("default_handler")));
void i2c5_ev_handler(void) __attribute__((weak, alias("default_handler")));
void i2c5_er_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan3_it0_handler(void) __attribute__((weak, alias("default_handler")));
void fdcan3_it1_handler(void) __attribute__((weak, alias("default_handler")));
void tim23_handler(void) __attribute__((weak, alias("default_handler")));
void tim24_handler(void) __attribute__((weak, alias("default_handler")));

uint32_t isr_vector[] __attribute__((section(".isr_vector"))) = {
    STACK_ADDR,
    (uint32_t)reset_handler,
    (uint32_t)nmi_handler,
    (uint32_t)hardfault_handler,
    (uint32_t)memmanage_handler,
    (uint32_t)busfault_handler,
    (uint32_t)usagefault_handler,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    (uint32_t)svcall_handler,
    (uint32_t)debug_monitor_handler,
    RESERVED,
    (uint32_t)pendsv_handler,
    (uint32_t)systick_handler,
    (uint32_t)wwdg1_handler,
    (uint32_t)pvd_pvm_handler,
    (uint32_t)rtc_tamp_stamp_css_lse_handler,
    (uint32_t)rtc_wkup_handler,
    (uint32_t)flash_handler,
    (uint32_t)rcc_handler,
    (uint32_t)exti0_handler,
    (uint32_t)exti1_handler,
    (uint32_t)exti2_handler,
    (uint32_t)exti3_handler,
    (uint32_t)exti4_handler,
    (uint32_t)dma1_str0_handler,
    (uint32_t)dma1_str1_handler,
    (uint32_t)dma1_str2_handler,
    (uint32_t)dma1_str3_handler,
    (uint32_t)dma1_str4_handler,
    (uint32_t)dma1_str5_handler,
    (uint32_t)dma1_str6_handler,
    (uint32_t)adc1_2_handler,
    (uint32_t)fdcan1_it0_handler,
    (uint32_t)fdcan2_it0_handler,
    (uint32_t)fdcan1_it1_handler,
    (uint32_t)fdcan2_it1_handler,
    (uint32_t)exti9_5_handler,
    (uint32_t)tim1_brk_handler,
    (uint32_t)tim1_up_handler,
    (uint32_t)tim1_trg_com_handler,
    (uint32_t)tim1_cc_handler,
    (uint32_t)tim2_handler,
    (uint32_t)tim3_handler,
    (uint32_t)tim4_handler,
    (uint32_t)i2c1_ev_handler,
    (uint32_t)i2c1_er_handler,
    (uint32_t)i2c2_ev_handler,
    (uint32_t)i2c2_er_handler,
    (uint32_t)spi1_handler,
    (uint32_t)spi2_handler,
    (uint32_t)usart1_handler,
    (uint32_t)usart2_handler,
    (uint32_t)usart3_handler,
    (uint32_t)exti15_10_handler,
    (uint32_t)rtc_alarm_handler,
    RESERVED,
    (uint32_t)tim8_brk_tim12_handler,
    (uint32_t)tim8_brk_tim13_handler,
    (uint32_t)tim8_brk_tim14_handler,
    (uint32_t)tim8_cc_handler,
    (uint32_t)dma1_str7_handler,
    (uint32_t)fmc_handler,
    (uint32_t)sdmmc1_handler,
    (uint32_t)tim5_handler,
    (uint32_t)spi3_handler,
    (uint32_t)uart4_handler,
    (uint32_t)uart5_handler,
    (uint32_t)tim6_dac_handler,
    (uint32_t)tim7_handler,
    (uint32_t)dma2_str0_handler,
    (uint32_t)dma2_str1_handler,
    (uint32_t)dma2_str2_handler,
    (uint32_t)dma2_str3_handler,
    (uint32_t)dma2_str4_handler,
    (uint32_t)eth_handler,
    (uint32_t)eth_wkup_handler,
    (uint32_t)fdcan_cal_handler,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    (uint32_t)dma2_str5_handler,
    (uint32_t)dma2_str6_handler,
    (uint32_t)dma2_str7_handler,
    (uint32_t)usart6_handler,
    (uint32_t)i2c3_ev_handler,
    (uint32_t)i2c3_er_handler,
    (uint32_t)otg_hs_ep1_out_handler,
    (uint32_t)otg_hs_ep1_in_handler,
    (uint32_t)otg_hs_wkup_handler,
    (uint32_t)otg_hs_handler,
    (uint32_t)dcmi_pssi_handler,
    (uint32_t)cryp_handler,
    (uint32_t)hash_rng_handler,
    (uint32_t)fpu_handler,
    (uint32_t)uart7_handler,
    (uint32_t)uart8_handler,
    (uint32_t)spi4_handler,
    (uint32_t)spi5_handler,
    (uint32_t)spi6_handler,
    (uint32_t)sai1_handler,
    (uint32_t)ltdc_handler,
    (uint32_t)ltdc_err_handler,
    (uint32_t)dma2d_handler,
    RESERVED,
    (uint32_t)octospi1_handler,
    (uint32_t)lptim1_handler,
    (uint32_t)cec_handler,
    (uint32_t)i2c4_ev_handler,
    (uint32_t)i2c4_er_handler,
    (uint32_t)spdif_handler,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    (uint32_t)dmamux1_ov_handler,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    (uint32_t)dfsdm1_flt0_handler,
    (uint32_t)dfsdm1_flt1_handler,
    (uint32_t)dfsdm1_flt2_handler,
    (uint32_t)dfsdm1_flt3_handler,
    RESERVED,
    (uint32_t)swpmi1_handler,
    (uint32_t)tim15_handler,
    (uint32_t)tim16_handler,
    (uint32_t)tim17_handler,
    (uint32_t)mdios_wkup_handler,
    (uint32_t)mdios_handler,
    RESERVED,
    (uint32_t)mdma_handler,
    RESERVED,
    (uint32_t)sdmmc2_handler,
    (uint32_t)hsem0_handler,
    RESERVED,
    (uint32_t)adc3_handler,
    (uint32_t)dmamux2_ovr_handler,
    (uint32_t)bdma_ch0_handler,
    (uint32_t)bdma_ch1_handler,
    (uint32_t)bdma_ch2_handler,
    (uint32_t)bdma_ch3_handler,
    (uint32_t)bdma_ch4_handler,
    (uint32_t)bdma_ch5_handler,
    (uint32_t)bdma_ch6_handler,
    (uint32_t)bdma_ch7_handler,
    (uint32_t)comp_handler,
    (uint32_t)lptim2_handler,
    (uint32_t)lptim3_handler,
    (uint32_t)lptim4_handler,
    (uint32_t)lptim5_handler,
    (uint32_t)lpuart_handler,
    RESERVED,
    (uint32_t)crs_handler,
    (uint32_t)ecc_diag_it_handler,
    (uint32_t)sai4_handler,
    (uint32_t)temp_it_handler,
    RESERVED,
    (uint32_t)wkup_handler,
    (uint32_t)octospi2_handler,
    (uint32_t)otfdec1_handler,
    (uint32_t)otfdec2_handler,
    (uint32_t)fmac_handler,
    (uint32_t)cordic_it_handler,
    (uint32_t)uart9_handler,
    (uint32_t)usart10_handler,
    (uint32_t)i2c5_ev_handler,
    (uint32_t)i2c5_er_handler,
    (uint32_t)fdcan3_it0_handler,
    (uint32_t)fdcan3_it1_handler,
    (uint32_t)tim23_handler,
    (uint32_t)tim24_handler,
};

void default_handler(void)
{
    while (1) {
        continue;
    }
}

void reset_handler(void)
{
    while (1) {
        continue;
    }
}