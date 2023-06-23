#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: Always void
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
