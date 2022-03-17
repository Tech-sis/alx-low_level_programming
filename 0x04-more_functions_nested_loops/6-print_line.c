#include "main.h"
/**
 * print_line - check for a digit
 * @n: number of _ to be printed
 * Return: 0
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
