#include "function.pointers.h"
#include <stdlib.h>
/**
 * array_iterator - execute a function in an array
 * @array: array of functions
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
