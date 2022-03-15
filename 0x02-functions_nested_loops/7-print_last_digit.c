#include "main.h"
/**
 * print_last_digit - returns the last value of a digit
 * @n: checks for number
 * Return: 0
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;
	_putchar(nv + '0');
	return (nv);
}
