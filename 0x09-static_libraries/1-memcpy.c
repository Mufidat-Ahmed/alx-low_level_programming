#include "main.h"

/**
 * _memcpy - copies the content of a pointer string to another
 * @dest: pointer string to be copied from
 * @src: pointer string to be copied to
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = n, i;

	for (i = 0; i < m; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
