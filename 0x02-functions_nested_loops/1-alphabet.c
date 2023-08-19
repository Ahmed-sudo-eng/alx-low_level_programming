#include "_putchar.c"

void print_alphabet(void);

/**
 * main - Entry point
 * Return: Alwayas 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char n;
	
	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
}
