#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2-dimensional array
 * @height: number of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height < 1)
		return;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
