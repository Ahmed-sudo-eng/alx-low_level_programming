#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that print numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator != NULL && i != n - 1)
			printf("%d%s", num, separator);
		else if (i == n - 1)
			printf("%d", num);
		else
			printf("%d ", num);
	}
	putchar(10);
}
