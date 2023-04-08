/*
 ============================================================================
 Name        : test1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num ;
int main(void) {
	printf("enter the number you want to ckeck :\n");
	fflush(stdout);
	scanf("%i",&num);
	  if((num%2)==0)
	  {
	    printf("%i is even\n",num);
	  }
	  else
	  {
	    printf("%i is odd\n",num);
	  }
	return EXIT_SUCCESS;
}
