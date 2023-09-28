#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit
 *
 * Return: The value of the bit at index index or -1 in ERROR
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;
	unsigned int c = 0;

	while (c < index)
	{
		i <<= 1;
		c++;
	}
	if (n & i)
		return (1);
	else
		return (0);
}
