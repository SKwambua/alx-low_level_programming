#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to allocated memory by malloc
 * @old_size: bytes allocated initially
 * @new_size: the reallocated memory
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *newmem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	newmem = malloc(new_size * sizeof(char));
	if (newmem == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			newmem[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (newmem);
	}
	while (i < new_size)
	{
		newmem[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (newmem);
}
