/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int a[10][10];
int t[10][10];
int r,c,i,j;
int main(void) {
	printf("enter number of rows and columns \n");
	fflush(stdout);
	scanf("%i %i",&r,&c);
	printf("enter elements of matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element\n");
			fflush(stdout);
			scanf("%i",&a[i][j]);
		}
	}
	printf("entered matrix : \n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%i ",a[i][j]);

			}
			printf("\n");
		}
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				t[i][j]= a[j][i];
			}
		}
	printf("transpose matrix : \n");

	for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%i ",t[i][j]);

				}
				printf("\n");
			}

	return EXIT_SUCCESS;
}
