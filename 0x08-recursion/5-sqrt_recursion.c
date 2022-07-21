#include "main.h"
/**
 * _sqrt - square root checker
 * @g: guess
 * @i: integer
 * Return: sqrt or -1
 */
int _sqrt(int g, int i)
{
	if (g * g == i)
		return (g);
	if (g * g > i)
		return (-1);
	return (_sqrt(g + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: n ^ (1/2) or -1, if unnatural
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
