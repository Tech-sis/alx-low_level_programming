#include "main.h"
/**
 * more_numbers - print numbers 10 times
 * @c: check for number
 * @i: check for number
 * Return: 0
 */

void more_numbers(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			_putchar('0' + c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
