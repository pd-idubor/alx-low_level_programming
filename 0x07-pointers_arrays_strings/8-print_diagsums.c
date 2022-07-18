#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers
 * @a: array
 * @size: array dim.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, rsum;

	sum = 0;
	rsum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a = a - size;
	for (i = 0; i < size; i++)
	{
		rsum += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, rsum);
}
