#include "main.h"
/**
 * swap_int - swap the value of 2 integers
 * @a: integer one
 * @b: integer two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
