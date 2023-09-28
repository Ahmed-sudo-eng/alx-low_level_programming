#include "main.h"

/**
 * clear_bit - a function that sets thae value of a bit to 0 at a given index
 * @n: points to the decimal number
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long r;
	unsigned int c = 0;
	unsigned int i = 1;

	while (c < index)
	{
		i <<= 1;
		c++;
	}
	r = (*n & ~i);
	*n = r;

	return (1);
}
