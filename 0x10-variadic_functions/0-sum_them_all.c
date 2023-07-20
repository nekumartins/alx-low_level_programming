#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds arguments
 * @n: first argument
 *
 * Return: sum of ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list append;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(append, n);
	for (i = 0; i < n; i++)
		sum += va_arg(append, int);
	va_end(append);

	return (sum);
}
