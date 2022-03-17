#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Prototype: void print_alphabet(void)
 */
void print_alphabet(void)
{
	char aa;

	aa = 'a';

	while (aa <= 'z')
	{
		_putchar(aa);
		aa++;
	}
	_putchar('\n');
}

