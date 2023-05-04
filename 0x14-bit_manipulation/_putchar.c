#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);
    write(1, &((n & 1) + '0'), 1);
}
