/*
 * Simple "Hello, World!" style program to demonstrate cross compilation
 * and git skills for the BeagleBoard.org GSoC application. Program 
 * prints my name and the date.
 *
 * Thomas Cort <linuxgeek@gmail.com>
 */

#include <stdio.h>

int main(int argc, char* arg[]) {

	printf("Thomas Cort - %s\n", __DATE__);
	return 0;
}
