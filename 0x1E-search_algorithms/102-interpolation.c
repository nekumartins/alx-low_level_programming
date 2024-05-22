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
	size_t ind, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		ind = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
		if (ind < size)
			printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", ind);
			break;
		}

		if (array[ind] == value)
			return (ind);
		if (array[ind] > value)
			right = ind - 1;
		else
			left = ind + 1;
	}

	return (-1);
}
