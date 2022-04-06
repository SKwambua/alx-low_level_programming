#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an arrray of char and initializes
 * it with a specific char
 * @size: size of array
 * @c: char to initialize the array
 * Return: NULL if size = 0 and return a pointer to the array or
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] != '\0';

	return (p);
}
