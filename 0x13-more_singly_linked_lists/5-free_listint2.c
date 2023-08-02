#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *nextn;

	if (head == NULL)
		return;

	node = *head;
	nextn = (*head)->next;
	while (nextn)
	{
		free(node);
		node = nextn;
		nextn = nextn->next;
	}
	free(node);
	*head = NULL;
}
