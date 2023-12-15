#include "main.h"

/**
* flip_bits - returns the number of  required bits
* @n: number
* @m: other number
* Return: number of bit to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, required = 0;
	int size = (sizeof(num) * 8);

	while (size >= 0)
	{
		if (num & 1)
			required++;
		num = num >> 1;
		size--;
	}
	return (required);
}
