#include "main.h"
/**
 * _islower - check for lower case letters
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
