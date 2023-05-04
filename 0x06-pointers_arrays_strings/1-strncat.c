#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: int to be used
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
		dest[i] = src[m];
		m++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
