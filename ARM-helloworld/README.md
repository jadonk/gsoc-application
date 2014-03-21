I've left my source code around as an example.  To build, run `make`.

To cross-build so that it can run on an ARM platform, install a cross-compiler,
then run `CC=${PATH_TO_ARM_CROSS} make` where ${PATH_TO_ARM_CROSS} for the
Angstrom cross compilers would be "arm-angstrom-linux-gnueabi-gcc".  If you're
using the emdebian cross compilers, then it would be "arm-linux-gnueabi-gcc".



1. First I installed gcc-arm-linux-gnueabi on Xununtu.

''' sudo apt-get install gcc-arm-linux-gnueabi'''

2. Then I compiled my *helloworld.c* file.

''' make CC=arm-linux-gnueabi-gcc '''

3. Finally, I tested helloworld.bin on a Raspberry Pi. And it works properly.