#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that print strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else if (separator != NULL && i != n - 1)
			printf("%s%s", string, separator);
		else if (i == n - 1)
			printf("%s", string);
		else if (separator == NULL)
			printf("%s", string);
	}
	va_end(ap);
	printf("\n");
}
