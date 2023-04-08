/*
 ============================================================================
 Name        : test7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num;
int factorial=1;
int counter=1;
int main(void) {
	printf("enter your number\n");
		fflush(stdout);
		scanf("%i",&num);
		for(counter=1;counter<=num;counter++)
		{
			factorial=factorial*counter;
		}
		printf("factorial=%i\n",factorial);
	return EXIT_SUCCESS;
}
