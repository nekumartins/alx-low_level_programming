#include "main.h"

/**
 * _sqrt_recursion - return square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	int root;

	root = _sqrt_recursion(n - 1);

	if (root * root > n)
	{
		return (root - 1);
	}

	return (root);
	}


