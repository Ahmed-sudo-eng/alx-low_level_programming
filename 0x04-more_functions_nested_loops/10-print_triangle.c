#include "main.h"

/**
 * print_triangle - a function that print a triangle followed by a new line
 * @size: The size of the trisngle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int b;
	int h;
	int sp;

	if (size <= 0)
		_putchar('\n');

	h = 1;
	while (h <= size)
	{
		sp = size - h;
		b = 1;
		while (b <= size)
		{
			if (b > sp)
				_putchar('#');
			else
				_putchar(' ');
			b = b + 1;
		}
		_putchar('\n');
		h = h + 1;
	}
}
