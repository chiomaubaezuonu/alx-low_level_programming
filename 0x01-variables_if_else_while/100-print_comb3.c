nclude <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    */
int main(void)
{
	int num, innerNum;
	for (num = '0'; num < '9'; num++)
	{
		for (innerNum = num + 1; innerNum <= '9'; innerNum++)
		{
			if (innerNum != num)
			{
				putchar(num);
				putchar(innerNum);
				if (num == '8' && innerNum == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
