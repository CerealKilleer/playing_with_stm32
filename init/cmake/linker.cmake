set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/stm32h7x/stm32h743.ld)

set(LINKER_FLAGS
    -T${LINKER_SCRIPT}
    --specs=nano.specs
    -nostartfiles
    -specs=nosys.specs
    -Wl,-Map=${PROJECT_NAME}.map
)
