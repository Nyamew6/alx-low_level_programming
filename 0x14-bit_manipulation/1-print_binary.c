#include "main.h"
#include <stddef.h>

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(n) * 8;

	while (bits--) {
		if ((n >> bits) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
