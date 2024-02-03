#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: Destination string
* @src: Source string
* @n: number of bytes
* Return: pointer
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}
return (dest);
}
