#includes "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to printed
 */
void print_rev(char *s)
{
	int a, b, abc;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	abc = a;

	for (b = abc - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
