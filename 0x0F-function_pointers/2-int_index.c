#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function to use to compare
 *
 * Return: the index of the first element that match
 * and (-1) if no element matches or the size is less than or equal (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cmp_result;
	int i;

	for (i = 0; i < size; i++)
	{
		cmp_result = (*cmp)(array[i]);
		if (cmp_result != 0)
			return (i);
	}
	if (size <= 0)
		return (-1);
	return (-1);
}
