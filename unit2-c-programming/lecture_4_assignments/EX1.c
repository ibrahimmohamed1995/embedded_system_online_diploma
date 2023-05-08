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
char a[2][2];
char b[2][2];
char sum[2][2];
char i,j;
int main(void) {
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element a%i%i\n",i,j);
			fflush(stdout);
			scanf("%i",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("enter element b%i%i\n",i,j);
				fflush(stdout);
				scanf("%i",&b[i][j]);
			}
		}
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
		}

	printf("sum of matrix \n");
	for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf(" element sum%i%i = %i\n",i,j,sum[i][j]);
					fflush(stdout);

				}
			}


	return EXIT_SUCCESS;
}
