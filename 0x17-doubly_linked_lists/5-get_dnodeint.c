#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: pointer to node
 * @index: index of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0);
	}
	return (current);
}
