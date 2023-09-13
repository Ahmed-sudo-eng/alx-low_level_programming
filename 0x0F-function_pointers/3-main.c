#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int res;

	if (argc == 4)
	{
		if (*argv[2] == '+')
			res = atoi(argv[1]) + atoi(argv[3]);
		if (*argv[2] == '-')
			res = atoi(argv[1]) - atoi(argv[3]);
		if (*argv[2] == '*')
			res = atoi(argv[1]) * atoi(argv[3]);
		if (*argv[2] == '/')
			res = atoi(argv[1]) / atoi(argv[3]);
		if (*argv[2] == '%')
			res = atoi(argv[1]) % atoi(argv[3]);
		printf("%d\n", res);
	}
	else
	{
		puts("Error");
		exit(98);
	}
	return (0);
}
