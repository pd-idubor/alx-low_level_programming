#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data of doubly linked list
 * @head: start node
 * Return: sum of data, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
