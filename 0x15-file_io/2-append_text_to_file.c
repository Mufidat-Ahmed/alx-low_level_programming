#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: file to be appended
 * @text_content: string to be added to file
 * Return: 1 on success else 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, name, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	else if (text_content != NULL)
	for (i = 0; text_content[i]; i++)
	file = open(filename, O_WRONLY | O_APPEND);
	name = write(file, text_content, i);
	if (file == -1 || name == -1)
		return (-1);
	close(file);
	return (1);
}
