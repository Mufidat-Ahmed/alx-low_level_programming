#include "main.h"

/**
 * _memset - copies the character from a char to an int
 * @s: pointer character containing string to be copied
 * @b: character
 * @n: number of bytes to be copied
 * Return: pointer string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
