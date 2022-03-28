#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: points to a string
 * @c: points to a character
 * Return: null or first occurene
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}

