#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two ints
 * @a: first int
 * @b: second int
 *
 * Return: product of the ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of of two ints
 * @a: first int
 * @b: second int
 *
 * Return: division of two ints
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
