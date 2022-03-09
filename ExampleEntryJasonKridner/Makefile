CC = arm-linux-gnueabi-gcc
CROSS = qemu-arm-static

all: gen_bin run_bin

gen_bin:
	${CC} -static -o helloworld.bin helloworld.c

run_bin:
	${CROSS} helloworld.bin
