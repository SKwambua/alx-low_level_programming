#include "main.h"
/**
 * cap_string - capitalize all words in a string,
 * separators of the words: space, tabulation, new line ',', ';', '.', '!',
 * '?', '"', '(', ')', '{' and '}'
 * @s: char array or the string
 * Return: return (s)
 */
char *cap_string(char *s)
{
	int i, j;

	char ch[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}',};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == ch[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}

		}
	}
	return (s);
}
