#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbeds followed by a new line
 * @separator: string to be printed btw numbers
 * @n: number of integers passed to func
 * @..: variable arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
