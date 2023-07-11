#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1 = 0, length2 = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	cat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';

	return (cat);
}
