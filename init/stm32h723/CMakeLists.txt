add_library(stm32h7x_startup STATIC ${CMAKE_SOURCE_DIR}/stm32h7x/stm32h7x_startup.s)
target_compile_options(stm32h7x_startup PRIVATE ${C_FLAGS})
