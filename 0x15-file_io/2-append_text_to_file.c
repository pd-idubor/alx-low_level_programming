#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends a string to text to a file
 * @filename: name of the file
 * @text_content: text to be added
 * Return: 1 on success, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len];)
		len++;

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
