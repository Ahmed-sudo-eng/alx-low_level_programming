#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 122;
	while (c >= 97)
	{
		putchar(c);
		c = c - 1;
	}
	putchar(10);
	return (0);
}
