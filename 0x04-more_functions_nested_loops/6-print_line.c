#include "main.h"

/**
 * print_line - prints a line
 * @n: number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int no;

	for (no = 0; no <= n; no++)
	{
		_putchar('-');
	}
	_putchar(10);
}
