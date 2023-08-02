#include "lists.h"

/**
 * free_listint - frees list.
 * @head: pointer to list.
 */

void free_listint(listint_t *head)
{
	listint_t *node, *nextn;

	if (head)
	{
		node = head;
		nextn = head->next;
		while (nextn)
		{
			free(node);
			node = nextn;
			nextn = nextn->next;
		}
		free(node);
	}
}
