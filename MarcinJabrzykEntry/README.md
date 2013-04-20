GSoC Qualification test for BeagleBoard
Marcin Jabrzyk
irc: bzyx@Freenode

Steps:
1) Download cross-compilers from http://www.angstrom-distribution.org/toolchains/angstrom-2011.03-x86_64-linux-armv7a-linux-gnueabi-toolchain.tar.bz2 and unpack
2) sudo apt-get install qemu-user-static for qemu-arm-static
3) export PATH=/home/bzyx/bb-cc/usr/local/angstrom/arm/bin/:$PATH
4) CC=arm-angstrom-linux-gnueabi-gcc make
5) qemu-arm-static ./helloworld.bin 

The result:
Marcin Jabrzyk - Apr 20 2013



