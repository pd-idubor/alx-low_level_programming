#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: arg. count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (*argv)
		printf("%d\n", (argc - 1));
	return (0);
}
