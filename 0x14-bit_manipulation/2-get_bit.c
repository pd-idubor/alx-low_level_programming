#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number
 * @index: specified index
 * Return: value of bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}
