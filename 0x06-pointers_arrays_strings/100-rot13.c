#include "main.h"

/**
 * rot13 - using the rot13 enryption
 * @s: string to be encrypted
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
	char * string1= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *string2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == string1[j])
			{
				s[i] = string2[j];
				break;
			}
		}
	}

	return (s);
}
