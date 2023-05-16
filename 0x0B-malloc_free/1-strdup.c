#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated memory space
 * @str: char pointer array
 * Return: A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, m = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (; str[m]; m++)
		dup[m] = str[m];
	return (dup);
}
