#include "lists.h"
/**
 * find_listint_loop - Finds the looo in a linked list
 * @head: start node
 * Return: address of loop start or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (NULL);
}
