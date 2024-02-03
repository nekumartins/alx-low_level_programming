#include "main.h"
/**
 * _strcat - Concatenates strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	int test = 0, test1 = 0;

	while (dest[test] != '\0')
	{
		test++;
	}
	while (src[test1] != '\0')
	{
		dest[test] = src[test1];
		test1++;
		test1++;
	}
	dest[test] = '\0';

	return (dest);
}
