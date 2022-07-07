#include "main.h"
/**
 * print_square - prints a square
 * @size: determines square size
 * Return: void
 */
void print_square(int size)
{
	int c, r;
	char s = '#';

	if (size <= 0)
		_putchar('\n');

	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
			_putchar(s);
		_putchar('\n');
	}
}
