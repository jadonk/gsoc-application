#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
	time_t now;
	struct tm *today;
	char strdate[50];

	time(&now);
	today = localtime(&now);

	strftime(strdate, sizeof(strdate), "%d-%m-%Y", today);
	printf("Emilio Lopez - %s\n", strdate);
}
