#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48; /* In ASCII 0 = 48 */
	while (n <= 57)
	{
		putchar(n);
		n = n + 1;
	}
	putchar(10); /* 10 is \n */
	return (0);
}
