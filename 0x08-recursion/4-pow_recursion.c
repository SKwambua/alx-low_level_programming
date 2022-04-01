#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * if y is lower that 0, the function should return -1
 * @x: input
 * @y: input to be used as power to x
 *
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
