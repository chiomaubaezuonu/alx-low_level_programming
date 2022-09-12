#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num, innerNum;

	for (num = 0; num <= 98; num++)
	{
		for (innerNum = num + 1; innerNum <= 99; innerNum++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((innerNum / 10) + '0');
			putchar((innerNum % 10) + '0');
			if (innerNum == 99 && num == 98)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
