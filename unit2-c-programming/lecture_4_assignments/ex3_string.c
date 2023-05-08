/*
 ============================================================================
 Name        : ex3_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char a1[20];
char a2 [20];
int i,j;
int main(void) {
	printf("enter string \n");
	fflush(stdout);
	gets(a1);
	j=strlen(a1);
	j--;
	while(a1[i]!=0)
	{
		a2[i]=a1[j];
		j--;
		i++;
	}
	printf("reverse string is %s \n",a2);
	return EXIT_SUCCESS;
}
