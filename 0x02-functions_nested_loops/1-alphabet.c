#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Prototype: void print_alphabet(void)
 * Return: Always 0 (success)
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

