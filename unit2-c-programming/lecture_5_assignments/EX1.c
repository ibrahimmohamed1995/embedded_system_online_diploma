/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check_prime(int num);
int main(void) {
	int n1,n2,i,flag;
	printf("enter two integer numbers interval :\n");
	fflush(stdout);
	scanf("%i %i",&n1,&n2);
	printf("prime numbers between %i %i are :",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
		 flag=check_prime(i);
		 if(flag==0)
		 {
			 printf("%i ",i);
		 }
	}

	return EXIT_SUCCESS;
}
int check_prime(int num)
{
	int j,flag=0;
	for(j=2;j<num;j++)
	{
		if((num%j)==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
