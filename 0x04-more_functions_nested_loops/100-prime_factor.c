#include <stdio.h>

/**
 * main -  program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line
 *
 * Return: 0 in Success
 */
int main(void)
{
	long int x;
	int f;

	x = 612852475143;
	while (x != 1)
	{
		f = 2;
		while (x % f != 0)
			f++;
		x = x / f;
	}
	printf("%d\n", f);
	return (0);
}
