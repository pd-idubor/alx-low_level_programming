#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to be converted
 * @index: specified index
 * Return: On success 1, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n &= ~(1 << index);
	return (-1);
}
