#include "main.h"
/**
 * print_times_table - prints the n time table
 * @n: the given number
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int c, r, d;

		for (c = 0; c <= n; c++)
		{
			for (r = 0; r <= n; r++)
			{
				d = c * r;
				if (r == 0)
					_putchar((d % 10) + '0');
				else
				{
					if (d < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (d < 100)
					{
						_putchar(' ');
						_putchar((d / 10) + '0');
					}

					if (d > 99)
					{
						_putchar((d / 100) + '0');
						_putchar(((d / 10) % 10) + '0');
					}
					_putchar((d % 10) + '0');

				}
				if (r == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
