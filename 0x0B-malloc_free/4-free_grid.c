#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

    i = -1;
    while (++i < height)
		free(grid[i]);
	free(grid);
}
