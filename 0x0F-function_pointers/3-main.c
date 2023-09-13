#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int res;

	if (argc == 4)
	{
		f = get_op_func(argv[2]);
		res = f(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
	}
	else
	{
		puts("Error");
		exit(98);
	}
	return (0);
}
