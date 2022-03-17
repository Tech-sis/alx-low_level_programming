#include "main.h"
/**
 * print_line - check for a digit
 * @n: number of _ to be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
