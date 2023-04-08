/*
 ============================================================================
 Name        : test5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char c ;
int main(void) {
	printf("enter your alphabet\n");
	fflush(stdout);
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		printf("%c is alphabet\n",c);
	}
	else
	{
		printf("%c is not alphabet\n",c);
	}

	return EXIT_SUCCESS;
}
