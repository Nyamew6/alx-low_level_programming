#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]); 

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]); 

	int min_num_coins = 0; 

	for (int i = 0; i < num_coins; i++)
	{
		
		int num = cents / coins[i];
		
		min_num_coins += num;
	
		cents %= coins[i];
	}

	printf("%d\n", min_num_coins);

	return (0);
}
