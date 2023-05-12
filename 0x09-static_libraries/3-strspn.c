#include "main.h"

/**
 * _strspn - returns the length of a string
 * @s: pointer value to be used
 * @accept: pointer character to be used
 * Return: lenght of string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				n++;
			else if (accept[i + 1] != '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
