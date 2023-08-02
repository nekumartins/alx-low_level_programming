#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to the first element of list
 * @n: new node
 * Return: address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = new;
	}
	else
		*head = new;

	return (new);
}
