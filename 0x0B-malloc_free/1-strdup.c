#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to new string
 * @str: string to be duplicated
 * Return: pointer to duplicaye on success or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, c;
	char *dup;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i += 1;
	dup = malloc(sizeof(char) * i);

	if (dup == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
	{
		dup[c] = str[c];
	}
	return (dup);
}
