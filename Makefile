# Tool Macros
CC := arm-linux-gnueabi-gcc

all:
	${CC} -static -o helloworld.bin helloworld.c

run:
	./helloworld.bin

clean:
	@rm -rf helloworld.bin
