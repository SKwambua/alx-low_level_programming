#include "lists.h"
/**
 * free_listint2 - frees list of type listint_t
 * @head: pointer to ther first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
