#include <stdio.h>

/**
 * main - Entry point
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c = c + 1;
	}
	putchar('\n');
}
