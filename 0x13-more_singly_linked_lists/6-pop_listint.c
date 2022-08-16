#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list
 * @head: head node
 * Return: if empty 0, else node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (num);
}
