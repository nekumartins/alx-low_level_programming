#include "main.h"

/**
 * len - get the length of the string
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + len(s + 1));
}

/**
 * test - checks if its a palindrome
 * @s: string
 * @j: checker
 * @length: length of string
 *
 * Return: 1 or 0
 */
int test(char *s, int j, int length)
{
	if (*(s + j) != *(s + length - 1))
	{
		return (0);
	}
	if (j >= length)
		return (1);

	return (test(s, j + 1, length - 1));
}

/**
 * is_palindrome - checks if a word is a palindrome
 * @s: pointer to string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (test(s, 0, len(s)));
}




