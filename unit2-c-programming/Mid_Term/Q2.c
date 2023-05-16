/*
 ============================================================================
 Name        : Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number ;
float square_root(int num);
int main(void) {
	printf("enter number please \n");
	fflush(stdout);
	scanf("%i",&number);
	printf("square root is %.2f \n",square_root(number));
	return EXIT_SUCCESS;
}
float square_root(int num)
{
	return (sqrt(num));
}
