/*
 ============================================================================
 Name        : Q8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_arr(int arr[],int size);

int main(void) {

	int arr[5]={1,2,3,4,5};

	printf("the reversed array elements are: ");
	fflush(stdout);
	reverse_arr(arr,sizeof(arr)/sizeof(int));

	return 0;
}
void reverse_arr(int arr[],int size)
{
	int i;
	int rev_arr[size];
	for(i=0 ; i<size; i++ )
	{

		rev_arr[i]=arr[size-1-i];
	}

	for (i=0 ; i<size ; i++)
	{
		printf("%d ",rev_arr[i]);
	}

}
