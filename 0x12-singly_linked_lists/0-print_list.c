#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all element of a list
 * @list_t: contains element of list
 * @h: pointer to nodes
 * Return: list of elements
 */

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
	}
	if (h == NULL)
		printf("[0] (nil)");
}
