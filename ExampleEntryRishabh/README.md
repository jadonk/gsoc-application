To build, run `make`.

To cross-build this code I used toolchain from Linardo i.e. arm-linux-gnueabi-gcc cross-compiler,
then run CC=arm-linux-gnueabi-gcc make. 

Host machine is Ubuntu 16.04LTS

Cross built binary successfully executed on
1. Host system (x86-64) using command -> qemu-arm-static ./helloworld.bin.
2. ARM based android platform using command -> $adb shell /data/tmp/helloworld.bin 

Rishabh Sheth
rishabh_bb on #beagle-gsoc
GSoC 2017 aspirant

