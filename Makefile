build: hello.c
ifeq ($(target),arm)
	arm-linux-gnueabihf-gcc -static -o hello.bin hello.c
else
	gcc -o hello.bin hello.c
endif

run: hello.bin
	./hello.bin

clean: hello.bin
	rm hello.bin
