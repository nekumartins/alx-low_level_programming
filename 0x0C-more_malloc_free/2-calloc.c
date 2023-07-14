#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc using malloc
 * @nmemb: number of members
 * @size: size 
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		space[i] = 0;
	}

	return (space);
}
