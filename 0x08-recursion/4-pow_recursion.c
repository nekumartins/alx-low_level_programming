#include "main.h"

/**
 * _pow_recursion - raises a number to a power
 * @x: number
 * @y: power
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	int exponent;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0 || y == 1)
	{
		return (1);
	}
	if (y == 2)
	{
		return (x * x);
	}
	exponent = x * _pow_recursion(x, y - 1);

	return (exponent);
}
