#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a doubly linked list
 * @head: points to start node
 * @n: new node value
 * Return: address of the new node on success, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
