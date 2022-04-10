#include "stdlib.h"
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: the number of bytes from s2 to concatebate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		con = malloc(sizeof(char) * (len1 + n + 1));
	else
		con = malloc(sizeof(char) * (len1 + len2 + 1));
	if (con == NULL)
		return (NULL);

	while (i < len1)
	{
		con[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		con[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		con[i++] = s2[j++];

	con[i] = '\0';

	return (con);
}
