#include "main.h"

/**
 * test - check for square root
 * @n: number
 * @i: possible values
 *
 * Return: -1 or square root
 */

int test(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (test(n, i + 1));
}

/**
 * _sqrt_recursion - return square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test(n, 0));
}


