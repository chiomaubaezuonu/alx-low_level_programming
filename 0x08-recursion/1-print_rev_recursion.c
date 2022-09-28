#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * followed by a new line.
 * @str: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
