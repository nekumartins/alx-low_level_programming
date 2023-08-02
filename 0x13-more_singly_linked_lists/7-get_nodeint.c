#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list.
 * @head: pointer to list
 * @index: nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int size = 0;

	while (node && size != index)
	{
		size++;
		node = node->next;
	}
	if (node && size == index)
		return (node);
	return (NULL);
}
