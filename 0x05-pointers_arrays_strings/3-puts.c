#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
