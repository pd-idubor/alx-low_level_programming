#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to 2-dim array of integers
 * @width: array column
 * @height: array rows
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int r, c;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		arr[r] = malloc(sizeof(int) * width);
		if (arr[r] == NULL)
		{
			for (; r >= 0; r--)
				free(arr[r]);

			free(arr);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			arr[r][c] = 0;
		}
	}

	return (arr);
}
