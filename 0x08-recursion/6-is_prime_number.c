#include "main.h"

/**
 * test - check if number is prime
 * @n: number to be checked
 * @i: checkers
 *
 * Return 1 or 0
 */

int test(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		test(n, i +1);
	}
	return (1);
}

/**
 * is_prime_number - returns 1 for prime numbers
 * @n: number
 *
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
	{
		return (0);
	}

	return (test(n, 1));
}


