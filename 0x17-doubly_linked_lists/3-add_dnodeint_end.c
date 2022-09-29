#include "lists.h"

/**
 * add_dnodeint_end - Addsanew node at the end of a linked list
 * @head: points to start node
 * @n: new node value
 * Return: address of new node on success, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
		tmp = tmp->next;

	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
