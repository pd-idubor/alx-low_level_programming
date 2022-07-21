#include "main.h"
/**
 * prime_check - checks for prime numbers
 * @i: iterator
 * @num: number
 * Return: 0 or 1 if false or true resp.
 */
int prime_check(int i, int num)
{
	if (num < 2)
		return (0);
	if (i == num)
		return (1);
	if (num % i == 0)
		return (0);
	return (prime_check(i + 1, num));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 1 if true, else 0.
 */
int is_prime_number(int n)
{
	return (prime_check(2, n));
}
