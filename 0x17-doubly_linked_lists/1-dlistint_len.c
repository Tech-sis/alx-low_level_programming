#include "lists.h"
/**
 * dlistint_len - return the number of element in a linked list
 *
 * @h: pointer to node
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_element = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
