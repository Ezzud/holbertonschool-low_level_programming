#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Main entry
 * @grid: Array of integer with multiple lines
 * @height: Grid Geight
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
