#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts new node at a given position
 * @head: start node
 * @idx: index where new node is to be added
 * @n: new node data
 * Return: new node address or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	tmp = *head;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		i++;
		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
