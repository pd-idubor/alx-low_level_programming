#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all program arguments
 * @ac: arg count
 * @av: arguments
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, c, l, size;

	size = ac;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (l = 0; av[c][l]; l++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	for (c = 0; c < ac; c++)
	{
		for (l = 0; av[c][l]; l++)
			str[i++] = av[c][l];
		str[i++] =  '\n';
	}

	str[size] = '\0';
	return (str);
}
