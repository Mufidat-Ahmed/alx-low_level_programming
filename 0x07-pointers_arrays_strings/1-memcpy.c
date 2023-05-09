#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: Memory area to be copied from
 * @dest: Memory area to be copied to
 * @n: int to be copied
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = n, i;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
