#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 in Success
 */
int main(int argc, char *argv[])
{
	int cents;
	int count = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
		{
			puts("0");
			return (0);
		}
		while (1)
		{
			if (cents >= 25)
			{
				if (cents % 25 == 0)
				{
					count += cents / 25;
					break;
				}
				else
				{
					count++;
					cents = cents - 25;
					continue;
				}
			}
			else if (cents >= 10)
			{
				if (cents % 10 == 0)
				{
					count += cents / 10;
					break;
				}
				else
				{
					count++;
					cents = cents - 10;
					continue;
				}
			}
			else if (cents >= 5)
			{
				if (cents % 5 == 0)
				{
					count++;
					break;
				}
				else
				{
					count++;
					cents = cents - 5;
					continue;
				}
			}
			else if (cents >= 2)
			{
				if (cents % 2 == 0)
				{
					count += cents / 2;
					break;
				}
				else
				{
					count++;
					cents = cents - 2;
					continue;
				}
			}
			else if (cents == 1)
			{
				count++;
				break;
			}
		}

	}
	else
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
