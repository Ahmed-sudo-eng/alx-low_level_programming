#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 48; /* 48 is 0 in ASCII */
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44); /* 44 is comma in ASCII */
			putchar(32); /* 32 is SPACE in ASCII */
		}
		n = n + 1;
	}
	putchar(10); /* 10 is \n in ASCII */
	return (0);
}


