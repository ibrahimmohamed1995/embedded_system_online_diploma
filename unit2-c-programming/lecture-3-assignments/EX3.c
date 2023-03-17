/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int x,y;
int main(void) {
	printf("enter two integers : \n");
	fflush(stdout);
	scanf("%i %i",&x,&y);
	printf("sum : %i \n",x+y);
	return 0;
}
