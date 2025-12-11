cmake_minimum_required(VERSION 3.15)

project(stm_test)

enable_language(C ASM)
set(CMAKE_C_STANDARD 11)
set(TARGET_NAME "${CMAKE_PROJECT_NAME}.elf")

include(${CMAKE_SOURCE_DIR}/cmake/toolchain.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/compiler.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/linker.cmake)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(bin)
add_subdirectory(stm32h7x)
add_subdirectory(stm32h7x/hardware)

add_compile_options(${C_FLAGS})
add_link_options(${LINKER_FLAGS})

