# George-GSoC-requirements
for BeagleBoard.org GSoC application
This is the task mentioned in the General requirments page
https://elinux.org/BeagleBoard/GSoC/Ideas-2023#General_requirements

to cross compile the hello.c program as ARM 32-bit ELF binary execute the following command

`CC=arm-linux-gnueabi-gcc make`

this compiles the program.
Check the file information with

`file hello.bin`it should say

`hello.bin: ELF 32-bit LSB executable, ARM, EABI5 version 1 (SYSV), statically linked, BuildID[sha1]=a51c4a0f9a87096aa7446662de3853635a39ce67, for GNU/Linux 3.2.0, not stripped`

next to run the program I ran

`qemu-arm-static -L /usr/arm-linux-gnueabi ./hello.bin`

The output will be the name followed by the date

`George Johnson: Mar 18 2023`
