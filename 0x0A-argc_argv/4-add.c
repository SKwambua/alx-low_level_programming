#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks if a give char is a nume=ber or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 */
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
			i++;
		}
	}
	return (num);
}
/**
 * main - adds positive numbers
 * print the result followed by a new line
 * if no number si passed to the program, print 0,
 * followed by a new line
 * if one of the number contains stmbols that are
 * not digits, print Error, followed by a new lin and return 1
 * @argc: number of argumemts
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
