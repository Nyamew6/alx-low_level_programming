#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
    int count, limit;
    unsigned long int fib1 = 1, fib2 = 2, next;

    count = 2;
    limit = 98;

    printf("%lu, %lu", fib1, fib2);

    while (count < limit)
    {
        next = fib1 + fib2;
        printf(", %lu", next);

        fib1 = fib2;
        fib2 = next;
        count++;
    }

    printf("\n");
    return (0);
}

