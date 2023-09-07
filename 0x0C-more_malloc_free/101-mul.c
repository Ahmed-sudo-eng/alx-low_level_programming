#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: The result of multiplying two numbers
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = argv[1] * arrgv[2];
		printf("%d\n", result);
	}
	else
	{
		puts("Error");
		exit(98);
	}
	return (0);
}
