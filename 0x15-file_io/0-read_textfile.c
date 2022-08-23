#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a textfile and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return: number of letteds read and printed or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wt);
}
