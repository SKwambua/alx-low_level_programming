#include "main.h"
/**
 * reverse_array - reverses content of an array of integer
 * @n: number of elements in array
 * @a: array of integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
