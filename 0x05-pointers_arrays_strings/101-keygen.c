#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int p = 0;
	time_t t;
	int ran = 0;

	srand((unsigned int) time(&t));
	while (p < 2772)
	{
		ran = rand() % 128;
		if ((p + ran) > 2772)
			break;

		p += ran;
		printf("%c", ran);
	}
	printf("%c\n", (2772 - p));

	return (0);
}
