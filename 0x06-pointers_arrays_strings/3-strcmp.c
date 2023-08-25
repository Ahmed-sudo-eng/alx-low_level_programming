#include "main.h"

/**
 * strcmp - a function that comapres two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: if s1 = s2: 0
 * 	   if s1 > s2: a number greater than zero
 * 	   if s1 < s2: a number less than zero
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int c;

	i = 0;
	while (s1[i] != '\0')
	{
		c = s1[i] - s2[i];
		if (c != 0)
			break;
		i++;
	}
	return (c);
}
