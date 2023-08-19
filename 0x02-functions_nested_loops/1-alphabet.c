#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: It has no return (void)
 */
void print_alphabet(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
