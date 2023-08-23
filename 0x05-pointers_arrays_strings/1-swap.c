#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;	/* store a value in x */
	*a = *b;/* swap a value with b value */
	*b = x;	/* swap b value with x which is a value */
}
