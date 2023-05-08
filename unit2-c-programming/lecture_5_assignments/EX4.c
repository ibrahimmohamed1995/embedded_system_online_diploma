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
int num ,power,result=1 ;
int func (int n1,int n2);
int main(void) {

	printf("enter the base number and the power \n");
	fflush(stdout);
	scanf("%i %i",&num,&power);
	result = func (num,power);
	printf("%i \n",result);
	return EXIT_SUCCESS;
}
int func (int n1,int n2)
{
	if(n2!=0)
		return (n1*func(n1,n2-1));
	else
		return 1;
}
