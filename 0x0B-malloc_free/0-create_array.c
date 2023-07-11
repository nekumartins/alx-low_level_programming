#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array initialises to 'c'
 * @size: size of array
 * @c: character
 *
 * Return: array of c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chars;

	if (size == 0)
		return (NULL);
	chars = malloc(sizeof(*chars) * size);
	if (chars == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}
	chars[i] = '\0';

	return (chars);
}
