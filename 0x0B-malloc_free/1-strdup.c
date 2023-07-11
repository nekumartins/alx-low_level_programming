#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int length = 0, i;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	duplicate = malloc(sizeof(*str) * length + 1);
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = '\0';

	return (duplicate);
}
