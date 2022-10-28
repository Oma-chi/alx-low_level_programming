#include "main.h"

/**
 * free_grid - frees an allocated spacer
 * @grid: the grid to be free
 * @height: height of the grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

