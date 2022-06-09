#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 *
 * @head: pointer to node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
}
