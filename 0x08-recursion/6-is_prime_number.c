#include "main.h"
/**
 * actual_prime - find if the number is a prime number
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number -  returns 1 if the integer input is a prime number
 * otherwise returns 0
 * @n: input integer
 * Return: 1 if it's prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
