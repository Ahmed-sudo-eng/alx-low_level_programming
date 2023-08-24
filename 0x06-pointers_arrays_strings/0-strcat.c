#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: spurce string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;	/* calculate dest length */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];	/* adding src to the end of dest */
	dest[i + j] = '\0';

	return (dest);
}
