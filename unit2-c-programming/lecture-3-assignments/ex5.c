/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char a;
int main(void) {
	printf("enter a character : \n");
	fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c :%i \n",a,a);
	return EXIT_SUCCESS;
}
