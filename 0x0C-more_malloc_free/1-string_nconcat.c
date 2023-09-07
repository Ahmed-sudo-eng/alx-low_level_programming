#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: a pointer to a space in memory contain the two concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	j = i;
	for (i = 0; i < n; i++)
	{
		str[j] = s2[i];
		j++;
	}

	return (str);
}
