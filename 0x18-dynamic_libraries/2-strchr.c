#include "main.h"
/**
* _strchr - Locates a character
* @s: String
* @c: Character to search
* Return: Pointer
**/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}
	return (0);
}
