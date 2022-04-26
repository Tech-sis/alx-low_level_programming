#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all elements in a list
 *
 * @h: pointer to element
 * Return: size_t the size of h
 */

size_t print_listint(const listint_t *h)
{
    int count = 1;
    listint_t current = h;

    while (current->next != NULL)
    {
        current = current->next;
        count++;
        printf("%s\n", current);
    }
    return (count);
}