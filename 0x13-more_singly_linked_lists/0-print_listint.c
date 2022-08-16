#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: linked list
 * Return: thr number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
