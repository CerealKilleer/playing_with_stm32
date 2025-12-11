add_library(gpio STATIC gpio/gpio.c)

target_include_directories(gpio PUBLIC gpio/include)
target_include_directories(gpio PRIVATE ../common/include/)
target_compile_options(gpio PRIVATE ${C_FLAGS})