#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int res;
	op_t user_op;

	if (argc == 4)
	{
	user_op.op = argv[2];
	user_op.f = get_op_func(user_op.op);
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
