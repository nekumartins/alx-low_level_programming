#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: char pointer
* Return: 0 on error
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, exponent = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += exponent;
		i--;
		exponent += exponent;
	}
	return (sum);
}