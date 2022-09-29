#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: start node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int i;

	for (i = 0; head != NULL; i++)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
