#include "main.h"
/**
 * _strpbrk - searches a string a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c;

	i = 0;
	while (s[i])
	{
		c = 0;
		while (accept[c])
		{
			if (s[i] == accept[c])
				return ((s + i));
			c++;
		}
		i++;
	}
	return ('\0');
}
