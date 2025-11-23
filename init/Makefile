CC=arm-none-eabi-gcc
MACH=cortex-m7
CFLAGS= -Wall -mcpu=$(MACH) -mthumb --std=gnu11 -O0
LDFLAGS = -nostdlib -T stm32_ls.ld -Wl,-Map=final.map
BUILD_DIR=./build
OUTPUT=$(BUILD_DIR)/final.elf

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/stm32h7x_startup.o
	$(CC) $(LDFLAGS) $? -o $(OUTPUT)

$(BUILD_DIR)/main.o: main.c | $(BUILD_DIR)
	$(CC) -c ${CFLAGS} $< -o $@

$(BUILD_DIR)/stm32h7x_startup.o: stm32h7x_startup.s | $(BUILD_DIR)
	$(CC) -c ${CFLAGS} $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

load:
	openocd -f interface/stlink-v2.cfg -f target/stm32h7x.cfg

clean:
	rm -rf $(BUILD_DIR)