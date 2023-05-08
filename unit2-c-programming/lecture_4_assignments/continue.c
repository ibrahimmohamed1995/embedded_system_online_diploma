/*
 ============================================================================
 Name        : continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num , i, product=1;
int main(void) {
	for(i=1;i<=4;i++)
	{
		printf("enter the number \n");
		fflush(stdout);
		scanf("%i",&num);
		if(num==0)
		{
			continue;
		}
		else
		{
			product*=num;
		}
	}
	printf("product is %i \n",product);

	return EXIT_SUCCESS;
}
