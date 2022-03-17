#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char sh;
	int i;

	i = 10;

	while (i < 10)
	{
		sh = 'a';
		while (sh <= 'z')
		{
			_putchar(sh);
			sh++;
		}
		_putchar('\n');
		i++;
	}
}
