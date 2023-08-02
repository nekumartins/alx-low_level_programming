#include "lists.h"

/**
 * print_listint - prints list
 *@h: list
 * Return:size
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t size = 0;

	while (node)
	{
		printf("%i\n", node->n);
		size++;
		node = node->next;
	}

	return (size);
}
