#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min. amount of coins to make change for a given amount
 * @argc: count
 * @argv: argument vector
 * Return: On success 0, if argc not exactly 1- 1.
 */
int main(int argc, char **argv)
{
	int cents, amt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = 0;
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		amt++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", amt);

	return (0);
}
