#include <stdio.h>
#include <time.h>

int main(int argc, char** argv) {
	time_t now;
	now = time(NULL);
	printf("My name is Vlad Victor Ungureanu and today is %s",ctime(&now));
	return 0;
}
