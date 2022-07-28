#include <stdlib.h>
#include "main.h"
/**
 * str_len - return length of a string
 * @str: string
 * Return: length
 */
unsigned int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_len(str + 1));
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string2
 * @n: number of bytes of s2
 * Return: pointer to memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = str_len(s1) + 1;

	if (n >= str_len(s2))
		n = str_len(s2);

	str = malloc(n + (sizeof(char) * len));
	if (str == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	for (c = 0; c < n; c++)
	{
		str[i] = s2[c];
		i++;
	}
	str[i] = '\0';

	return (str);
}
