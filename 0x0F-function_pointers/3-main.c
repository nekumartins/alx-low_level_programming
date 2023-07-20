#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs operations on integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result, num1, num2;
	char operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];
	if (num2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
