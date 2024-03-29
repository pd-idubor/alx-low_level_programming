#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes each
 * @c: character
 * @size: size of array
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	str[i] = '\0';
	return (str);
}
