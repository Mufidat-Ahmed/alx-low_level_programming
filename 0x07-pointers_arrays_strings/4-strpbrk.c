#include "main.h"

/**
 * _strpbrk - Searches for a string from a given set of bytes
 * @accept: pointer char to be searched
 * @s: pointer char to be returned
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
