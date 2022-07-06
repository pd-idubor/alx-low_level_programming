#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural number
 * @n: natural number
 * Return: void
 */
void print_to_98(int n)
{
	int limit = 98;

	while (n != limit)
	{
		while (n < limit)
		{
			printf("%d%s", n, ", ");
			n++;
		}
		while (n > limit)
		{
			printf("%d%s", n, ", ");
			n--;
		}
	}
	if (n == limit)
	{
		printf("%d", n);
		printf("\n");
	}
}
