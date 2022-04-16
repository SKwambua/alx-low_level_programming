#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: is the number of arguments passed to the function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list az;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(az, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(az, int);

	va_end(az);

	return (sum);
}
