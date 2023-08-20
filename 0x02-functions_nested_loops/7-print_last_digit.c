#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number to extract last digit from
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;
	int a;

	r = n % 10;	/* r is the last digit of n */
	if (r < 0)
	{
		r = r * -1;	/* convert r to positive if r is negative */
	}
	a = r + 48;	/* convert r to ascii -a- */
	_putchar(a);
	return (r);
}
