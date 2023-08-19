#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number to extract last digit from
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
