#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: integer
 *
 * Return: Always 0 (Success)
 *
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else if (i == 0)
		return (0);
	else
		return (i * 1);
}
