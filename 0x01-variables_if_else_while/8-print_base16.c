#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	char x;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);

}
