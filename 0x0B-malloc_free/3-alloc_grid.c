#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: the array width
 * @height: the array height
 *
 * Return: a pointer to dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(width * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
		arr[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
