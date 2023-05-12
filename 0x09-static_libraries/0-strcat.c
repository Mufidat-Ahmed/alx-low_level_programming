#include "main.h"

/**
 * *_strcat - concatenates strinf dest and src
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, m;

	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;

	while (src[m] != '\0')
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] != '\0';
	return (dest);
}
