/*
 ============================================================================
 Name        : EX4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float a,b ;
int main(void) {
	printf("Enter two numbers : \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&a,&b);
	printf("product : %f \n",a*b);
	return 0;
}
