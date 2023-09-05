#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid created by alloc_grid
 * @grid: the grid to free
 * @height: the 2D array height
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int width = (sizeof(grid) / height) / sizeof(int *);

	for (i = 0; i < width; i++)
		free(grid[i]);
	free(grid);
}
