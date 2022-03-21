#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: takes a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	_putchar(i);
	return (0);
}
