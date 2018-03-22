#include <stdio.h>
#include <time.h>

int main()

{
	printf("Hello World!\n");
	char  name[16];
	printf("Hey there, what is your name?\n");
	scanf("%s", name);
	printf("Hello %s\n", name);
	time_t t = time(NULL);
	struct tm *tm = localtime(&t);
	printf("The date based on your timezone is %s\n", asctime(tm));

}
