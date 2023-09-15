#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of type of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			if (format[i + 1] == '\0')
				printf("%c", va_arg(ap, int));
			else
				printf("%c, ", va_arg(ap, int));
		}
		else if (format[i] == 'i')
		{
			if (format[i + 1] == '\0')
				printf("%d", va_arg(ap, int));
			else
				printf("%d, ", va_arg(ap, int));
		}
		else if (format[i] == 'f')
		{
			if (format[i + 1] == '\0')
				printf("%f", va_arg(ap, double));
			else
				printf("%f, ", va_arg(ap, double));
		}
		else if (format[i] == 's')
		{
			if (format[i + 1] == '\0')
				printf("%s", va_arg(ap, char *));
			else
				printf("%s ", va_arg(ap, char *));
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
