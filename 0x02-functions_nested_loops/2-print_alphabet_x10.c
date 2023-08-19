#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: It has no return (void)
 */
void print_alphabet_x10(void)
{
	char n;
	char i;

	for (i = 0; i < 10; i++)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
