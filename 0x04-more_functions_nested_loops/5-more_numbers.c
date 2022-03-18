#include "main.h"
/**
 * more_numbers - function to print 10 times the number, from 0 to 14,
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}


