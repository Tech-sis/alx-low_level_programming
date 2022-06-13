#include "main.h"
/**
 * *_strncat - concatenate strings
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: takes an integer
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, i;

	for (d = 0; dest[d] != '\0'; d++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d + i] = src[i];

	dest[d + i] = '\0';

	return (dest);
}
