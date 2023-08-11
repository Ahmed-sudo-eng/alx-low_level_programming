#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x = x + 1;
	}
	putchar(10); /* 10 = \n (new line) */
	return (0);
}

