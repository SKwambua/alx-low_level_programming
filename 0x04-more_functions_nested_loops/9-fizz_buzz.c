#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * followed by new line
 * if multiples of 3 print Fizz
 * if multiples of 5 print Buzz
 * if multiples of both ptint FizzBuzz, each number be separated by a space
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d", a);
		}
	}
		printf("\n");

		return (0);
}
