#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: is the list to check
 * Return: the number of elememts in a linked list
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (listint_len(h->next) + 1);
}
