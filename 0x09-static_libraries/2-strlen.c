#include "main.h"

/**
 * _strlen - returns the length of the pointer string s
 * @s: pointer string to be used
 * Return: length of pointer string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
