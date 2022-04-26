#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add new node at the beginning of a list
 *
 * @head: pointer to pointer to head node
 * @n: list data
 * Return: new nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
