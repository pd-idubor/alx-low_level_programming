#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at specified index
 * @head: start node
 * @index: index of the node
 * Return: nth node of the list, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i <= index; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
