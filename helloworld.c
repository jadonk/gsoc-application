/*
 * helloworld.c
 *
 *  Created on: 29/apr/2013
 *      Author: Michele Bussolotto
 */
#include <stdio.h>
#include <time.h>

int main (){
	char *my_name="Michele Bussolotto";
	printf("Hello World! Name: %s Date: %s Time: %s ", my_name, __DATE__, __TIME__ );
	return 0;
}

