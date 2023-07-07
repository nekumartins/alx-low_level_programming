#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
