#include "main.h"

/**
 * _strpbrk - finds the first character in a string from another string
 * @s: pointer string to be used
 * @accept: pointer string to be searched
 * Return: pointer s
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
