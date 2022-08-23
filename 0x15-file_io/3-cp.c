#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buf_func(char *file);
void f_close(int fd);

/**
 * buf_func - Allocates buffer space (1024 bytes)
 * @file: file requiring buffer
 * Return: pointer to buffer
 */
char *buf_func(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * f_close - Closes file descriptor
 * @fd: descriptor to be closed
 * Return: void
 */
void f_close(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: On success, 0.
 */
int main(int argc, char *argv[])
{
	int wt, rd, from, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buf_func(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wt = write(to, buffer, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	f_close(from);
	f_close(to);

	return (0);
}
