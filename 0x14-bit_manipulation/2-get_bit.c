#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number
* @index: index
* Return: -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n & 1);
}
