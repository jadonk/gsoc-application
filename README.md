 # GSoC Task 2022: Cross-compiling: Kurva Prashanth

Cross compiled to run on an ARM platform, used the emdebian cross compiler.

To cross-build run
`CC=arm-linux-gnueabi-gcc make`

Installed qemu-static on my machine. To execute the cross built binary, put it onto an ARM Linux system and invoke
helloworld.bin.

To execute the cross built binary on QEMU run
`qemu-arm-static ./helloworld.bin`

## Output
Output is shown in [/output](https://github.com/krvprashanth/gsoc-application/blob/master/Output/prashanth.png) folder



