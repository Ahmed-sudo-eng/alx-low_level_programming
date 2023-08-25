#include "main.h"

/**
 * string_toupper - convert lowercase string to uppercase string
 * @s: string to convert;
 *
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int i;	/* simple counter */
	int c;	/* lower case character */
	int C;	/* upper case character */
	int d;	/* different between 'a' (97) c */

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 97) && (c <= 122))
		{
			d = c - 'a';
			C = 'A' + d;
			s[i] = C;
		}
	}
	return (s);
}



