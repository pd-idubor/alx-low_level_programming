#include "main.h"
/**
 * _isalpha - Checks for alphabets
 * @c: character under inspection
 * Return: 1 if true, else 0;
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
