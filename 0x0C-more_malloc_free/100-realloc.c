#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to prev. allocated memory
 * @old_size: size in bytes for ptr
 * @new_size: size in bytes of new block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mem;
	char *dup, *fill;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dup = ptr;
	mem = malloc(sizeof(*dup) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *dup++;
	free(ptr);
	return (mem);
}
