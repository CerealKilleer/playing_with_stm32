#ifndef __HARDWARE_GPIO_REGS_H__
#define __HARDWARE_GPIO_REGS_H__

#include "types.h"

#define GPIOA_BASE_REG      _u(0x58020000)
#define GPIOB_BASE_REG      _u(0x58020400)
#define GPIOC_BASE_REG      _u(0x58020800)
#define GPIOD_BASE_REG      _u(0x58020C00)
#define GPIOE_BASE_REG      _u(0x58021000)
#define GPIOF_BASE_REG      _u(0x58021400)
#define GPIOG_BASE_REG      _u(0x58021800)
#define GPIOH_BASE_REG      _u(0x58021C00)
#define GPIOJ_BASE_REG      _u(0x58022400)
#define GPIOK_BASE_REG      _u(0x58022800)

//GPIO port mode register (GPIOx_MODER)
#define GPIO_MODER_OFFSET               _u(0x00)
#define GPIO_MODER_BITS                 _u(0xFFFFFFFF)
#define GPIO_MODER_MODE_BITS            _u(0x3)
#define GPIO_MODER_MODE_INPUT           _u(0x0)
#define GPIO_MODER_MODE_OUTPUT          _u(0x1)
#define GPIO_MODER_MODE_ALT_FUNC        _u(0x2)
#define GPIO_MODER_MODE_ANALOG          _u(0x3)


#define GPIOA_MODER_RESET               _u(0xABFFFFFF)
#define GPIOB_MODER_RESET               _u(0xFFFFFEBF)
#define GPIOJ_MODER_RESET               _u(0x00FF0000)
#define GPIOK_MODER_RESET               _u(0x0000003F)
#define GPIOOTHERS_MODER_RESET          _u(0xFFFFFFFF)

//GPIO MODER_MODE
#define GPIO_MODER_MODE_Pos(pin)         (_u(2) * (pin))
#define GPIO_MODER_MODE_Msk(pin)         (GPIO_MODER_MODE_BITS << GPIO_MODER_MODE_Pos(pin))

//GPIO port output type register (GPIOx_OTYPER)
#define GPIO_OTYPER_OFFSET              _u(0x04)
#define GPIO_OTYPER_BITS                _u(0x0000FFFF)
#define GPIO_OTYPER_OT_BITS             _u(0x1)
#define GPIO_OTYPER_OT_PUSH_PULL        _u(0x0)
#define GPIO_OTYPER_OT_OPEN_DRAIN       _u(0x1)
#define GPIO_OTYPER_RESET               _u(0x00000000)

#define GPIO_OTYPER_OT_Pos(pin)         (pin)
#define GPIO_OTYPER_OT_Msk(pin)         (GPIO_OTYPER_OT_BITS << GPIO_OTYPER_OT_Pos(pin))

//GPIO port output speed register (GPIOx_OSPEEDR)
#define GPIO_OSPEEDR_OFFSET            _u(0x08)
#define GPIO_OSPEEDR_BITS              _u(0xFFFFFFFF)
#define GPIO_OSPEEDR_SPEED_BITS        _u(0x03)
#define GPIO_OSPEEDR_SPEED_LOW         _u(0x0)
#define GPIO_OSPEEDR_SPEED_MEDIUM      _u(0x1)
#define GPIO_OSPEEDR_SPEED_HIGH        _u(0x2)
#define GPIO_OSPEEDR_SPEED_VERY_HIGH   _u(0x3)

#define GPIOA_OSPEEDR_RESET            _u(0x0C000000)
#define GPIOB_OSPEEDR_RESET            _u(0x000000C0)
#define GPIOOTHERS_OSPEEDR_RESET       _u(0x00000000)

#define GPIO_OSPEEDR_SPEED_Pos(pin)    (_u(2) * pin)
#define GPIO_OSPEEDR_SPEED_Msk(pin)    (GPIO_OSPEEDR_SPEED_BITS << GPIO_OSPEEDR_SPEED_Pos(pin))

//GPIO port pull-up/pull-down register (GPIOx_PUPDR)
#define GPIO_PUPDR_OFFSET              _u(0x0C)
#define GPIO_PUPDR_BITS                _u(0xFFFFFFFF)
#define GPIO_PUPDR_PUPD_BITS           _u(0x3)
#define GPIO_PUPDR_PUPD_NONE           _u(0x0)
#define GPIO_PUPDR_PUPD_PULL_UP        _u(0x1)
#define GPIO_PUPDR_PUPD_PULL_DOWN      _u(0x2)

#define GPIOA_PUPDR_RESET                   _u(0x64000000)
#define GPIOB_PUPDR_RESET                   _u(0x00000100)
#define GPIOOTHERS_PUPDR_RESET              _u(0x00000000)

#define GPIO_PUPDR_PUPD_Pos(pin)        (_u(2) * pin)
#define GPIO_PUPDR_PUPD_Msk(pin)        (GPIO_PUPDR_PUPD_BITS << GPIO_PUPDR_PUPD_Pos(pin))

//GPIO port input data register (GPIOx_IDR)
#define GPIO_IDR_OFFSET                _u(0x10)
#define GPIO_IDR_BITS                  _u(0x0000FFFF)
#define GPIO_IDR_ID_BITS               _u(0x1)

#define GPIO_IDR_RESET                 _u(0x0000FFFF)

#define GPIO_IDR_ID_Pos(pin)           (pin)
#define GPIO_IDR_ID_Msk(pin)           (GPIO_IDR_ID_BITS << GPIO_IDR_ID_Pos(pin))

//GPIO port output data register (GPIOx_ODR)
#define GPIO_ODR_OFFSET                _u(0x14)
#define GPIO_ODR_BITS                  _u(0x0000FFFF)
#define GPIO_ODR_OD_BITS               _u(0x1)

#define GPIO_ODR_RESET                 _u(0x00000000)

#define GPIO_ODR_OD_Pos(pin)           (pin)
#define GPIO_ODR_OD_Msk(pin)           (GPIO_ODR_OD_BITS << GPIO_ODR_OD_Pos(pin))

//GPIO port bit set/reset register (GPIOx_BSRR)
#define GPIO_BSRR_OFFSET                    _u(0x18)
#define GPIO_BSRR_BITS                      _u(0xFFFFFFFF)
#define GPIO_BSRR_BS_BITS                   _u(0x1)
#define GPIO_BSRR_BR_BITS                   _u(0x1)

#define GPIO_BSRR_RESET                     _u(0x00000000)

#define GPIO_BSRR_BS_Pos(pin)               (pin)
#define GPIO_BSRR_BS_Msk(pin)               (GPIO_BSRR_BS_BITS << GPIO_BSRR_BS_Pos(pin))

#define GPIO_BSRR_BR_Pos(pin)               (pin + 16)
#define GPIO_BSRR_BR_Msk(pin)               (GPIO_BSRR_BR_BITS << GPIO_BSRR_BR_Pos(pin))

//GPIO port configuration lock register (GPIOx_LCKR)
#define GPIO_LCKR_OFFSET                    _u(0x1C)
#define GPIO_LCKR_BITS                      _u(0x0001FFFF)
#define GPIO_LCKR_LCK_BITS                  _u(0x1)

#define GPIO_LCKR_RESET                     _u(0x00000000)

#define GPIO_LCKR_LCK_Pos(pin)              (pin)
#define GPIO_LCKR_LCK_Msk(pin)              (GPIO_LCKR_LCK_BITS << GPIO_LCKR_LCK_Pos(pin))
#define GPIO_LCKR_LCKK_Pos                  16
#define GPIO_LCKR_LCKK_Msk                  (GPIO_LCKR_LCK_BITS << GPIO_LCKR_LCKK_Pos)

//GPIO alternate function low register (GPIOx_AFRL)
#define GPIO_AFRL_OFFSET                    _u(0x20)
#define GPIO_AFRL_BITS                      _u(0xFFFFFFFF)
#define GPIO_AFRL_AF_BITS                   _u(0x0000000F)
#define GPIO_AFRL_AF_AF0                    _u(0x0)
#define GPIO_AFRL_AF_AF1                    _u(0x1)
#define GPIO_AFRL_AF_AF2                    _u(0x2)
#define GPIO_AFRL_AF_AF3                    _u(0x3)
#define GPIO_AFRL_AF_AF4                    _u(0x4)
#define GPIO_AFRL_AF_AF5                    _u(0x5)
#define GPIO_AFRL_AF_AF6                    _u(0x6)
#define GPIO_AFRL_AF_AF7                    _u(0x7)
#define GPIO_AFRL_AF_AF8                    _u(0x8)
#define GPIO_AFRL_AF_AF9                    _u(0x9)
#define GPIO_AFRL_AF_AF10                   _u(0xA)
#define GPIO_AFRL_AF_AF11                   _u(0xB)
#define GPIO_AFRL_AF_AF12                   _u(0xC)
#define GPIO_AFRL_AF_AF13                   _u(0xD)
#define GPIO_AFRL_AF_AF14                   _u(0xE)
#define GPIO_AFRL_AF_AF15                   _u(0xF)

#define GPIO_AFRL_RESET                     _u(0x00000000)
#define GPIO_AFRL_AF_Pos(pin)               (_u(4) * pin)
#define GPIO_AFRL_AF_Msk(pin)               (GPIO_AFRL_AF_BITS << GPIO_AFRL_AF_Pos(pin))

//GPIO alternate function high register (GPIOx_AFRH)

#define GPIO_AFRH_OFFSET                    _u(0x24)
#define GPIO_AFRH_BITS                      _u(0xFFFFFFFF)
#define GPIO_AFRH_AF_BITS                   _u(0x0000000F)
#define GPIO_AFRH_AF_AF0                    _u(0x0)
#define GPIO_AFRH_AF_AF1                    _u(0x1)
#define GPIO_AFRH_AF_AF2                    _u(0x2)
#define GPIO_AFRH_AF_AF3                    _u(0x3)
#define GPIO_AFRH_AF_AF4                    _u(0x4)
#define GPIO_AFRH_AF_AF5                    _u(0x5)
#define GPIO_AFRH_AF_AF6                    _u(0x6)
#define GPIO_AFRH_AF_AF7                    _u(0x7)
#define GPIO_AFRH_AF_AF8                    _u(0x8)
#define GPIO_AFRH_AF_AF9                    _u(0x9)
#define GPIO_AFRH_AF_AF10                   _u(0xA)
#define GPIO_AFRH_AF_AF11                   _u(0xB)
#define GPIO_AFRH_AF_AF12                   _u(0xC)
#define GPIO_AFRH_AF_AF13                   _u(0xD)
#define GPIO_AFRH_AF_AF14                   _u(0xE)
#define GPIO_AFRH_AF_AF15                   _u(0xF)

#define GPIO_AFRH_RESET                     _u(0x00000000)
#define GPIO_AFRH_AF_Pos(pin)               (_u(4) * (pin - 8))
#define GPIO_AFRH_AF_Msk(pin)               (GPIO_AFRH_AF_BITS << GPIO_AFRH_AF_Pos(pin))
#endif