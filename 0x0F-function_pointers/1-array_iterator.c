#include "function_pointers.h"

/**
 * array_iterator - executes a function given as an array
 * @array: array of the function to be executed
 * @size: the size of the array
 * @action: pointer to the function array_iterator
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
