#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = c + 1; d <= 99; d++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (c == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
