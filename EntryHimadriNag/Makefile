CC ?= gcc
CFLAGS ?= -Wall -static

all: helloworld.bin

helloworld.bin: helloworld.c
	$(CC) $(CFLAGS) -o helloworld.bin helloworld.c

clean:
	rm -f helloworld.bin
