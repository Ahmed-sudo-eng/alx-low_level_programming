#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9
 * except 2 and 4, followed by a new line.
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	unsigned char c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		_putchar(c);
	}
	_putchar(10);
}

