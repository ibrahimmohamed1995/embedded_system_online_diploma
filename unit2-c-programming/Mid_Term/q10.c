/*
 ============================================================================
 Name        : q10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int count_ones(int number);
int main(void) {
	int number;
	printf("Please enter an integer number: ");
	fflush(stdout);
	scanf("%d",&number);
	printf("the count of ones is : %d",count_ones(number));
	return 0;
}
int count_ones(int number)
{
	int count=0,i,flag=0;
	while(count<sizeof(number)*8)
	{
		if((number &(1<<count))==0)
		{
			for(i=1 ; number &(1<<(count+i)) ; i++)
			{
				if(i>flag)
				{
				flag=i;
				}
			}
		}
		count=count+i;
	}
	return flag;
}
