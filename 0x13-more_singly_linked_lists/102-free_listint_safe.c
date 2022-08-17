#include "lists.h"

/**
 * listint_loop_l - Returns number of unique nodes in list
 * @head: start node
 * Return: number of nodes or 0.
 */
size_t listint_loop_l(const listint_t *head)
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
 * free_listint_safe - Frees lists with loop
 * @h: start node
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n, i = 0;

	n = listint_loop_l(*h);
	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

	}

	else
	{
		for (i = 0; i < n; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (n);
}
