#include "main.h"
/**
 * *_memset - fills meory with a constant byte
 * @b: char to copy
 * @s: memory area to be filled
 * @n: number of time to copy b
 * Return: pointer to thr memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
