#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines
 *
 * Return: Always void
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i  = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
