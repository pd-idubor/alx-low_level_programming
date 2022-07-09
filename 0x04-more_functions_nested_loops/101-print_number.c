#include "main.h"
/**
 * print_number - prints integers
 * @n: specified integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int un;

	if (n < 0)
	{
		_putchar('-');
		un = -n;
	}

	else
		un = n;

	if (un >= 10)
	{
		print_number(un / 10);
	}
	_putchar((un % 10) + '0');
}
