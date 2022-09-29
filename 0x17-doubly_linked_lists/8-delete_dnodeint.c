#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at specified index of
 *	a doubly linked list
 * @head: pointer to pointer of first node
 * @index: index of the node to be deleted
 * Return: On success, 1 else, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL; i++)
	{
		if (i == index)
		{
			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}

	return (-1);
}
