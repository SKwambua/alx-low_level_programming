#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - is a function that prints numbers,
 * followed by a new line
 * @separator: is a string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list az;
	unsigned int i;

	va_start(az, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(az, int));
		else if (separator && i == 0)
			printf("%d", va_arg(az, int));
		else
			printf("%s%d", separator, va_arg(az, int));
	}
	va_end(az);

	printf("\n");
}
