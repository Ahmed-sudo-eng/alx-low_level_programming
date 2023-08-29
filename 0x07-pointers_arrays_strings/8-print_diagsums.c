#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: the array
 * @size: the array size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int d1;
	int d2;

	i = 0;
	d1 = 0;
	while (i < size * size)
	{
		d1 = d1 + a[i];
		i = i + size + 1;
	}

	j = size - 1;
	d2 = 0;
	while (j < (size * size) - 1)
	{
		d2 = d2 + a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", d1, d2);
}


