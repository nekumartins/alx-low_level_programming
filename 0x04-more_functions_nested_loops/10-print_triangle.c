#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 * Return: Always void
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int x = 0; x < size; x++)
		{
			for (int y = size - x; y > 1; y--)
			{
				_putchar(32);
			}

			for (int z = 0; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

