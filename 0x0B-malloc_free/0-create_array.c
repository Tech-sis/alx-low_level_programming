#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: the number of element in the array
 * @c: content of char
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
