#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a previously allocated memory
 * @old_size: size in byte for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);
	old = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			newptr[i] = old[i];
	}
	free(ptr);
	return (newptr);
}
