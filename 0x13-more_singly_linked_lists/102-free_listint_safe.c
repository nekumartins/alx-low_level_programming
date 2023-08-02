#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: head node
 * Return: number of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int num;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
