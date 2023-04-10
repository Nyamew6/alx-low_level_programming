#include <stdio.h>
#include <stdlib.h>

#include "main.h" // Header file with function prototypes

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int num = 0;

    for (int i = 0; i < num_coins && cents > 0; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            num++;
        }
    }

    printf("%d\n", num);
    return 0;
}
