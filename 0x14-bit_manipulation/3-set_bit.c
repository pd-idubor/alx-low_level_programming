#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: number to be converted
 * @index: specified index
 * Return: 1 on success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(8) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
