/*
 ============================================================================
 Name        : Q4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number;
void reverse (int num);
int main(void) {
	printf("enter number \n");
	fflush(stdout);
	scanf("%i",&number);
	reverse ( number);

	return EXIT_SUCCESS;
}
void reverse (int num)
{
	while(num!=0)
	{
		printf("%i",num%10);
		num=num/10;
	}
}
