#include "main.h"
/**
 * string_toupper - will change all lowercase of a string to uppercase
 * @s: char pointer or the string
 * Return: s character
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]  != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
