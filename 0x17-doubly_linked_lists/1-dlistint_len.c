#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in doubly linked list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		len++;
		h = h->next;
	}
	return (len);
}
