#include "main.h"
/**
 * *_memset - fills memeroty with a constant byte
 * @s: pointer to a variable
 * @b: constant byte
 * @n: maximum byte
 * Return: pointer to constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
