#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    */
int main(void)
{
	int x, p, j;
	for (x = '0'; x < '9'; x++)
	{
		for (p = x + 1; p <= '9'; p++)
		{
			for (j = p + 1; j <= '9'; j++)
			{
				if ((p != x) != j)
				{
					putchar(x);
					putchar(p);
					putchar(j);
					if (x == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
