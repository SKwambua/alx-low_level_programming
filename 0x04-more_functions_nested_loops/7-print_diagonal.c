#include "main.h"
/**
 * print_diagonal - Function to draw a diagonal line on the terminal
 * diagonal should end with a \n
 * @n: is number of thimes the character \ should be printed
 * if n is o or less, the function should only print a \n
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c, b;

		for (c = 0; c < n; c++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == c)
					_putchar('\\');
				else if (b < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
