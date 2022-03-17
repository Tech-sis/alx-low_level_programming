#include "main.h"
/**
 * print_line - check for a digit
 * @n: number of _ to be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
