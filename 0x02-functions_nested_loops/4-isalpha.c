#include "main.h"
/**
 * _isalpha - print lower and upper case letters
 * @c: check for character
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
