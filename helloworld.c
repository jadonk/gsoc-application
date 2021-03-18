#include <stdio.h>
#include <sys/utsname.h>
static const char* info= "Shreyas Atre \nwww.github.com\\SAtacker\nemail : shreyasatre16@gmail.com";

int main(int argc,char** argv)
{
    printf("%s\n%s\n",info,__DATE__);
    struct utsname _buffer;
    if(uname(&_buffer)==-1)
    {
        return -1;
    }
    printf("System Name = %s\n",_buffer.sysname); 
    printf("Node Name = %s\n", _buffer.nodename); 
    printf("Version = %s\n", _buffer.version); 
    printf("Release = %s\n", _buffer.release); 
    printf("Machine = %s\n", _buffer.machine);

    return 0;
}

