#include "main.h"

/**
 * _strncat - merges two strings together
 * @dest: pointer string to be merged
 * @src: pointer string to be merge
 * @n: int n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m;

	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;

	while (m < n && src[m] != '\0')
	{
		i++;
		m++;
	}
	dest[i] != '\0';
	return (dest);
}
