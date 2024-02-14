## Submission for BeagleBoard GSoC - Sam Dai

- Created mirror of provided example in own directory and changed required names
- installed ARM Linux cross compiler `gcc-arm-linux-gnueabi`
- installed QEMU ARM emulator using `apt install binfmt-support qemu-user-static`
- Cross compiled `sam_dai_helloworld.c` into an ARM based binary `sam_dai_helloworld.bin`
- Ran the binary on the QEMU emulator using `qemu-arm-static ./helloworld.bin`

