#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 and prints + if n is greater than zero
 * Or 0 and prints 0 if n is zero
 * Or -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);	/* 43 is + sign in ascii */
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);	/* 48 is 0 in ascii */
		return (0);
	}
	else
	{
		_putchar(45);	/* 45 is - sign in ascii */
		return (-1);
	}
}
