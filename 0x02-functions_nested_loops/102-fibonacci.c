#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: On success, 0
 */
int main(void)
{
	int count;
	long int f1 = 0;
	long int f2 = 1;
	unsigned long int fib = f1 + f2;

	for (count = 1; count <= 50; count++)
	{
		printf("%lu", fib);
		f1 = f2;
		f2 = fib;
		fib = f1 + f2;
		if (count == 50)
			continue;
		printf("%s", ", ");
	}
	printf("\n");
	return (0);
}
