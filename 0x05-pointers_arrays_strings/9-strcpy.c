#include "main.h"

/**
 * char *_strcpy - copies the string of a pointer
 * @dest: pointer destination
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
