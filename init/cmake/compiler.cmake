set(MCU cortex-m7)
set(FPU fpv5-d16)

set(C_FLAGS
    -mcpu=${MCU}
    -mthumb
    -mfpu=${FPU}
    -mfloat-abi=hard
    -W 
    -Wall 
    -Wextra 
    -g3 
    -O0
)
