#include <stdio.h>

/**
 * main - prints base 16
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
