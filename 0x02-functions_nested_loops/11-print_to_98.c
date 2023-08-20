#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The number to start from
 *
 * Return: It has no return (void)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	putchar('\n');
}

