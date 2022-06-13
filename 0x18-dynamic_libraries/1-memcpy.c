#include "main.h"
/**
 * *_memcpy - copy memory byte
 * @dest: pointer to desctination
 * @src: pointer to source
 * @n: maximum memory
 * Return: copy of memory byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
