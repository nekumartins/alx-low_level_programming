#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum number
 * @max: maximum number
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *numbers;
	int i;

	if (min > max)
		return (NULL);
	numbers = malloc(sizeof(int) * (max - min + 1));
	if (numbers == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		numbers[i] = min;
		min++;
	}

	return (numbers);
}
