#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 *
 * @h: pointer to head node
 * Return: list of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_node = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_node++;
	}
	return (nbr_node);
}
