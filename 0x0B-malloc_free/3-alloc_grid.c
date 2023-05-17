#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: size of the array
 * @height: size of the array
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i]);
			free(grid);
			i--;
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (m = 0; m < width; m++)
			grid[i][m] = 0;
	}
	return (grid);
}
