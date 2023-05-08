/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int a[100];
int number ,element ,location,i;
int main(void) {
	    printf("enter number of elements \n");
		fflush(stdout);
		scanf("%i",&number);
		for(i=0;i<number;i++)
		{
			scanf("%i",&a[i]);
		}
		printf("enter  element to  be searched \n");
		fflush(stdout);
		scanf("%i",&element);
		i=0;
		while(a[i]!=element && i<number)
		{
			i++;
		}
		if(i<number)
		{
			printf("number found at location %i  \n",i+1);
		}
		else
		{
			printf("number not found found \n");
		}

	return EXIT_SUCCESS;
}
