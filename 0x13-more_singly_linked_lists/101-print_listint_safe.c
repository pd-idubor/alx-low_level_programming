#include "lists.h"
#include <stdio.h>

/**
 * listint_loop_len - Returns the number of unique nodes in list
 * @head: start node
 * Return: number of nodes or 0.
 */
size_t listint_loop_len(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
			}
			return (n);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a linked list
 * @head: start node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, i = 0;

	n = listint_loop_len(head);

	if (n == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			n++;
			head = head->next;
		}
	}
	else
	{
		while (i < n)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			i++;
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
