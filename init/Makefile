CC=arm-none-eabi-gcc
MACH=cortex-m7
CFLAGS= -Wall -mcpu=$(MACH) -mthumb --std=gnu11 -O0

stm32h7_startup.o: stm32h7_startup.c
	$(CC) $< $@ -c ${CFLAFS}

clean:
	rm *.o