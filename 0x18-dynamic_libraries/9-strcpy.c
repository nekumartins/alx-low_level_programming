#include "main.h"
/**
 * _strcpy - the string pointed to by src
 * @dest: the variable pointer at dest
 * @src: the variable pointer at src
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
