#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			if (d == c)
				continue;

			putchar((c % 10) + '0');
			putchar((d % 10) + '0');

			if (c  == 8 && d == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
