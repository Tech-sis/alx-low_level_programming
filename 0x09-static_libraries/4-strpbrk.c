#include "main.h"
/**
 * *_strpbrk - searches string for a set of byte
 * @s: points to a string
 * @accept: points to an address
 * Return: void or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
