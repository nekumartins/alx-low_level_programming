#include <stdio.h>
#include <math.h>

/**
 * main - prints HPF
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	int root = sqrt(num);

	for (int i = root; i >= 1; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
