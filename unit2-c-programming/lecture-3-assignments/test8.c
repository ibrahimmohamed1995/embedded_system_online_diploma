/*
 ============================================================================
 Name        : test8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char o;
float num1,num2;
int main(void) {
	printf("enter operator \n");
	fflush(stdout);
	scanf("%c",&o);
	printf("enter two numbers \n");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(o)
	{
	case '+':
	{
		printf("%0.2f + %0.2f= %0.2f \n",num1,num2,num1+num2);
	}
	break;
	case '-':
	{
		printf("%0.2f - %0.2f= %0.2f \n",num1,num2,num1-num2);
	}
	break;
	case '*':
	{
		printf("%0.2f * %0.2f= %0.2f \n",num1,num2,num1*num2);
	}
	break;
	case '/':
	{
		printf("%0.2f / %0.2f= %0.2f \n",num1,num2,num1/num2);
	}
	break;
	default :
	{
		printf("invalid operator \n");
	}
	break;

	}
	return EXIT_SUCCESS;
}
