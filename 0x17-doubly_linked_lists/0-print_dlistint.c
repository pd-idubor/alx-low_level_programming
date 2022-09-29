#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: pointer to start node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
