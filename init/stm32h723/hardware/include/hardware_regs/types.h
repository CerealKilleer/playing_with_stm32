#ifndef __HARDWARE_COMMON_TYPES_H__
#define __HARDWARE_COMMON_TYPES_H__
#include <stdint.h>
#define _u(x) x ## u
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_rw_32;
typedef volatile uint16_t io_wo_16;
typedef volatile uint16_t io_wo_16;
#endif