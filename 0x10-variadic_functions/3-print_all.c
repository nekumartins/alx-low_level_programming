#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - prints every argument
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";

	va_list append;

	va_start(append, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(append, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(append, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(append, double));
					break;
				case 's':
					string = va_arg(append, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;

			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(append);
}
