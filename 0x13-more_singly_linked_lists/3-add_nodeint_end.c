#include "lists.h"

/**
 * add_nodeint_end - Adds a new node tobthe end of a linked list
 * @head: start node
 * @n: node data
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
