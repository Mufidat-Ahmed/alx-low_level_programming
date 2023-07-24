#include "main.h"

/**
 * _strchr - searches for the first occurence of the character c
 * @s: pointer string
 * @c: character to be found
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
