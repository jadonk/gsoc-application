#include <stdio.h>
 #include <time.h>
int main()
{
        printf("Naman Govil\n");
        time_t now;
        time(&now);
        printf("%s", ctime(&now));
        return 0;
}
			       
			      
