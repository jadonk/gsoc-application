all:
	aarch64-linux-gnu-gcc -static -o hello64 helloworld.c
	aarch64-linux-gnu-gcc -o hello64dyn helloworld.c
run:
	./hello64
runqemu:
	qemu-aarch64 -L /usr/aarch64-linux-gnu ./hello64dyn
clean:
	rm hello64 hello64dyn
