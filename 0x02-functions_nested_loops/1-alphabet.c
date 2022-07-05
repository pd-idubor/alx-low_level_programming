#include "main.h"
/**
 * print_alphabet - Prints the alphabets in lowercase then '\n'
 *
 * Return: Alwasy 0 (Success)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
