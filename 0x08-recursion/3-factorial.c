#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the input number
 * if n is lower the 0 function return -1
 * factorial of 0 is 1
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
