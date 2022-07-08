#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: determines triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, s, h;
	/* i - iterator, s - spaces, h - hashtag */

	for (i = 0; i < size; i++)
	{
		for (s = i + 1; s < size; s++)
		{
			_putchar(' ');
		}

		for (h = i; h >= 0; h--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
