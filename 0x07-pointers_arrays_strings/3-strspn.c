#include "main.h"
/**
 * _strspn - gets the length of a prefix of substring
 * @s: string
 * @accept: sub
 * Return: number of bytes of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, c;

	i = 0;
	n = 0;
	while (s[i])
	{
		c = 0;
		while (accept[c])
		{
			if (s[i] == accept[c])
			{
				n++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (n);
			c++;
		}
	i++;
	}
	return (n);
}
