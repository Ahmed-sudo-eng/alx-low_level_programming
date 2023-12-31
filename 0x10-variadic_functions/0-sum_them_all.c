#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: first argument
 *
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	va_end(ap);
	return (sum);

}
