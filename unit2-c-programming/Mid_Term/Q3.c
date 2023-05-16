/*
 ============================================================================
 Name        : Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int n1,n2;
void prime(int num1,int num2);
int main(void) {
	printf("enter two integer numbers \n");
	fflush(stdout);
	scanf("%i %i",&n1,&n2);
	prime(n1,n2);
	return EXIT_SUCCESS;
}
void prime(int num1,int num2)
{
	int i=0;
	int j=0;
	for(i=n1;i<=n2;i++)
	{
		int flag=0;
			for(j=2;j<i;j++)
			{
				if((i%j)==0)
				{
					flag=1;
					break;
				}

			}
			if(flag==0){
				printf("%i\t",i);
			}
		}
	}

