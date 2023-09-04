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
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)	/* Extracting str length into len */
	dup = malloc(sizeof(str) * len);/* Allocating the right amount of memory */
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		*(dup + i) = *(str + i);

	return (dup);
}
