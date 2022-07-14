#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int n;

	int m = 1;
	int st = 0;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			m = m * (-1);

		while (s[i] > 47 && s[i] < 58)
		{
			st = 1;
			n = n * 10 + (s[i] - '0');
			i++;
		}

		if (st == 1)
			break;

		i++;
	}
	n = n * m;
	if (n == '\0')
		return (0);
	else
		return (n);
}
