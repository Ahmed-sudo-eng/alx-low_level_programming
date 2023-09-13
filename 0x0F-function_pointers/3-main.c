#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entery point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: O in Success
 */
int main(int argc, char *argv[])
{
	int res;
	op_t user_op;

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	if (argc == 4)
	{
	user_op.op = atoi(argv[2]);
	user_op.f = get_op_func(*argv[2]);
	if (user_op.f == NULL)
	{
		puts("Error");
		exit(99);
	}
	res = user_op.f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	}
	else
	{
		puts("Error");
		exit(98);
	}
	return (0);
}
