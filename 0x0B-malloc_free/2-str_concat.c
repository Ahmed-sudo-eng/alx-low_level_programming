#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the memory space contain the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(s1) + sizeof(s2) - (sizeof(int) * 2));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	j = i;
	for (i = 0; s2[i] != '\0'; i++)
	{
		concat[j] = s2[i];
		j++;
	}
	return (concat);
}
