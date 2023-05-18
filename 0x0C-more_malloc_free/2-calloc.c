#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that fills memory with a byte
 * @s: memory area that memset fills
 * @b: character string to be copied
 * @n: amount of times b is copied
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * _memset - function that fills memory with a byte
 * @nmemb: array inwhich memory is allocated for
 * @size: size of the array
 * Return: NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call = malloc(size * nmemb);
	if (call == NULL)
		return (NULL);
	_memset(call, 0, nmemb * size);
	return (call);

}
