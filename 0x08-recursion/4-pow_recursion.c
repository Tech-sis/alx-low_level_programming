#include "main.h"
/**
 * _pow_recursion - prints a number raised to the power of another number
 * @x: pointers to a number
 * @y: the power of the number
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
