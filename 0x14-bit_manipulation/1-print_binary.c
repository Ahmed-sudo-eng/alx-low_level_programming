#include "main.h"

/**
 * print_binary - a function that prints the binary representatio of a number
 * @n: decimal number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned int j;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	i = 1 << 31;
	while (i > 0)
	{
		if (n & i)
			break;
		i >>= 1;
	}
	for (j = i; j > 0; j >>= 1)
		(n & j) ? _putchar(49) : _putchar(48);
}
