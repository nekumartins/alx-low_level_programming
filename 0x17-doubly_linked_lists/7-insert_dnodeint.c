#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to head of list
 * @idx: index where the new node should be added
 * @n: data for new node
 * Return: address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;

		*h = new;
		return (new);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp)
	{
		new->prev = temp;
		new->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
