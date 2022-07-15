#include "main.h"
/**
 * leet - encodes a string
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, u;

	char c[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i])
	{
		u = 0;
		while (u < 5)
		{
			if (s[i] == c[u] || s[i] - 32  == c[u])
				s[i] = n[u];
			u++;
		}
		i++;
	}
	return (s);
}
