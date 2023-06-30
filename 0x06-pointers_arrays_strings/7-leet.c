#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i, j;
	char *string1 = "aAeEoOtTlL";
	char *string2 = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == string1[j])
			{
				s[i] = string2[j];
			}
		}
	}

	return (s);
}
