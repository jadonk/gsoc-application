#include <stdio.h>
#include <time.h>

int main()
{
	time_t t1;
	time(&t1);
	
	printf("Hello World\n");
	printf("Name: Muhammad Junaid Muzammil\n");
	printf("Current Date: %s\n",asctime(localtime(&t1)));
	return 0;
}
