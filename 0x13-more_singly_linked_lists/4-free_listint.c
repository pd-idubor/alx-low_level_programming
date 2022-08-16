#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: start node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
