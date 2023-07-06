#include "main.h"

/**
 * test - checks for prime numbers
 * @n: number to be checked
 * @i: checkers
 *
 * Return: 1 or 0
 */

int test(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (test(n, i - 1));
}

/**
 * is_prime_number - returns 1 for prime numbers
 * @n: number
 *
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (test(n, n / 2));
}
