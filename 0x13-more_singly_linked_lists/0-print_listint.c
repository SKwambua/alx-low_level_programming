#include <stdio.h>

/**
 * print_listint - prints all elements of of alink list
 * @h: link list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (len);
}
