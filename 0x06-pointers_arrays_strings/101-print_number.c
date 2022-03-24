#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	int m, d, count = 1;

	if (n < 0)
	{
		_putchar(45);
		n * -1;
	}

	for (m = 0; n / count > 9; m++, count *= 10)
	;

	for (; count >= 1; n %= count, count /= 10)
	{
		d = n / count;
		_putchar('0' + d);
	}
}
