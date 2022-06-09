#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at specific index
 *
 * @head: pointer to node
 * @index: index of node
 * Return: 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(current);
		return (1);
	}

	while (index != 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		--index;
	}

	tmp = current->next;
	if (current->next->next)
		current->next = current->next->next;
	else
		current->next = NULL;
		free(tmp);

	return (1);
}
