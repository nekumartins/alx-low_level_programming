#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if string is a number
 * @s: string
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *string1, *string2;
	int length1, length2, len, i, carry, num1, num2, *result, a = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	length1 = _strlen(string1), length2 = _strlen(string2);
	len = length1 + length2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = string1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(string2) - 1; length2 >= 0; length2--)
		{
			num2 = string2[length2] - '0';
			carry += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
