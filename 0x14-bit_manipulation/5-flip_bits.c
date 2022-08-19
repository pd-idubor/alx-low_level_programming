#include "main.h"
/**
 * flip_bits - Returns the number of bits to flip to get a number
 * @n: number
 * @m: number to flip n to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int res;

	res = n ^ m;
	for (i = 0; res > 0;)
	{
		if  ((res & 1) == 1)
			i++;
		res = res >> 1;
	}
	return (i);
}
