#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to first needle or NULL if none
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (*haystack == needle[i])
		{
			while (haystack[i] == needle[i] && needle[i] != '\0')
			{
				i++;
				return (haystack);
			}	
		}
	       haystack++;	
	}
	return ('\0');
}
