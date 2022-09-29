#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: points to first node
 * @idx: index at which the new node is to be added
 * @n: value of new node
 * Return: address of new node on success, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new_node;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	for (i = 0; tmp->next != NULL && i < idx; i++)
	{
		if ((i + 1) == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->prev = tmp;
			new_node->next = tmp->next;
			tmp->next->prev = new_node;
			tmp->next = new_node;

			return (new_node);
		}
		tmp = tmp->next;
	}

	if (tmp->next == NULL && (i + 1)  == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
