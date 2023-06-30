#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string1
 * @s2: string2
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
