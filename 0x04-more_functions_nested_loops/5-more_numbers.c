#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int u;

	for (i = 0; i < 10; i++)
	{
		u = 0;
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(49);
			if (j == 10)
				u = 0;
			_putchar(48 + u);
			u++;
		}
		_putchar(10);
	}
}
