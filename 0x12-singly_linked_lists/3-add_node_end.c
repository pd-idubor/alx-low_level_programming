#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: start node
 * @str: string data
 * Return: address of new node or NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	char *dup;
	int i;

	last = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; )
		i++;

	new_node->str = dup;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
