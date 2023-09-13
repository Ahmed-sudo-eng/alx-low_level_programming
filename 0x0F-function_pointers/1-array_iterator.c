#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on
 * each element of an array
 * @array: the array that contains the elements
 * @size: the size of the array
 * @action: the function to executes in the elements
 *
 * Return: Nothing
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
