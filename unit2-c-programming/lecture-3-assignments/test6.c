/*
 ============================================================================
 Name        : test6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num , counter, sum=0;
int main(void) {
	printf("enter your number\n");
	fflush(stdout);
	scanf("%i",&num);
	for(counter=0;counter<=num;counter++)
	{
		sum=sum+counter;
	}
	printf("sum=%i\n",sum);
	return EXIT_SUCCESS;
}
