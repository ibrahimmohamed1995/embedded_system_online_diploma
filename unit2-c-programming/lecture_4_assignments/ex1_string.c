/*
 ============================================================================
 Name        : ex1_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char a[100];
char c ;
int i,counter=0;
int main(void) {

	printf("enter string \n");
	fflush(stdout);
	gets(a);
	printf("enter a character to find frequency \n");
	fflush(stdout);
	scanf("%c",&c);
	i=0;
	while(a[i]!=0)
	{
		if(a[i]==c)
		{
			counter++;
		}

		i++;
	}
	printf(" frequency of %c = %i\n",c,counter);

	return EXIT_SUCCESS;
}
