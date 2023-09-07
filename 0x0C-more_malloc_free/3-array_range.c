#include <stdlib.h>

/**
 * array_range - a function thar creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: a pointer to an array contains elements fron min to max
 */
int *array_range(int min, int max)
{
	int i;
	int mi = min;
	int n;
	int *ptr;

	for (n = 0; mi <= max; n++)
		mi++;
	ptr = (int *) calloc(n, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
