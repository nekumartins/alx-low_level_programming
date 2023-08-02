#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the list
 * Return: d_n
 */

int pop_listint(listint_t **head)
{
	int d_n;
	listint_t *node = *head;

	if (node == NULL)
		return (0);

	d_n = (*head)->n;
	*head = node->next;
	free(node);
	return (d_n);
}
