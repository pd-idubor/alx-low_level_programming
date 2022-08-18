#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: string of binary number
 * Return: converted number or 0 if b is NULL or *b != 0 | 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, num = 0, p = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;
	len -= 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n = b[len] - '0';
		num = num + (n * p);
		len--;
		p *= 2;
	}
	return (num);
}
