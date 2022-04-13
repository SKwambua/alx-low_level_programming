#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searchs for an integer
 * @array: an array to search interer from
 * @size: number of elements in the array
 * @cmp: is a pointer to the function used to compare values
 * Return: index of the first elememt which the cpm does not return o
 * if no element matches return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
