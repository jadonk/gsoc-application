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

---

###Martina Verardi's Notes

I followed the steps to cross-compile and run the binary on QEMU within WSL. Here is what I did:
```
martina@MartinaX1:/mnt/c/Windows/Documents/gsoc-application/ExampleEntryJasonKridner$ make CC=arm-linux-gnueabihf-gcc
arm-linux-gnueabihf-gcc -static -o helloworld.bin helloworld.c

martina@MartinaX1:/mnt/c/Windows/Documents/gsoc-application/ExampleEntryJasonKridner$ qemu-arm-static ./helloworld.bin
Martina Verardi - Mar  5 2025
```

```martina@MartinaX1:/mnt/c/Windows/Documents/gsoc-application/ExampleEntryJasonKridner$Everything``` worked as expected, and the binary successfully ran under QEMU inside WSL.
