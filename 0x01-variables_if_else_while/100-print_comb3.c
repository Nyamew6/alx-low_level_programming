#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            int tens1 = i / 10;
            int ones1 = i % 10;
            int tens2 = j / 10;
            int ones2 = j % 10;

            if (tens1 != tens2 && ones1 != ones2 && i != j)
            {
                putchar(ones1 + '0');
                putchar(ones2 + '0');

                if (i != 89)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    return (0);
}
