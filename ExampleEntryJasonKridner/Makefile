all:
	${CC} -static -o helloworld.bin helloworld.c
run: 
	qemu-arm-static -L /usr/arm-linux-gnueabi/ ./helloworld.bin
	
