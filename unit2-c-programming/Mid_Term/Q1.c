/*
 ============================================================================
 Name        : Q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number;
int sum_digits(int num);
int main(void) {
	printf("enter number please \n");
	fflush(stdout);
	scanf("%i",&number);
	printf("sum of digits = %i \n",sum_digits(number));

	return EXIT_SUCCESS;
}
int sum_digits(int num)
{
	int sum =0;
	int digit;
	while(num!=0)
	{
		digit=num%10;
		sum+=digit;
		num=num/10;
	}
	return sum;
}
