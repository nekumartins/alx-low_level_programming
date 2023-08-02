#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer tolist
 * @idx: position for newnode
 * @n: data for the new node
 * Return: address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *end = *head;
	listint_t *nnode;
	unsigned int i;
	unsigned int size = 0;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (*head);
	}

	i = idx - 1;
	while (end && size != i)
	{
		size++;
		end = end->next;
	}
	if (size == i && end)
	{
		nnode->next = end->next;
		end->next = nnode;
		return (nnode);
	}

	free(nnode);
	return (NULL);
}
