#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add new node at the end of a list
 *
 * @head: head node
 * @n: list data
 * Return: new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *current;

	(void)current;

	while (current && current->next != NULL)
		current = current->next;

	end_node = (listint_t *) malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;
	current = *head;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = end_node;
	}
	if (end_node)
		return (*head);
	return (NULL);
}
