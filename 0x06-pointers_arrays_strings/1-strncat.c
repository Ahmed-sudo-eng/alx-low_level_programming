#include "main.h"

/**
 * _strncat - a function that concatenates two strings depends on the number
 * of bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: Destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;	/* get dest length */
	j = 0;
	while (j < n)
	{
		dest[i + j] = src[j];	/* add n bytes from src to dest */
		j++;
	}
	dest[i + j] = '\0';
	return (dest);

}
