#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	int st, e;

	i = 0;
	while (s[i] != '\0')
		i++;

	e = i - 1;

	st = 0;
	while (st < e)
	{
		tmp = s[st];
		s[st] = s[e];
		s[e] = tmp;
		st++;
		e--;
	}
}
