#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integer
 * @min: minimum value contained in array
 * @max: maximum value contained in array
 * Return: NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *range, m, i = 0;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	range = malloc(sizeof(int) * m);
	if (range == NULL)
		return (NULL);
	while (min <= max)
		i++;
	range[i] = min++;
	return (range);
}
