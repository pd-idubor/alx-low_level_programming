#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file
 * @filename: name of the file
 * @text_content: String tobe written to the file
 * Return: On success, 1 else, -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content == NULL && op != -1)
	{
		close(op);
		return (1);
	}
	wt = write(op, text_content, i);

	if (op == -1 || wt == -1)
		return (-1);
	close(op);

	return (1);
}
