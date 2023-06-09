#include "main.h"

/**
 * create_file - A function that creates files
 * @filename: name of file to be created
 * @text_content: content of the file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, file, name;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		file = open(filename, O_CREAT);
	}
	else if (text_content != NULL)
	for (i = 0; text_content[i]; i++)
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	name = write(file, text_content, i);
	if (file == -1 || name == -1)
		return (-1);
	close(file);
	return (1);
}
