/*
 ============================================================================
 Name        : test4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float num ;
int main(void) {
	printf("enter your number\n");
	fflush(stdout);
	scanf("%f",&num);
	if(num<0)
	{
		printf("%0.2f is negative\n",num);
	}
	else if(num>0)
	{
		printf("%0.2f is positive\n",num);
	}
	else {
		printf("%0.2f is zero\n",num);
	}
	return EXIT_SUCCESS;
}
