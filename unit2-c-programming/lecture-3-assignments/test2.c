/*
 ============================================================================
 Name        : test2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char character;
int main(void) {
	 printf("enter an alphabet :\n");
	 fflush(stdout);
	  scanf("%c",&character);
	  switch(character)
	    {
	      case 'a':
	        {
	          printf("%c is vowel : \n",character);
	        }
	      break;

	      case 'i':
	        {
	          printf("%c is vowel : \n",character);
	        }
	      break;
	      case 'o':
	        {
	          printf("%c is vowel : \n",character);
	        }
	      break;
	      case 'e':
	        {
	          printf("%c is vowel : \n",character);
	        }
	      break;
	      case 'u':
	        {
	          printf("%c is vowel : \n",character);
	        }
	      break;
	      default :
	        {
	          printf("%c is constant : \n",character);
	        }
	      break;
	    }
	return EXIT_SUCCESS;
}
