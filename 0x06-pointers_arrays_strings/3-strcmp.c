#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, f;

	i = 0;
	f = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (*s1 != *s2)
		{
			f = *s1 - *s2;
			break;
		}
		i++;
	}

	if (f == 0)
		return (0);

	else
		return (f);
}
