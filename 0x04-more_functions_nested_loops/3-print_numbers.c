#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by new line.
 * Return: always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
