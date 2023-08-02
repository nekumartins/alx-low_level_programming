#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of list
 * @head: pointer to list
 * @index: position of node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *end = *head;
	listint_t *dnode = *head;
	unsigned int i;
	unsigned int size = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = dnode->next;
		free(dnode);
		return (1);
	}
	i = index - 1;
	while (end && size != i)
	{
		size++;
		end = end->next;
	}
	if (size == i && end)
	{
		dnode = end->next;
		end->next = dnode->next;
		free(dnode);
		return (1);
	}

	return (-1);
}
