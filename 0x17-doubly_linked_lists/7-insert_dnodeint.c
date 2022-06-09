#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a given position
 *
 * @h: pointer to node
 * @idx: index of node
 * @n: number of node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		(*h) = new;
		return (new);
	}

	current = *h;

	while (idx != 1)
	{
		current = current->next;
		idx--;

		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
