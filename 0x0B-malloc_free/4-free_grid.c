#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the function frees a 2 dimensional grid
 * previously by the alloc_grid function
 * address of two 2d grid
 * @height: height of grid
 * @grid: double pointer 2d grid
 */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
		free(grid[d]);
	free(grid);
}
