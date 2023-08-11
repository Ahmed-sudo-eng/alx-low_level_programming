#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x = x + 1;
	}

	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}


