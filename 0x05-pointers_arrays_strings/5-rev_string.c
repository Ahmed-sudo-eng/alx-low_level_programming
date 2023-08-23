#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	char reversed_string[i];
	i--;
	j = 0;
	while (i >= 0)
	{
		reversed_string[j] = *(s + i);
		j++;
		i--;
	}
	s = reversed_string;
}
