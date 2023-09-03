#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;
		int result = 0;

		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
				result = result + atoi(argv[i]);
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
		puts("0");

	return (0);
}
