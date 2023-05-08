/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial (int num);
int n,result;
int main(void) {
	printf("enter a positive number\n");
	fflush(stdout);
	scanf("%i",&n);
	result=factorial(n);
	printf("factorial of %i = %i",n,result);
	return EXIT_SUCCESS;
}
int factorial (int num)
{
	if(num!=1)
	return (num*factorial(num-1));
}
