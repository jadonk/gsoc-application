#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;
    time(&now);

    printf("Hello World!\n");
    printf("Name: Himadri Nag\n");
    printf("Date: %s", ctime(&now));

    return 0;
}
