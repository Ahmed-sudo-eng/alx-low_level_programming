#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 upon Success and 1 in Failure
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;
		int result = 0;

		for (i = 1; i < argc; i++)
		{
			if (isalpha(*argv[i]))
			{
				puts("Error");
				return (1);
			}

			else
			{
				result = result + atoi(argv[i]);
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
		return (1);
	}

	return (0);
}
