#include "main.h"
#include <stdio.h>
/**
 *
 *C program to check whether a character is uppercase or lowercase 
 *
 */



#include <stdio.h>



int main()

{

   	char c;

  	if(c >= 'A' && c <= 'Z')
		{
	            printf("%c '1'", c);
	        }
	else if(c >= 'a' && c <= 'z')

	        {
	 	    printf("%c '0'", c);
		}

		return 0;

}
