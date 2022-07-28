#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum value
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, count;

	if (min > max)
		return (NULL);

	count = 0;
	i = min;
	while (i <= max)
	{
		i++;
		count += 1;
	}

	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		arr[i] = min;
		min += 1;
	}
	return (arr);
}
