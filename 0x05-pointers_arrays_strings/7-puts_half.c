#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: Nothing;
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	i--;	/* remove '\0' */
	if ((i % 2) == 0)
		n = (i / 2);
	else
		n = (i - 1) / 2;
	n++;
	while (n <= i)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar(10);
}
