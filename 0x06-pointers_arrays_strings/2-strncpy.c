#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: int to be used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
