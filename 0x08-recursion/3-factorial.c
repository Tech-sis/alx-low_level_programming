#include "main.h"
/**
 * factorial - prints the sum of a number
 * @n: given number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
