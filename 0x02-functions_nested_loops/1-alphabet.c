#include "_putchar.c"

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
