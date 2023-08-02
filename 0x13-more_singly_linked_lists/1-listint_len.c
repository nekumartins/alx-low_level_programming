#include "lists.h"

/**
 * listint_len - list
 * @h: listint
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
