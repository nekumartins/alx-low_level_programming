#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list append;

	va_start(append, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(append, char *);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		if (separator)
			printf("%s", separator);
	}
	va_end(append);
}
