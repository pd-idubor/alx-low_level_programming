#include "main.h"
/**
 * cap_string - converts all lowercase letters to uppercase
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i, c;

	char sep[] = {' ', 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i])
	{
		c = 0;
		while (sep[c])
		{
			if ((s[i]  >= 'a' && s[i] <= 'z') && (i == 0 || s[i - 1] == sep[c]))
			{
				s[i] -= 32;
			}
			c++;
		}
		i++;
	}
	return (s);
}
