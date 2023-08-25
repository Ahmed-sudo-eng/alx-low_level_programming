#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string to capitalize
 *
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int c;
	int d;
	int C;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i] == 32 || s[i] == 9 || s[i] == 10 
				|| s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == 34
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				c = s[i + 1];
				d = c - 'a';
				C = 'A' + d;
				s[i + 1] = C;
			}
		}
	}
	return (s);
}

