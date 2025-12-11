ENTRY(Reset_Handler)

MEMORY 
{
    FLASH (rx): ORIGIN = 0x08000000, LENGTH = 1M

    ITCM_RAM (rwx): ORIGIN = 0x00000000, LENGTH = 64K
    DTCM_RAM(rwx): ORIGIN = 0x20000000, LENGTH = 128K
    AXI_SRAM(rwx): ORIGIN = 0x24000000, LENGTH = 128K
    SRAM1_2 (rw): ORIGIN = 0x30000000, LENGTH = 32K
    SRAM4 (rwx): ORIGIN = 0x38000000, LENGTH = 16K
    BCK_SRAM (rw): ORIGIN = 0x38800000, LENGTH = 4K 

    SHARED_ITCM_RAM (rwx): ORIGIN = 0x00010000, LENGTH = 192K
    SHARED_AXI_RAM (rwx): ORIGIN = 0x24020000, LENGTH = 192K
    
}

_estack = ORIGIN(DTCM_RAM) + LENGTH(DTCM_RAM);

SECTIONS
{
    .isr_vector :
    {
        _sisrvector = .;
        *(.isr_vector)
        _eisrvector = .;
    } >ITCM_RAM AT>FLASH

    _sisrvector_load = LOADADDR(.isr_vector);
    
    .text : 
    {
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _etext = .;
    } >FLASH AT>FLASH

    .data :
    {
        _sdata = .;
        *(.data)
        . = ALIGN(4);
        _edata = .;
    } >DTCM_RAM AT>FLASH

    .bss :
    {
        _sbss = .;
        *(.bss)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
    } >DTCM_RAM AT>DTCM_RAM
}