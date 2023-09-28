#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: points to the decimal numnber
 * @index: index to change value at
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;
	unsigned int c = 0;
	unsigned int i = 1;

	while (c < index)
	{
		i <<= 1;
		c++;
	}
	r = (*n | i);
	*n = r;

	return (1);
}
