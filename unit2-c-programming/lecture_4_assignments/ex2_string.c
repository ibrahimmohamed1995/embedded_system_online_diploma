/*
 ============================================================================
 Name        : ex2_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char a[100];
int i=0;


int main(void) {
	printf("enter string \n");
	fflush(stdout);
	gets(a);
	while(a[i]!=0)
	{
		i++;
	}
	printf(" string length = %i \n",i);

	return EXIT_SUCCESS;
}
