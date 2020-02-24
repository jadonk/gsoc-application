// Program for printing
// My name - Date

#include <stdio.h>

int main(int argc, char** argv){
	if(argc == 2){
		printf("%s - %s\n", argv[1], __DATE__);
	} else {
		printf("Deepak Khatri - %s\n", __DATE__);
	}
	

	printf("\n Compiled on BBB :)\n");
	return 0;
}
