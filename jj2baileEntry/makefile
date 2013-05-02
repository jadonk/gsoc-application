PREFIX = arm-none-linux-gnueabi
CC = $(PREFIX)-gcc
CFLAGS = -static -Wall -Werror

all: qual

qual: 
	$(CC) $(CFLAGS) qual.c -o qual

.PHONY: clean

clean:
	rm qual
