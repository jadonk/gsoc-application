I create a statically-linked ARM Linux "hello world" style executable named "hellobeagle.bin".

Below is my steps to get things done:
*   install cross compiler for ARM

My host machine is Ubuntu 12.04, simply run 'sudo apt-get install gcc-arm-linux-gnueabi'.

*   create hellobeagle.c and Makefile and make the executable

The source file 'hellobeagle.c' simply print out my name and date.

To make, run 'CC=arm-linux-gnueabi-gcc make'.

*   install qemu-user-static and run the executable

To install qemu-user-static, simply run 'sudo apt-get install qemu-user-static'.

To invoke the executable, run 'qemu-arm-static ./hellobeagle.bin'.

Done:-)
