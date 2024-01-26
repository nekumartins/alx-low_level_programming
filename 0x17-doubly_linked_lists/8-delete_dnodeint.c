#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index position
 * @head: pointer to head in function
 * @index: position to be added
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int node;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	for (node = 0; (current != NULL) && (node < index); node++)
		current = current->next;
	if (current == NULL)
		return (-1);
	if (*head == current)
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
