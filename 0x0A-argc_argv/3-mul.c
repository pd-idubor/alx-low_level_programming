#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: 0 on success or 1 if argc < 2
 */
int main(int argc, char **argv)
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[2]) * atoi(argv[1]);
	printf("%d\n", m);

	return (0);
}
