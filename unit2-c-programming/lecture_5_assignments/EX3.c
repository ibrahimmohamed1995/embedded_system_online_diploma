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
#include <string.h>
char arr [100]="margorp emosewa";
int length,i=0;
char temp;
void reverse (char array[],int size);
int main(void) {
	length= strlen(arr);
	length--;
	 /*while(i<length)
	{
		temp=arr[i];
		arr[i]=arr[length];
		arr[length]=temp;
		i++;
		length--;
	}
	printf("%s",arr);*/

	reverse ( arr, length) ;

	printf("%s",arr);

	return EXIT_SUCCESS;
}

void reverse (char array[],int size)
{
  temp=array[i];
  array[i]=array[size];
  array[size]=temp;
  i++;
  size--;
  if(i<size)
  {
	  reverse ( array, size) ;
  }


}
