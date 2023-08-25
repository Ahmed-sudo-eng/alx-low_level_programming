#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string to encode
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = (s[i] == 'a' || s[i] == 'A') ? 52 : s[i];
		s[i] = (s[i] == 'e' || s[i] == 'E') ? 51 : s[i];
		s[i] = (s[i] == 'o' || s[i] == 'O') ? 48 : s[i];
		s[i] = (s[i] == 't' || s[i] == 'T') ? 55 : s[i];
		s[i] = (s[i] == 'l' || s[i] == 'L') ? 49 : s[i];
	}
	return (s);
}
