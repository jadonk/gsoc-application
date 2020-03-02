I am using the example source code given by Jason Krinder. To build, run `make`.

To cross-build so that it can run on an ARM platform, install a cross-compiler,
then run `arm-linux-gnueabi-gcc`

To execute the cross built binary, put it onto an ARM Linux system and invoke
helloworld.bin.  To execute the cross built binary I've installed qemu static
and ran `qemu-arm-static ./helloworld.bin`.

Gokul P
Manipal Institute of Technology





