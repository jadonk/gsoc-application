# gsoc-application
----
## 1. Create Hello World Program
- I used my ubuntu OS to write my C code.
- Using Gedit I wrote the Hello_world.c program
./pics/hello_world.png
Using gcc I compiled the program and executed it, using the commands :
`$ gcc hello_world.c -o hello_world`
`$ ./hello_world`
./pics/hello_world_exec.png

## 2. Cross Compiling Arm C code on Ubuntu
-   Installing the required softwares.
	  - Installing Qemu
      `$ sudo apt-get install qemu `
    - Installing  arm tools and qemu-user-static packge.
      `$ sudo apt-get install gcc-arm-linux-gnueabihf libc6-dev-armhf-cross qemu-user-static`
- Write the hello_world_cross_comp.c code in gedit
./pics/hello_world_cross_comp.png
- Compiling the code in amd64 directly:
    `$ arm-linux-gnueabihf-gcc -static -o hello_world_cross_comp hello_world_cross_comp.c`
-Running the code in binary
    `$ qemu-arm-static hello_world_cross_comp hello_world_cross_comp`
    or use 
    `$ qemu-aarch64 -L /usr/aarch64-linux-gnu/ [path-to-binary]`

## 3. Creating the pull request
- Fork the original repository of jadonk from [here](https://github.com/jadonk/gsoc-application).
- Cloning it in ubuntu `$ git clone <your repo link>.`

`
