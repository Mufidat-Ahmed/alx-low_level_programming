#include "main.h"
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * main - start of the function
 * @argc: number of arguments contained in the argv
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, i, will;
	char *holder;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	holder = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, holder, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(holder);
			exit(98);
		}
		will = write(to, holder, i);
		if (to == -1 || will == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(holder);
			exit(99);
		}

		i = read(from, holder, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);
	free(holder);
	close_file(from);
	close_file(to);
	return (0);
}
/**
 * *create_buffer - creates a buffer for size allocation
 * @file: file that size needs to be allocated for
 * Return: allocated size
 */

char *create_buffer(char *file)
{
	char *holder;

	holder = malloc(sizeof(char) * 1024);

	if (holder == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (holder);
}

/**
 * close_file - function that closes file descriptors.
 * @fd: The file to be closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
