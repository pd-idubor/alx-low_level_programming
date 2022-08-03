#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes function given
 *	as parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
