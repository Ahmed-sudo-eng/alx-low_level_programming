#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 *
 * Return: Noting
 */
void print_diagonal(int n)
{
	int d;
	int s;

	if (n <= 0)
		_putchar(10);/*print newline if n is equal to or less than 0 */

	d = 0;
	while (d < n)
	{
		s = 0;
		while (s < d)
		{
			_putchar(32);	/* 32 --> ' ' */
			s++;
		}
		_putchar(92);	/* 92 --> '\' */
		d++;
		_putchar(10);	/* 10 --> '\n' */
	}
}

