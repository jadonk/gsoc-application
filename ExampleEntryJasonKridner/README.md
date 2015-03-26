I've added my name and modified the `Makefile`.

The cross-compiler used is `gcc-arm-linux-gnueabihf` and can be installed via `apt-get` on Debian based systems.

To compile - Run `make` in the appropriate directory.

To execute - 
1. On an x86 system : `qemu-arm-static ./helloworld.bin`
2. On an ARM system : `./helloworld.bin`

Rohith Madhavan <rohithmadhavan@gmail.com>

Screenshots - 

1. Cross-compiling and executing using `qemu` on an x86 system -

![alt tag](https://github.com/rohithmadhavan/gsoc-application/blob/master/ExampleEntryJasonKridner/Screenshotx86.png)

2. Executing the binary on an ARM system -

 ![alt tag](https://github.com/rohithmadhavan/gsoc-application/blob/master/ExampleEntryJasonKridner/ScreenshotARM.png)

---

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

