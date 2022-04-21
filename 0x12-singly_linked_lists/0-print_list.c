#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all element of a list
 * @h: pointer to nodes
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
}
