#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer input
 *
 * Return: void
 */

void print_times_table(int n)
{
    if (n < 0 || n > 15) {
        return;
    }

    int i, j, res;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            res = i * j;
            if (j == 0) {
                _putchar(res + '0');
            } else {
                _putchar('\t');
                if (res >= 10) {
                    _putchar((res / 10) + '0');
                } else {
                    _putchar(' ');
                }
                _putchar((res % 10) + '0');
            }
        }
        _putchar('\n');
    }
}

