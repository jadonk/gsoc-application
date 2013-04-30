#include <stdio.h>
#include <time.h>


int main(int argc, char** argv) {

    time_t date = time(NULL);
    printf("Hi, I'm Jonathan Bailey\n");
    printf("The current Date is: %s", ctime(&date));

    return 0;
}
