add_library(stm32h723_startup STATIC ${CMAKE_CURRENT_SOURCE_DIR}/stm32h723_startup.s)

target_compile_options(stm32h723_startup PRIVATE ${C_FLAGS})
