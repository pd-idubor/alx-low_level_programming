#include "main.h"

int string_len(char *s);
int p_check(char *s, int i);
int is_palindrome(char *s);

/**
 * string_len - returns string length
 * @s: string
 * Return: length
 */
int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}

/**
 * p_check - palindrome checker
 * @s: string
 * @i: index
 * Return: 0 or 1 for false or true
 */
int p_check(char *s, int i)
{
	int len = string_len(s) - (i + 1);

	if (s[i] == s[len])
	{
		if (i + 1 == len || i == len)
			return (1);
		return (p_check(s, i + 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 1 or 0 if true or false resp.
 */
int is_palindrome(char *s)
{
	if (!(*s))
		return (1);
	return (p_check(s, 0));
}
