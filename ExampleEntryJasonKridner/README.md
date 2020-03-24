## Result of Niklas Wantrupp:
The following listing describes the output of the cross-compilation process and the binary execution on the arm-emulator:

```console
dev@dev-PC:~/workspace/gsoc-application/ExampleEntryJasonKridner$ CC="arm-linux-gnueabihf-gcc" make
arm-linux-gnueabihf-gcc -static -o helloworld.bin helloworld.c
dev@dev-PC:~/workspace/gsoc-application/ExampleEntryJasonKridner$ ls
helloworld.bin  helloworld.c  Makefile  README.md
dev@dev-PC:~/workspace/gsoc-application/ExampleEntryJasonKridner$ qemu-arm-static ./helloworld.bin
Niklas Wantrupp - Mar 24 2020
```

