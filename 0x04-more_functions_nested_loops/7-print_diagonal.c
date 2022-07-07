#include "main.h"
/**
 * print_diagonal- draws diagonal line
 * @n: determines length
 * Return: void
 */
void print_diagonal(int n)
{
	int c, r;

	c = 0;
	while (n > 0)
	{
		r = c;
		while (r > 0)
		{
			_putchar(' ');
			r--;
		}
		_putchar('\\');
		_putchar('\n');

		c++;
		n--;
	}
	if (c <= 0)
		_putchar('\n');
}
