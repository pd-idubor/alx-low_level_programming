#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints every possible different combination of three digits.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int c, i, a;

	for (c = 0; c <= 9; c++)
	{
		for (i = c + 1; i <= 9; i++)
		{
			if (i == c)
				continue;
			for (a = i + 1; a <= 9; a++)
			{
				if (a == c)
					continue;
				else if (a == i)
					continue;

				putchar((c % 10) + '0');
				putchar((i % 10) + '0');
				putchar((a % 10) + '0');

				if (c == 7 && i == 8 && a == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
