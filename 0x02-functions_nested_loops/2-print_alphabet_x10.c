#include "main.h"
/**
 * print_alphabet_x10 - Prints the 10 x the_alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	char alph;

	for (count = 1; count <= 10; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}

}
