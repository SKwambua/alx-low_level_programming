#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9,
 * followed by new line
 * Do not print 2 and 4
 * You can only use _putchar twice in the code.
 *
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
