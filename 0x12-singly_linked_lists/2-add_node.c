#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a list
 * @head: address of where the node is to be added
 * @str: what is to be added
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int len = 0;

	while (str[len])
		len++;
	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->len = len;
	list->next = (*head);
	(*head) = list;

	return (*head);
}
