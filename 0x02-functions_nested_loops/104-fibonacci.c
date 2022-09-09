#include <stdio.h>
/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: always 0 on success
 */
int main(void)
{
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	int i;
	unsigned long int fib = f1 + f2;
	unsigned long int f1_div1, f1_div2, f2_div1, f2_div2;
	unsigned long sum1, sum2;

	for (i = 1; i < 93; i++)
	{
		printf("%lu", fib);
		f1 = f2;
		f2 = fib;
		fib = f1 + f2;
		printf("%s", ", ");

	}

	f1_div1 = f1 / 10000000000;
	f1_div2 = f1 % 10000000000;
	f2_div1 = f2 / 10000000000;
	f2_div2 = f2 % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		sum1 = f1_div1 + f2_div1;
		sum2 = f1_div2 + f2_div2;
		if ((f1_div2 + f2_div2) > 9999999999)
		{
			sum1 = sum1 + 1;
			sum2 = sum2 % 10000000000;
		}
	}
	printf("\n");
	return (0);
}
