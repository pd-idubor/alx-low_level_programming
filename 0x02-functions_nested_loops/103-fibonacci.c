#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: On success, 0
 */
int main(void)
{
	int count, fib;
	int f1 = 0;
	int f2 = 1;
	int sum = 0;
	int limit = 4000000;

	for (count = 1; count <= 40; count++)
	{
		if ((f1 + f2) <= limit)
		{
			fib = f1 + f2;
			f1 = f2;
			f2 = fib;

			if (fib % 2 == 0)
				sum += fib;
		}
	}
	printf("%d\n", sum);
	return (0);
}
