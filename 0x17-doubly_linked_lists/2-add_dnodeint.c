#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: head address
 * @n: number to fill node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
