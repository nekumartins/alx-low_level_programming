#include <stdio.h>

/**
 * main - prints both lowercase and uppercase alphabet
 *
 * Return: 0.
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}

	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
