#include "main.h"
/**
 * print_sign - Prints the signs of numbers.
 * @n: Numbers to be signed
 * Return: 1 if positive, 0 if zero, else -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
