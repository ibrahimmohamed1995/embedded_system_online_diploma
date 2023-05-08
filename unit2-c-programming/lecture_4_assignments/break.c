/*
 ============================================================================
 Name        : break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float num,sum,avg;
int i=1;
int n;
int main(void) {
	printf("enter maximum n inputs \n");
	fflush(stdout);
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter n %i\n",i);
		fflush(stdout);
		scanf("%f",&num);
		if(num<0)
		{
			break;
		}
		else
		{
			sum = sum+num;
		}
	}
	avg= sum/(i-1);
	printf("average is %0.2f\n",avg);
	return EXIT_SUCCESS;
}
