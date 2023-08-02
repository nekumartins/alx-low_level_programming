#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *nnode;

	if (head == NULL)
		return (NULL);

	node = NULL;
	while (*head)
	{
		nnode = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = nnode;
	}
	*head = node;
	return (*head);
}
