#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates characters
 * @n: number of ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list append;

	va_start(append, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(append, int));
		else
		{
			printf("%d", va_arg(append, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(append);
}
