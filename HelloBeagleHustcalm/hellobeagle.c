#include <stdio.h>
#include <time.h>

#define SIZE 256

int main()
{
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;


    /* Get the current time. */
    curtime = time(NULL);

    /* Convert it to local time representation. */
    loctime = localtime(&curtime);

    printf("This is Lihang Li from China and applying for GSoC 2013 of beagle.org.\n");

    /* Print Date in a nice format. */
    strftime(buffer,SIZE,"Today is %A, %B %d and time zone is UTC/GMT +8 hours, Beijing, China.\n",loctime);
    fputs(buffer,stdout);

    return 0;
}

