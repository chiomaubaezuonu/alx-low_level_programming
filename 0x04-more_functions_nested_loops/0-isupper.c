#include "main.h"
#include <stdio.h>
/**
 *
 *C program to check whether a character is uppercase or lowercase
 *
 */


int _isupper(int c)
{
	int upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			return (1);
	}

return (0);

}
