#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in alinked lsit list_t list
 * @h: list to check
 * Return: number(size) of the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (list_len(h->next) + 1);
}
