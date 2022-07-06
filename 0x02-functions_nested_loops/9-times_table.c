#include "main.h"
/**
 * times_table - Prints the 9 times table
 * @void: no parameters
 * Return: void
 */
void times_table(void)
{
	int c, r, d;

	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			d = c * r;
			if (r == 0)
			{
				_putchar((d % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (d < 10)
					_putchar(' ');
				else if (d > 9)
					_putchar((d / 10) + '0');

				_putchar((d % 10) + '0');
				if (r == 9)
					continue;

				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
