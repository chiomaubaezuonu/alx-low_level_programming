#include "main.h"
#include <stdio.h>
/**
 *
 * Return: int
 */


int _isupper(int c)
{	
int UPPER;

	for (UPPER = 'A'; UPPER <= 'Z'; UPPER++)
	{
		if (c == UPPER)
			return (1);
	}

	return (0);

}
