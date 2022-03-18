#include "main.h"
/**
 * print_line - prints char '_' n times
 * if n is 0 or less, the function should only print new line
 * @n: is the number of times the charater _ is going to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
