Hello folks. This is my entry for the qualification test required for Beagleboard.org-GSOC '13
To build, run `make`. Make sure you set the generic bash environment variable CC to the cross-compiler installed on your system. 

Or use a specific cross-compiler like this : 
	
`arm-linux-gnueabi-gcc -static -o helloworld.bin hellworld.c`

Copy the executable into the Beaglebone and run: 

`./helloworld.bin`

or run on QEMU

`qemu-arm-static ./helloworld.bin`

Parav Nagarsheth
hatguy_ on #beagle, #beagle-gsoc, #userspace-arduino



