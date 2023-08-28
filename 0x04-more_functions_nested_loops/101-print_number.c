#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int abs;
	int g;

	if (n > 0)		/* finding absolute value */
		abs = n;
	else
		abs = -n;

	if (abs < 10)
	{
		if (n >= 0)
			_putchar(48 + n);
		else
		{
			_putchar('-');
			_putchar(48 + n);
		}
	}
	else if (abs < 100)
	{
		if (n > 0)
		{
			g = n / 10;
			_putchar(48 + g);
			n = n - g;
			n = n / 10;
			_putchar(48 + n);
		}
		else
		{
			_putchar('-');
			n = n * -1;
			g = n / 10;
			_putchar(48 + g);
			n = n - g;
			n = n / 10;
			_putchar(48 + n);
		}
	}
	else if (abs < 1000)
	{
		if (n > 0)
		{
			g = n / 10;
			_put
