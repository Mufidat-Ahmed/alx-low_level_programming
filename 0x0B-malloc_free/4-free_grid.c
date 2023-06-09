#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two dimensional grid
 * @grid: pointer array of grid to be freed
 * @height: amount to be freed
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
