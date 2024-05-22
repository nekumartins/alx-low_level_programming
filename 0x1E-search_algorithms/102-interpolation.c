#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, lower, higher;
	double f;

	if (array == NULL)
		return (-1);

	lower = 0;
	higher = size - 1;

	while (size)
	{
		f = (double)(higher - lower) / (array[higher] - array[lower]) * (value - array[lower]);
		position = (size_t)(lower + f);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			lower = position + 1;
		else
			higher = position - 1;

		if (lower == higher)
			break;
	}

	return (-1);
}
