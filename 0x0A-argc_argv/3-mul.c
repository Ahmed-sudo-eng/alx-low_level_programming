#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 in Success and 1 in Failure
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		puts("Error");
		return (1);
	}

	return (0);
}
