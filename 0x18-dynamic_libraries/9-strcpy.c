#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string to be copied
 * @src: string to be copiedd from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, m;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (m = 0; m < i; m++)
	{
		dest[m] = src[m];
	}
	dest[i] = '\0';
	return (dest);

}
