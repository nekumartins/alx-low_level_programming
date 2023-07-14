#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer
 * @b: memory space to be allocated
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);

	return (check);
}
