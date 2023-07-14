#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (n >= length2)
		n = length2;
	cat = malloc(sizeof(char) * (length1 + n + 1));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';

	return (cat);
}
