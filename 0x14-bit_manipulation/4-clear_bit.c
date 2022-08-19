#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to be converted
 * @index: specified index
 * Return: On success 1, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	m = m << index;
	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = m ^ *n;

	return (-1);
}
