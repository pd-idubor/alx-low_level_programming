#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list
 * @h: list to be printed
 * Return: nunver of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
