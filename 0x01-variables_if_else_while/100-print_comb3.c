#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int y;

	n = '0';
	m = '1';
	while (n <= '8')
	{
		putchar(n);
		putchar(m);
		if ((n != '8') && (m != '9'))
		{
			putchar(',');
			putchar(' ');
		}
		y = m + 1;
		while (y <= '9')
		{
			putchar(n);
			putchar(y);
			putchar(',');
			putchar(' ');
			y = y + 1;
		}
		n = n + 1;
		m = m + 1;
	}
	putchar('\n');

	return (0);
}
