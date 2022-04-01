#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of n
 * @n: number to find its sqr
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find its square root
 * if n does not have a natural sqaure root,
 * the function should return -1
 * Return: natural sqaure root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
