#include "main.h"
/**
 * print_numbers - prit numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	while (i > 48 && i <= 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
