#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int no;

	for (no = 0; no <= 9; no++)
		putchar(no + '0');
	putchar(10);
}
