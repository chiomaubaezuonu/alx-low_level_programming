#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for  (a = 'a'; a <= '2'; a++)
	{
		purchar(a);
	}
	purchar('\n');
	return (0);

}
