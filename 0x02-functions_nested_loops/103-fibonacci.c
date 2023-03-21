#include "main.h"

/**
 * fibonacci_sum_even - Computes sum of even Fibonacci numbers
 * that do not exceed 4 million
 *
 * Return: Sum of even Fibonacci numbers
 */
int fibonacci_sum_even(void)
{
	int i, sum = 0, fib;

	for (i = 0; (fib = fibonacci(i)) <= 4000000; i++)
	{
		if (fib % 2 == 0)
			sum += fib;
	}

	return (sum);
}

/**
 * fibonacci - Computes the nth Fibonacci number
 * @n: The index of the Fibonacci number to compute
 *
 * Return: The nth Fibonacci number
 */
int fibonacci(int n)
{
	int i, a = 1, b = 1, c;

	if (n < 2)
		return (1);

	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return (b);
}

/**
 * num_len - Computes the number of digits in a number
 * @num: The number to compute the length of
 *
 * Return: The number of digits in @num
 */
int num_len(int num)
{
	int len = 0;

	do {
		len++;
		num /= 10;
	} while (num != 0);

	return (len);
}

/**
 * print_num - Prints a number to the standard output
 * @num: The number to print
 */
void print_num(int num)
{
	int i, len, div = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	len = num_len(num);

	for (i = 0; i < len - 1; i++)
		div *= 10;

	for (i = 0; i < len; i++)
	{
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
}

