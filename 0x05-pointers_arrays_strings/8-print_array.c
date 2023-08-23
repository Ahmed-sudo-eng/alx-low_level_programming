#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * , followed by a new line
 * @a: array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
