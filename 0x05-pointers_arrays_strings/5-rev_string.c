#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char abc;
	int w, rst, wxy;

	rst = 0;
	wxy = 0;

	while (s[rst] != '\0')
	{
		rst++;
	}

	wxy = rst - 1;

	for (w = 0; w < rst / 2; w++)
	{
		abc = s[w];
		s[w] = s[wxy];
		s[wxy--] = abc;
	}
}
