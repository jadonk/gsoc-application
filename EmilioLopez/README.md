To build for your PC, or in a native ARM environment, run `make`.

To cross-build so that it can run on an ARM platform, install a cross-compiler,
then run `CROSS_COMPILE=${PATH_TO_ARM_CROSS} make` where ${PATH_TO_ARM_CROSS}
for the Angstrom cross compilers would be "arm-angstrom-linux-gnueabi-".  If
you're using the emdebian cross compilers, then it would be
"arm-linux-gnueabi-".

To execute the cross built binary, put it onto an ARM Linux system and invoke
helloworld.bin.  To execute the cross built binary on QEMU, install qemu-static
on your machine and run `qemu-arm-static ./helloworld.bin`.

Emilio López
Based on the example by Jason Kridner
