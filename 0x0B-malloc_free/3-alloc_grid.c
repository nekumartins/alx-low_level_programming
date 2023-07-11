#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initializes grid to 0
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
