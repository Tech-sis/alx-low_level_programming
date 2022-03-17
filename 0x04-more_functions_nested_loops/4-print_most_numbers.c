#include "main.h"
/**
 * print_most_numbers - print some numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	char c = 0;

	while (c < 10)
	{
		if (c != 2 || c != 4)
		{
			_putchar('0' + c);
		}

		c++;
	}
	_putchar('\n');
}
