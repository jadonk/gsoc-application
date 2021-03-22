TARGET ?= helloworld
CXXFLAGS = -static -o
EXEC ?= ar
CC = arm-linux-gnueabihf-gcc
EMU = qemu-arm

all: build run

run:
	$(EMU) $(TARGET).bin

build:
	$(CC) $(CXXFLAGS) $(TARGET).bin $(TARGET).c

.PHONY: clean
clean:
	$(RM) *.o *.bin

