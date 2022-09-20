#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @i: an input array
 * @j: an input integer
 * Return: Nothing
 */
void print_array(int *i, int j)
{
	int x = 0;

	for (; x < j; x++)
	{
		printf("%d", i[x]);
		if (x < j - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
