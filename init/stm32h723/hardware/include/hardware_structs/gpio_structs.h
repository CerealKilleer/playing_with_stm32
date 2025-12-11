#ifndef __HARDWARE_GPIO_STRUCTS_H__
#define __HARDWARE_GPIO_STRUCTS_H__

#include "types.h"
#include "hardware_regs/gpio_regs.h"

typedef struct {
    io_rw_32_t MODER;
    io_rw_32_t OTYPER;
    io_rw_32_t OSPEEDR;
    io_rw_32_t PUPDR;
    io_ro_32_t IDR;
    io_rw_32_t ODR;
    io_wo_32_t BSRR;
    io_rw_32_t LCKR;
    io_rw_32_t AFRL;
    io_rw_32_t AFRH;
} gpio_port_t;

#define GPIO(port) ((gpio_port_t *)(GPIO_PORT_BASE_REG(port)))

#define GPIOA ((gpio_port_t *)(GPIO_PORT_BASE_REG(0)))
#define GPIOB ((gpio_port_t *)(GPIO_PORT_BASE_REG(1)))
#define GPIOC ((gpio_port_t *)(GPIO_PORT_BASE_REG(2)))
#define GPIOD ((gpio_port_t *)(GPIO_PORT_BASE_REG(3)))
#define GPIOE ((gpio_port_t *)(GPIO_PORT_BASE_REG(4)))
#define GPIOF ((gpio_port_t *)(GPIO_PORT_BASE_REG(5)))
#define GPIOG ((gpio_port_t *)(GPIO_PORT_BASE_REG(6)))
#define GPIOH ((gpio_port_t *)(GPIO_PORT_BASE_REG(7)))
#define GPIOJ ((gpio_port_t *)(GPIO_PORT_BASE_REG(8)))
#define GPIOH ((gpio_port_t *)(GPIO_PORT_BASE_REG(9)))

#endif