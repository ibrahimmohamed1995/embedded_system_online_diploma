/*
 ============================================================================
 Name        : q6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int unique_number(int arr[],int size);

int main(void) {

	int a[7]={4,2,5,2,5,7,4};
	int size=sizeof(a)/sizeof(int);

		printf("the unique number is : %d",unique_number(a,size));


		return 0;
}

int unique_number(int arr[],int size)
{
	   int i,j,flag=-1;
       for(i=0 ; i<size ; i++)
       {
    	   for (j=0 ; j<size ; j++)
    	   {
    		   if(arr[i]==arr[j])
    		   {
    			   flag++;
    		   }
    	   }
           if(flag==0)
           {
        	   return arr[i];
           }
           else
           {
        	   flag=-1;
           }
       }


		return 0;
}
