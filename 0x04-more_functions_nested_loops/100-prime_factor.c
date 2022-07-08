#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
