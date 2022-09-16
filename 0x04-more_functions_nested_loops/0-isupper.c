#include "main.h"
#include <stdio.h>
/**
 *
 * Return: int
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
