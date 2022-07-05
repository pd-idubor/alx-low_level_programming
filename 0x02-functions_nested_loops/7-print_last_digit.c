#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: a number, the argument
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
	{
		l = -l;
		_putchar(l + '0');
		return (l);
	}

	else
	{
		_putchar(l + '0');
		return (l);
	}
}
