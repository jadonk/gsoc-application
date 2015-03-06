## Hello World appliction for libusb 

To run application follow the following steps : 

1. Check whether libusb install on your system or not 

  Here I am demonstrating steps for debian based system .

```$ dpkg -L libusb ```

If you get output that looks like 

``` /usr
/usr/lib
/usr/lib/x86_64-linux-gnu
/usr/lib/x86_64-linux-gnu/pkgconfig
/usr/lib/x86_64-linux-gnu/pkgconfig/libusb-1.0.pc
/usr/lib/x86_64-linux-gnu/libusb-1.0.a
/usr/share
/usr/share/doc
/usr/share/doc/libusb-1.0-0-dev
/usr/share/doc/libusb-1.0-0-dev/copyright
/usr/include
/usr/include/libusb-1.0
/usr/include/libusb-1.0/libusb.h
/usr/lib/x86_64-linux-gnu/libusb-1.0.so
/usr/share/doc/libusb-1.0-0-dev/README
/usr/share/doc/libusb-1.0-0-dev/changelog.Debian.gz

```

This means you have libusb already installed on your system ,
If not then 

``` $ sudo apt-get install libusb-dev ```

Now we are all done!  
### To Compile program :

``` $ gcc helloworld.c -o exe -L/usr/lib/x86_64-linux-gnu/ -lusb  ```

### To Execute program : 

``` $./exe ```
### Final output : 
``` $Hello World ```


Done ! 





