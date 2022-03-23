#include "main.h"
/**
 * *_strcat - concateates two strings
 * @dest: pointer to char dest
 * @src: pointer to char src
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
