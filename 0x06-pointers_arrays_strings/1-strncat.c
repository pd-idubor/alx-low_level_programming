#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
