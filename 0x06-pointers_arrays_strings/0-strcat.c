#include "main.h"

/**
 * _strcat - concatenate two different sring together
 * @dest: destination to be concatenated
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
			m++;
			i++;
		}
		dest[i] = '\0';
		return (dest);
}
