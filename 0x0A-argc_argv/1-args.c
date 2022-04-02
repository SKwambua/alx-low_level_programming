#include <stdio.h>
/**
 * main - prints the name of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	*argv = *argv;

	printf("%d\n", argc);
	return (0);
}
