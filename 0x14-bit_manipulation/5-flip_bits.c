#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = (n ^ m);
	unsigned int i = 1 << 31;
	int c = 0;

	while (i > 0)
	{
		if (i & diff)
			c++;
		i >>= 1;
	}
	return (c);
}
