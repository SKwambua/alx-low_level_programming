#include "lists.h"
/**
 * add_nodeint - is a functin tha  add a node in a linked list
 * at the beginnig of the list
 * @head: is a list to add a node
 * @n: data to insert in a new node
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	{
		if (new == NULL)
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
