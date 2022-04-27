#include "lists.h"

/**
 * free_listint - frees list of type listint_t
 * @head: is the pointer to the firts node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
