#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: count
 * @argv: vector
 * Return: 0 on succes, else 1
 */
int main(int argc, char **argv)
{
	int i, c, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
		{
			if (argv[i][c] < '0' || argv[i][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
