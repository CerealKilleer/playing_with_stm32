#include <stdint.h>
#include "gpio.h"

int main(void)
{

    gpio_init_port(GPIO_A);
    gpio_set_dir_out(GPIO_A, PIN_5);

    while (1) {
        gpio_put(GPIO_A, PIN_5, HIGH);
    }

    return 0;
}