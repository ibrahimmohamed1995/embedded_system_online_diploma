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
	printf("enter  element to be inserted and location \n");
	fflush(stdout);
	scanf("%i %i",&element,&location);

	for(i=number;i>=location;i--)
	{
		a[i]=a[i-1];
	}
	a[location-1]=element;
	number++;
	for(i=0;i<number;i++)
		{
			printf("%i\t",a[i]);
		}


	return EXIT_SUCCESS;
}
