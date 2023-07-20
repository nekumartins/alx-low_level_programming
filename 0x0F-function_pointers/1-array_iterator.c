#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - goes over every element
 * @array: array
 * @size: size of array
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
