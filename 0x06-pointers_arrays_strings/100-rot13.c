#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int i, c;

	char alph[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		c = 0;
		while (alph[c])
		{
			if (s[i] == alph[c])
			{
				s[i] = rot[c];
				break;
			}
			c++;
		}
		i++;
	}
	return (s);
}
