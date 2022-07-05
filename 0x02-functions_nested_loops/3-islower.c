#include "main.h"
/**
 * _islower - A checker for lowercase characters.
 * @c: the character to be checker.
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
