#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creae an array of chars and initialises with a specific char
 * @size: amount of space to be reserved in the array
 * @c: char to initialize the array
 * Return: a pointer to the rray or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *Ray;

	Ray = malloc(sizeof(char) * size);
	if (size == 0 || Ray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		Ray[i] = c;
	return (Ray);
}
