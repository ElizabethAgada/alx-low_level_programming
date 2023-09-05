#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by function
 * @height: height of grid
 * @grid: grid to be freed
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
