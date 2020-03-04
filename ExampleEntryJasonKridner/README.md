## The repository contains the cross-compiled C code in process of applying for GSoC 2020 for BeagleBone organization.

The steps used are: 
Install updates

```$ sudo apt-get update```

Install ```qemu``` for emulating ARM microcontroller
```
$ sudo apt-get install qemu qemu-user-static qemu-system-arm
```
Clone the forked repository containing the code
```
$ git clone https://github.com/PrashantDandriyal/gsoc-application.git  
```
Change working directory

```
$ cd gsoc-application/ExampleEntryJasonKridner
```
Cross compile 

```
$ arm-none-eabi-gcc --specs=rdimon.specs   -Wl,--start-group -lgcc -lc -lm -lrdimon -Wl,--end-group helloworld.c -o helloworld
```
Test application on emulator

```$ qemu-arm-static helloworld```

After zipping the contents, the workspace at this point looks like this:

![dir](https://github.com/PrashantDandriyal/gsoc-application/blob/master/ExampleEntryJasonKridner/dir_final.PNG)

The final results are:

![Console Output](https://github.com/PrashantDandriyal/gsoc-application/blob/master/ExampleEntryJasonKridner/console_output.PNG)
