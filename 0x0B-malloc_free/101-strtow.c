#include <stdlib.h>
#include "main.h"

/**
 * word_len - returns length of each word in a string
 * @s: string
 * Return: length
 */
int word_len(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * word_count - counts thr number of words in a string
 * @s: string
 * Return: word count
 */
int word_count(char *s)
{
	int i = 0, len = 0, count = 0;

	while (*(s + i))
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(s + i) != ' ')
		{
			count++;
			i += word_len(s + i);
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to array of words or NULL
 */
char **strtow(char *str)
{
	int i = 0, words, w, letters, l;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		arr[w] = malloc(sizeof(char) * (letters + 1));
		if (arr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(arr[w]);

			free(arr);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			arr[w][l] = str[i++];
		arr[w][l] = '\0';
	}
	arr[w] = NULL;
	return (arr);
}
