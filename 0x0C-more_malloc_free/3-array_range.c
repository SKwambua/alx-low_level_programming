#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create an array of integers
 * @min: minimum number of elements
 * @max: maxmum numeber of elements
 * Return: the pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(arr + i) = min;
	return (arr);

}
