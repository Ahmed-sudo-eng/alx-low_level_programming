#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int u;

	u = 0;
	while (u < n)
	{
		_putchar(95);	/* 95 -> '_' */
		u++;
	}
	_putchar(10);	/* 10 -> '\n' */
}

