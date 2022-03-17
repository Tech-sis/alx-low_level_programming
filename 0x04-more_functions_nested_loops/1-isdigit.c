#include "main.h"
/**
 * _isdigit - checks for integer
 * @c: checks for number
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
