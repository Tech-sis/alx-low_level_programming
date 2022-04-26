#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all elements in a list
 *
 * @h: linked list
 * Return: size_t the size of h
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		node++;
	}
	return (node);
}
