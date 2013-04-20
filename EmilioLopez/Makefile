CC=$(CROSS_COMPILE)gcc

.PHONY: clean

helloworld.bin: helloworld.c
	$(CC) -static -o $@ $<

clean:
	rm -f helloworld.bin
