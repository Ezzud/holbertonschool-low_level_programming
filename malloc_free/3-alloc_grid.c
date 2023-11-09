#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Main entey
 * @width: Array width
 * @height: Array height
 * Return: Pointer of an int array
 */
int **alloc_grid(int width, int height)
{
	int **grid_result;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	grid_result = malloc(height * sizeof(int *));
	if (grid_result == NULL)
	{
		free(grid_result);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_result[i] = malloc(width * sizeof(int));
		if (grid_result[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_result[i]);
			free(grid_result);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_result[i][j] = 0;
	return (grid_result);
}
