#include "main.h"

/**
 * strncpy - a function that copy n bytes from a string to another string
 * @dest: destination string
 * @src: source string
 *
 * Return: Destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
