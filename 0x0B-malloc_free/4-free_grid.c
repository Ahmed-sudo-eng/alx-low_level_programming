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

	free(grid);
}
