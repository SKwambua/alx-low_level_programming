#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error,
 * followed by a new line, and return
 * If the number passed as the argument is negative, print 0
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	coins = 0;
	if (amount > 25)
	{
		while (amount >= 25)
		{
			amount -= 25, coins++;
		}
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
		{
			amount -= 10, coins++;
		}
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
		{
			amount -= 5, coins++;
		}
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
