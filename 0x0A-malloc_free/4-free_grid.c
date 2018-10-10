#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * @grid: the 2 dimensional grid to be freed
 * @height: the height of the grid
 * Return: no value
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;
	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
