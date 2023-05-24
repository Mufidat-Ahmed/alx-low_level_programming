#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to be searched for an integer
 * @size: size of the array to be searhed
 * @cmp: pointer to the array
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
