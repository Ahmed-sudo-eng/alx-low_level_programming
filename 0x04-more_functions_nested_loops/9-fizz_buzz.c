#include <stdio.h>

int main(void)
{
	int c;

	c = 1;
	while (c <= 100)
	{
		if (c % 15 == 0)
			printf("FizzBuzz ");
		else if (c % 3 == 0)
			printf("Fizz ");
		else if (c % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", c);

		c++;
	}
	return (0);
}
