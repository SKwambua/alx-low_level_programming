#include "lists.h"
/**
 * sum_listint - calculate the sum of all the data in a listint_t list
 * @head: is the first node in the linked list
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
