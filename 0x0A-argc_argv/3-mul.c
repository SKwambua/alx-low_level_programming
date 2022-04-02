#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * it should print result of multiplication followed by a new line
 * if program does not receive two arguments
 * should print erro followed by a new line
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	int i, j, mul;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mul = i * j;
	{
		printf("%d\n", mul);
	}
	return (0);
}
