#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *end = head;

	if (head == NULL)
		exit(98);


	while (end != NULL)
	{
		printf("[%p] %i\n", (void *)end, end->n);
		end = end->next;
		size++;
	}
	return (size);
}
