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

The wokspace at this point looks like this:
[]()
