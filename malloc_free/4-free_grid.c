#include "main.h"
/**
 * free_grid - entry point
 * @grid: grid
 * @height: ar
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
