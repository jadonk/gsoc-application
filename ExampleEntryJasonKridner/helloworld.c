#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	printf("Vedant Paranjape, testing on Kindle Touch 2014 or a x86 system, TIME: %s, DAY: %s\n", __TIME__, __DATE__);
	
	FILE *info = fopen("/proc/cpuinfo", "rb");
	char *arg = 0;
	size_t size = 0;

	while(getdelim(&arg, &size, 0, info) != -1)
	{
		puts(arg);
	}
	free(arg);
	fclose(info);
	
	return 0;
}