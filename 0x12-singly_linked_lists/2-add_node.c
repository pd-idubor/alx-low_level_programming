#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: start node
 * @str: string data
 * Return: address of new node or NULL on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	int i;

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
