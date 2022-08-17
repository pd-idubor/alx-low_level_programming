#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at specified index
 * @head: start node
 * @index: specified node
 * Return: On success, 1 else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *tmp;

	prev = *head;
	if (prev == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (i < (index - 1))
	{
		if (prev == NULL || prev->next == NULL)
			return (-1);
		i++;
		prev = prev->next;
	}

	tmp = prev->next;

	prev->next = tmp->next;
	free(tmp);
	return (1);
}
