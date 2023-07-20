#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add integers
 * @a: first int
 * @b: second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract intrgers
 * @a: first int
 * @b: second int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply integers
 * @a: first int
 * @b: second int
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide integers
 * @a: first int
 * @b: second int
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division
 * @a: first int
 * @b: second int
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
