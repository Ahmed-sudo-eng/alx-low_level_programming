#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: It has no return (void)
 */
void jack_bauer(void)
{
	int h;
	int m;
	int a;
	int b;
	int x;
	int y;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar('0' + h);
			}
			else
			{
				a = h % 10;
				b = (h - a) / 10;
				_putchar('0' + b);
				_putchar('0' + a);
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar('0' + m);
			}
			else
			{
				x = m % 10;
				y = (m - x) / 10;
				_putchar('0' + y);
				_putchar('0' + x);
			}
			_putchar('\n');

		}
	}
}




