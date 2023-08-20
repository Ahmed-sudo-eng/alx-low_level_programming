#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: It has no return (void)
 */
void times_table(void)
{
	int i;
	int j;
	int n;
	int x;
	int y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			 n = i * j;
			 x = n % 10;
			 y = (n - x) / 10;

			 if (j == 0)
			 {
				 _putchar('0' + n);
				 _putchar(',');
			 }
			 else
			 {
				 _putchar(' ');
				if (n < 10)
				{
					_putchar(' ');
					_putchar('0' + n);
				}
				else
				{
					_putchar('0' + y);
					_putchar('0' + x);
					}
				if (j == 9)
					continue;
				else
					_putchar(',');
			 }
		}
		_putchar('\n');
	}
}
