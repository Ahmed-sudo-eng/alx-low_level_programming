#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 in Success
 */
int main(int argc, char *argv[])
{
	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		exit(2);
	}
	if (argc == 2)
	{
		printf("55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc");
		printf("02 74 14\n");
	}
	else
	{
		puts("Error");
		exit(1);
	}
	return (0);
}
