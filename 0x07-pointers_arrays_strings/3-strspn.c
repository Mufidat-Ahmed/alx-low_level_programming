#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer vaariable that consists only of bytes from accept
 * @accept: pointer variable
 * Return: Number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
       	int m = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				m++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
