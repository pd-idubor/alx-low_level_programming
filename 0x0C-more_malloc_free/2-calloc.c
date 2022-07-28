#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for ay array
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *fill;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	fill = arr;
	for (i = 0; i < (nmemb * size); i++)
	{
		fill[i] = '\0';
	}
	return (arr);
}
