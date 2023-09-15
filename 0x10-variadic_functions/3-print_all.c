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
		switch (format[i])
		{
			case 'c':
				switch (format[i + 1])
				{
					case '\0':
						printf("%c", va_arg(ap, int));
						break;
					default:
						printf("%c, ", va_arg(ap, int));
						break;
				}
				break;
			case 'i':
				switch (format[i + 1])
				{
					case '\0':
						printf("%d", va_arg(ap, int));
						break;
					default:
						printf("%d, ", va_arg(ap, int));
						break;
				}
				break;
			case 'f':
				switch (format[i + 1])
				{
					case '\0':
						printf("%f", va_arg(ap, double));
						break;
					default:
						printf("%f, ", va_arg(ap, double));
						break;
				}
				break;
			case 's':
				switch (format[i + 1])
				{
					case '\0':
						printf("%s", va_arg(ap, char *));
						break;
					default:
						printf("%s, ", va_arg(ap, char *));
						break;
				}
				break;
		}
		i++;
	}
	printf("\n");
}
