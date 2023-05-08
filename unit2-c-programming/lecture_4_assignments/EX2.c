/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number;
float array[100];
int i;
float sum=0,avg;

int main(void) {
	printf("enter numbers of data\n");
	fflush(stdout);
	scanf("%i",&number);
	while(number>100 || number<=0 )
	{
		printf("error enter number again \n");
		fflush(stdout);
		scanf("%i",&number);
	}
	for(i=0;i<number;i++)
	{
		printf("enter number %i\n",i);
		fflush(stdout);
		scanf("%f",&array[i]);
		sum=sum+array[i];
	}
	avg=sum/number;
	printf("average  %0.2f\n",avg);

	return EXIT_SUCCESS;
}
