#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the striing given as a parameter
 * @str: string to duplicate
 *
 * Return: a pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(str));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		*(dup + i) = *(str + i);

	return (dup);
}
