#include "lists.h"

/**
 * sum_listint - returns the sum of n
 * @head: pointer to list
 * Return: sum of all data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}

	return (sum);
}
