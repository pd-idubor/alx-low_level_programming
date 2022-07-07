#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: determines lenght of line
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
