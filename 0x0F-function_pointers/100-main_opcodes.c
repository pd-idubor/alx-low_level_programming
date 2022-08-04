#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its own opcode
 * @argc: number of command line arguments
 * @argv: array of pointers to arg
 * Return: On succes 0
 */
int main(int argc, char *argv[])
{
	int i, size;
	unsigned char opcode;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == size - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
