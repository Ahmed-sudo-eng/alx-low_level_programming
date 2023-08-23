#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * , followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar(10);
}
