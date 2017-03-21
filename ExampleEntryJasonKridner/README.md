# GSoC'17 Entry Task Submission - Shreyas Iyer
<p>
<b>** Cross-compilation on macOS Sierra v10.12.3:</b>
<ol>
<li>Installed arm-none-eabi-gcc.</li>
<li>Needed to add a few arguments in the Makefile (<b>'--specs=rdimon.specs -lgcc -lc -lm -lrdimon -o'</b>) to be able to compile the given file.</li>
<li>Modified the C program, and added my name to it.</li>
<li>Invoked compilation of the 'helloworld.c' file, using the Makefile, which results in a binary file 'helloworld.bin'</li>
</ol>
<b>** Execution of the produced binary file:</b>
<ul>
<li>Installed QEMU on macOS, and ran <i>'qemu-arm-static ./helloworld.bin'</i></li>
</ul>
</p>
<i>Regards, Shreyas Iyer </i>


