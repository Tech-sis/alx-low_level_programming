#include "main.h"
/**
 * print_numbers - prit numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
