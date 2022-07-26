#include <stdlib.h>
#include "main.h"
/**
 * str_len - returns length of a string
 * @str: string
 * Return: length
 */
int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + str_len(str + 1));
}
/**
 * str_concat - concatenates two strings
 * @s1: a string
 * @s2: another string
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, c, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 1 + str_len(s1) + str_len(s2);
	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	c = 0;
	while (s2[c] != '\0')
	{
		str[i] = s2[c];
		i++;
		c++;
	}
	str[i] = '\0';
	return (str);
}
