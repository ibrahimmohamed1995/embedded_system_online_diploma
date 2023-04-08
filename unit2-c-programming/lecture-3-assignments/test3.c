/*
 ============================================================================
 Name        : test3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float num1,num2,num3;
int main(void) {
	printf("enter three numbers\n");
	fflush(stdout);
	  scanf("%f %f %f",&num1,&num2,&num3);
	  if(num1>num2)
	  {
	    if(num1>num3)
	    {
	      printf("largest number= %f\n",num1);
	    }
	    else {
	      printf("largest number= %f\n",num3);
	    }
	  }
	  else
	  {
	    if(num2>num3)
	    {
	      printf("largest number= %f\n",num2);
	    }
	    else {
	      printf("largest number= %f\n",num3);
	    }
	  }
	return EXIT_SUCCESS;
}
