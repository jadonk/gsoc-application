## GSoC 2020 Task: Cross-compilation

1) Execute 

```
$ sudo apt-get install gcc-arm-linux-gnueabihf 
```
to install the cross-compilation toolchain for ARM 32bit arch. 

2) Run

```
$ arm-linux-gnueabihf-gcc -static -o helloworld.arm helloworld.c
```
to generate the statically cross-built binary. (See Makefile)

3) A good check to see the success of the previous step is to execute

```
$ file helloworld.arm
> helloworld.arm: ELF 32-bit LSB executable, ARM, EABI5 version 1 (GNU/Linux), statically linked, BuildID[sha1]=d7e47e2c9f8241a0dcc4341191ac5fed31425877, for GNU/Linux 3.2.0, not stripped 
```

4) Install an emulator (ex: QEMU) to run the binary on an ARM32-arch-based board

```
$ sudo apt install qemu-user-static
```

5) For the final test, type

```
$ qemu-arm-static helloworld.arm
> Nishant Malpani - Feb 29 2020
```
