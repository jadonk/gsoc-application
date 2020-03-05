#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	char hostbuffer[256];	
	printf("Sanuj Kulshrestha - %s\n",__DATE__);
	int hostnumber = gethostname(hostbuffer, sizeof(hostbuffer));
	printf("Hostname: %s\n",hostbuffer);
}

