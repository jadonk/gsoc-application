all:
	${CC} -static --specs=rdimon.specs -o helloworld.bin helloworld.c
	chmod 755 helloworld.bin

run:
	qemu-arm-static ./helloworld.bin
