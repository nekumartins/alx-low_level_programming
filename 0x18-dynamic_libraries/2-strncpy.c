#include "main.h"

/**
* _strncpy - copies a string
* @dest: Destination string
* @src: Source string
* @n: number of bytes
* Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	dest[i]  = src[i];
	for (; n > i; i++)
	dest[i] = '\0';
	return (dest);
}
