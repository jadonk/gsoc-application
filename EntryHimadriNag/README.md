# GSoC Application - Himadri Nag

Hello World application for the BeagleBoard.org GSoC application.
It prints my name and the current date in an ARM Linux environment.

## Build

To build natively:

	make

To cross-compile for ARM:

	make CC=arm-linux-gnueabihf-gcc

## Run

On an ARM Linux system:

	./helloworld.bin

Using QEMU on a non-ARM machine:

	qemu-arm-static ./helloworld.bin

## Sample output

	Hello World!
	Name: Himadri Nag
	Date: Fri Oct 10 02:47:00 2026

## About me

Third-year Electronics and Communication Engineering student at
NIT Calicut, interested in embedded systems and firmware development.
