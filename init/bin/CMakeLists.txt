add_executable(${TARGET_NAME} ${CMAKE_SOURCE_DIR}/src/main.c)
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include/)

target_compile_options(${TARGET_NAME} PRIVATE ${C_FLAGS})
target_link_options(${TARGET_NAME} PRIVATE ${LINKER_FLAGS})

target_link_libraries(${TARGET_NAME}
                        stm32h7x_startup
                        gpio)

find_program(ARM_SIZE arm-none-eabi-size REQUIRED)

add_custom_command(
    TARGET ${PROJECT_NAME}.elf
    POST_BUILD
    COMMAND ${ARM_SIZE} --format=berkeley ${PROJECT_NAME}.elf
)