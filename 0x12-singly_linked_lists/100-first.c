#include <stdio.h>

void first(void)__attribute__ ((constructor));
/**
 * first - prints a string before main function execution
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI");
	printf(" bore my house upon my back!\n");
}
