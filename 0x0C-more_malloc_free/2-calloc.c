#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array inwhich memory is allocated for
 * @size: size of the array
 * Return: NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb ==  0 || size == 0)
		return (NULL);
	call = malloc(size * nmemb);
	if (call == NULL)
		return (NULL);
}
