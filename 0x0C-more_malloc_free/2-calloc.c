#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - alloctaes memory for an array usin malloc
 * @nmemb: number of elements
 * @size: bytes
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(nmemb * size);
	if (memo == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memo + i) = 0;
	return ((void *)memo);
}
