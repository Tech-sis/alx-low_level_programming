#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns length of elements in a list
 *
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		element++;
	}
	return (element);
}