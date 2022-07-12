#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, h;

	i = 0;
	while (str[i] != '\0')
		i++;


	if (i % 2 == 1)
		h = (i + 1) / 2;
	else
		h = (i / 2);

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
