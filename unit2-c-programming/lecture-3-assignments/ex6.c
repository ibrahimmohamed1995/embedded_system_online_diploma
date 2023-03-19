/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp ;
	printf("Enter value of a : \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : \n");
	fflush(stdout);
	scanf("%f",&b);
	temp= b;
	b=a;
	a=temp;
	printf("After swapping, value of a = %f : \n",a);
	printf("After swapping, value of b = %f : \n",b);
	return EXIT_SUCCESS;
}
