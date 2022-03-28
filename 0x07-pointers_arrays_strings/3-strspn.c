#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to address
 * Return: pointer to substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *j = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
			if (!(*--accept))
				break;
			accept = j;
		}
	}
	return (i);
}
