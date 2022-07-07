#include "main.h"
/**
 * more_numbers - Prints numbers 1 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int n, count;

	for (count = 1; count <= 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar ('\n');
	}
}
