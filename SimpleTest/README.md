This is a simple C code, which can be used to set and reset the GPIO pins on the Beaglebone using sysfs entries in linux.

It is part of my GSOC-application, to get an understanding of how peripherals work in userspace.

To compile:

`arm-linux-gnueabi-gcc -static -o gpiotest.bin gpiotest.c`

It was tested on a Beaglebone running Ubuntu distribution 12.10-console-armhf-2013-03-28, Kernel Version: (update)

One needs export the required pin number first:

`echo 38 > /sys/class/gpio/export`

where the required pin number for a GPIOM_N can be derived by M*32 + N. 

In the actual implementation, the export will be performed by a bashscript or an init() function. Same goes for the
Devicetree overlays, which maybe required for UART, PWM and other peripherals.

