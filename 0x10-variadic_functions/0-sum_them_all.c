#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: fixed arg
 * @...: variable number of arg
 * Return: 0 if n = 0, else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
