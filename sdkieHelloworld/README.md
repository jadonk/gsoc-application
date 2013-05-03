Info: 
	Statically linked "Hello world" style program that prints my name "Kumar Sukhani" and current date.	

Compilation:
	export Compiler=$(cross compiler)
 	make 

	e.g. for Ubuntu system, you can use arm-linux-gnueabi cross compiler.
	apt-get install gcc-arm-linux-gnueabi
	export Compiler=arm-linux-gnueabi
	make

Cleaning:
	make clean

Execution:
	Testing on android emulator:
		adb push helloworld.bin /data
		adb shell chmod 766 /data/helloworld.bin 
		adb shell /data/helloworld.bin
	
	Testing using qemu:
		apt-get install qemu-user-static
		qemu-arm-static ./helloworld.bin


Contact:
	Kumar Sukhani kumarsukhani@gmail.com
	sdkie on #beagle and #beagle-gsoc

