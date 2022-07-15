#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number
 * @n2: another number
 * @r: storage buffer
 * @size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, s, i, sum, t;

	a = 0;
	b = 0;
	c = 0;
	while (n1[a])
		a++;
	a--;
	while (n2[b])
		b++;
	b--;
	if (a > size_r || b > size_r)
		return (0);

	for (i = 0; i < size_r; a--, b--, i++)
	{
		sum = c;
		if (a >= 0)
			sum += n1[a] - '0';
		if (b >= 0)
			sum += n2[b] - '0';
		if (a < 0 && b < 0 && sum == 0)
			break;
		c = sum / 10;
		r[i] = sum % 10 + '0';
	}
	if (a >= 0 || b >= 0 || sum > 0)
		return (0);
	r[i] = '\0';
	i--;
	for (s = 0; s < i; i--, s++)
	{
		t = r[i];
		r[i] = r[s];
		r[s] = t;
	}
	return (r);
}
