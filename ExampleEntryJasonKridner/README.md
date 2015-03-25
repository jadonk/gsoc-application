This is hello world application
===============================

##Developed for GSOC application
####By: Ankur Yadav

####Steps 1:
	* Cross compile helloworld.c using "arm-linux-gnueabi-gcc".
	* use "CC=${PATH_TO_ARM_CROSS} make"
	* file "helloworld.bin" will get generated

####Step 2:
	* Execute the cross built binary using "qemu-arm-static ./helloworld.bin"