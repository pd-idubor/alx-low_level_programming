#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: to be searched
 * @size: number of elements in array
 * @cmp: points to function to be used to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (size <= 0 || array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n != 0)
			return (i);
	}
	return (-1);
}
