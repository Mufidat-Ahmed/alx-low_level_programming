#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to posix
 * @filename: file to be openned and read
 * @letters: size of space to be allocated
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *name;
	ssize_t will, i, file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	name = malloc(sizeof(char) * letters);
	will = read(file, name, letters);
	i = write(STDOUT_FILENO, name, will);

	free(name);
	close(file);
	return (i);
}
