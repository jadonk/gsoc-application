I've left my source code around as an example.  To build, run `make`.

To cross-build so that it can run on an ARM platform, install a cross-compiler,
then run `CC=${PATH_TO_ARM_CROSS} make` where ${PATH_TO_ARM_CROSS} for the
Angstrom cross compilers would be "arm-angstrom-linux-gnueabi-gcc".  If you're
using the emdebian cross compilers, then it would be "arm-linux-gnueabi-gcc".

To execute the cross built binary, put it onto an ARM Linux system and invoke
helloworld.bin.  To execute the cross built binary on QEMU, install qemu-static
on your machine and run `qemu-arm-static ./helloworld.bin`.

Jason Kridner
jkridner on #beagle
BeagleBoard.org GSoC admin

