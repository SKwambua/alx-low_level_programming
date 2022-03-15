#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
