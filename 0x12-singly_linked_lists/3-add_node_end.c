#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a string to the end
 * @head: address of where the node is to be added
 * @str: string to be added
 *
 * Return: pointer to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	int len = 0;
	list_t *one = *head;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);
	while (str[len])
		len++;
	list->str = strdup(str);
	list->len = len;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (one->next)
		one = one->next;
	one->next = list;

	return (list);
}
