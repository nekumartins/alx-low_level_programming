#include "lists.h"

/**
 * find_listint_loop - finds loop
 * @head: head node
 * Return: starting node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = head;
	listint_t *end = head;

	if (!head)
		return (NULL);
	while (node && end && end->next)
	{
		end = end->next->next;
		node = node->next;
		if (end == node)
		{
			node = head;
			while (node != end)
			{
				node = node->next;
				end = end->next;
			}
			return (end);
		}
	}

	return (NULL);
}
