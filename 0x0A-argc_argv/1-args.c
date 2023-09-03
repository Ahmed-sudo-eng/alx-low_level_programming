#include <stdio.h>

/**
 * main - aprogram that prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always (0) Success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
