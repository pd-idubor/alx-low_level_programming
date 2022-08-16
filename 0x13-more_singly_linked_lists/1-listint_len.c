#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
