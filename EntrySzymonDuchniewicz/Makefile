CC = arm-linux-gnueabi-gcc
EMU = qemu-arm-static

all: build run

build:
	$(CC) -static -o helloworld.bin helloworld.c

run:
	$(EMU) helloworld.bin

clean:
	$(RM) helloworld.bin
