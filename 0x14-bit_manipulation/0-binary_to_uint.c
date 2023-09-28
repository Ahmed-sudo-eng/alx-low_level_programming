#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if b containg strange chars or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int base, exp, r;
	int i, j;
	int p = 0;
	unsigned int d = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == 49)
		{
			base = 2;
			exp = p;
			r = 1;
			while (exp > 0)
			{
				r *= base;
				exp--;
			}
			d += r;
		}
		else if (b[j] == 48)
		{
			d += 0;
		}
		else
			return (0);
		p++;
	}

	return (d);
}
