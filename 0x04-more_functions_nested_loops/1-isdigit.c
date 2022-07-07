#include "main.h"
/**
 * _isdigit - Checks for digits 0 through 9
 * @c: digit for the check
 * Return: 1 if true, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
