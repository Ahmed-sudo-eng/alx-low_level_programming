#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int w;
	int h;

	if (size <= 0)
		_putchar(10);

	h = 1;
	while (h <= size)
	{
		w = 1;
		while (w <= size)
		{
			_putchar(35);	/* 35 --> '#' */
			w++;
		}
		_putchar(10);
		h++;
	}
}
